import random
import typing


Eint = typing.Any


class Eint:

    bits = 64

    def __init__(self, x: int):
        assert x >= 0, x
        assert x < self.mask() + 1, x
        self.uint = x
        if x > self.mask() // 2:
            self.sint = x - self.mask() - 1
        else:
            self.sint = x

    def __repr__(self):
        if self.bits == 8:
            return f'0x{self.uint:02x}'
        if self.bits == 16:
            return f'0x{self.uint:04x}'
        if self.bits == 32:
            return f'0x{self.uint:08x}'
        if self.bits == 64:
            return f'0x{self.uint:016x}'
        u64s = []
        for i in range(0, self.bits, 64):
            u64s.append((self.uint >> i) & 0xffffffffffffffff)
        return '{' + ','.join([f'0x{i:016x}' for i in u64s]) + '}'

    @classmethod
    def from_u(cls, u):
        return cls(u)

    @classmethod
    def from_i(cls, i):
        if i < 0:
            return cls((1 << cls.bits) + i)
        return cls(i)

    @classmethod
    def from_rand(cls):
        return cls(random.randint(0, (1 << cls.bits) - 1))

    @classmethod
    def mask(cls):
        return (1 << cls.bits) - 1

    def wrapping_add(self, other: Eint) -> Eint:
        return self.__class__.from_u((self.uint + other.uint) & self.mask())

    def wrapping_div_s(self, other: Eint) -> Eint:
        if other.uint == 0:
            return Eint(self.mask())
        if self.uint == 1 << (self.bits - 1) and other.uint == self.mask():
            return self
        r = self.sint // other.sint
        if r < 0 and self.sint % other.sint != 0:
            r += 1
        return self.__class__.from_i(r)

    def wrapping_div_u(self, other: Eint) -> Eint:
        if other.uint == 0:
            return Eint(self.mask())
        return self.__class__.from_u(self.uint // other.uint)

    def wrapping_mul(self, other: Eint) -> Eint:
        return self.__class__.from_u((self.uint * other.uint) & self.mask())

    def wrapping_rem_s(self, other: Eint) -> Eint:
        if other.uint == 0:
            return self.__class__.from_u(self.uint)
        if self.uint == 1 << (self.bits - 1) and other.uint == self.mask():
            return self.__class__.from_u(0)
        return self.__class__.from_i(self.sint - self.div(other).sint * other.sint)

    def wrapping_rem_u(self, other: Eint) -> Eint:
        if other.uint == 0:
            return self.__class__.from_u(self.uint)
        return self.__class__.from_u(self.uint % other.uint)

    def wrapping_sub(self, other: Eint) -> Eint:
        x = self.uint - other.uint
        if x < 0:
            return self.__class__.from_i(x)
        else:
            return self.__class__.from_u(x)

    def sll(self, other: Eint) -> Eint:
        shamt = other.uint % self.bits
        return self.__class__.from_u((self.uint << shamt) & self.mask())

    def srl(self, other: Eint) -> Eint:
        shamt = other.uint % self.bits
        return self.__class__.from_u(self.uint >> shamt)

    def sra(self, other: Eint) -> Eint:
        shamt = other.uint % self.bits
        if self.uint < (1 << (self.bits - 1)):
            return self.__class__.from_u(self.uint >> shamt)
        else:
            a = self.uint >> shamt
            b = ((1 << shamt) - 1) << (self.bits - shamt)
            return self.__class__.from_u(a | b)


class E8(Eint):
    bits = 8


class E16(Eint):
    bits = 16


class E32(Eint):
    bits = 32


class E64(Eint):
    bits = 64


class E128(Eint):
    bits = 128


class E256(Eint):
    bits = 256


class E512(Eint):
    bits = 512


class E1024(Eint):
    bits = 1024


def print_array(u: typing.List[Eint]):
    print('{' + ','.join([repr(e) for e in u]) + '}')


def print_masks(u: typing.List[int]):
    print('{' + ','.join([f'0x{e:02x}' for e in u]) + '}')


x = [E64.from_rand() for _ in range(100)]
y = [E64.from_rand() for _ in range(100)]
r = [E64.from_rand() for _ in range(100)]
for i in range(100):
    r[i] = x[i].wrapping_add(y[i])

print_array(x)
print_array(y)
print_array(r)
