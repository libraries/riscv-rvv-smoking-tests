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

    def seq(self, other: Eint) -> bool:
        return self.uint == other.uint

    def sne(self, other: Eint) -> bool:
        return self.uint != other.uint

    def slt(self, other: Eint) -> bool:
        return self.sint < other.sint

    def sgt(self, other: Eint) -> bool:
        return self.sint > other.sint

    def sltu(self, other: Eint) -> bool:
        return self.uint < other.uint

    def sgtu(self, other: Eint) -> bool:
        return self.uint > other.uint

    def sle(self, other: Eint) -> bool:
        return self.sint <= other.sint

    def sge(self, other: Eint) -> bool:
        return self.sint >= other.sint

    def sleu(self, other: Eint) -> bool:
        return self.uint <= other.uint

    def sgeu(self, other: Eint) -> bool:
        return self.uint >= other.uint

    # __add__ = add
    # __sub__ = sub
    # __mul__ = mul
    # __floordiv__ = divu
    # __truediv__ = divu
    # __mod__ = remu
    # __lt__ = sltu
    # __gt__ = sgtu
    # __le__ = sleu
    # __ge__ = sgeu
    # __eq__ = seq
    # __ne__ = sne
    # __lshift__ = sll
    # __rshift__ = srl

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

def gen_vvv():
    x = [E32.from_rand() for _ in range(100)]
    y = [E32.from_rand() for _ in range(100)]
    r = [E64.from_rand() for _ in range(100)]
    for i in range(100):
        r[i] = E64.from_u((E64.from_i(-2 * y[i].uint).uint + z[i].uint) % (1 << 64))
    print_array(x)
    print_array(y)
    print_array(r)

# def gen_mvv():
#     lhs = [U256.from_rand() for _ in range(96)]
#     rhs = [U256.from_rand() for _ in range(96)]
#     r = [0 for _ in range(12)]
#     for i in range(96):
#         if i % 3 == 0:
#             lhs[i] = U256.from_i(-(1 << 255) + random.randint(0, 0x7fffffffffffffff))
#     #     rhs[i] = U256.from_u(0x7fffffffffffffff)
#     def f(x: Eint, y: Eint):
#         cond_a = x.sint - 0x7fffffffffffffff > (1 << 255) - 1
#         cond_b = x.sint - 0x7fffffffffffffff < -(1 << 255)
#         return cond_a | cond_b
#     for i in range(96):
#         if f(lhs[i], rhs[i]):
#             r[i // 8] |= 1 << (i % 8)
#     print_array(lhs)
#     print_array(rhs)
#     print_masks(r)

# def gen_mmm():
#     lhs = [random.randint(0, 0xff) for _ in range(12)]
#     rhs = [random.randint(0, 0xff) for _ in range(12)]
#     r = [0 for _ in range(12)]
#     for i in range(12):
#         r[i] = 255 - (lhs[i] ^ rhs[i])
#     print_masks(lhs)
#     print_masks(rhs)
#     print_masks(r)

x = [E64.from_rand() for _ in range(100)]
y = [E32.from_rand() for _ in range(100)]
r = [E64.from_rand() for _ in range(100)]
for i in range(100):
    r[i] = E64.from_u(x[i].uint).wrapping_sub(E64.from_u(y[i].uint))

print_array(x)
print_array(y)
print_array(r)
