import random
import typing

best_numbers = [
    0x0000000000000000,
    0x0000000000000001,
    0xffffffffffffffff,
    0x8000000000000000,
    0x0000000000000004,
    0x0000000000000040,
    0x0000000000000080,
    0x0000000000002000,
    0x0000000000010000,
    0x0000000000400000,
    0x0000000001000000,
    0x0000000100000000,
    0x0000008000000000,
    0x0000020000000000,
    0x0000800000000000,
    0x0010000000000000,
    0x0100000000000000,
    0x1000000000000000,
    0x000000000000000d,
    0x0000000000000000,
    0x0000000000000067,
    0x2e00000000000000,
    0x000000000000015b,
    0x9420000000000000,
    0x00000000000075da,
    0xe35a000000000000,
    0x000000000003ed82,
    0x8b4eb00000000000,
    0x000000000000714c,
    0xfad4dc0000000000,
    0x000000000dd2966b,
    0x686f332000000000,
    0x00000000a865d7d4,
    0x6edd225600000000,
    0x0000000380f3cf69,
    0xaf29109cc0000000,
    0x000000a3714b9ad2,
    0x7dc2ae94e4000000,
    0x00000bea6a6af755,
    0xea2177d8d5100000,
    0x00004a9e26b7f794,
    0x6d159abfb3030000,
    0x00020e6dfbb7c441,
    0xd251a40a022b9000,
    0x00129af7f2440efe,
    0xc7dee68fffbaf900,
    0x05ada4e53975b451,
    0x63eb500cce126b70,
    0x314320aa7da5b1ef,
    0xd27d2fde3497614c,
    0xbe55668178139c8e,
    0x9480583abdfb5837,
    0x9d8dbb3a5bde4347,
    0x61fd04828c93ce01,
    0xdf9a26c8470349dd,
    0xca9d54bd4e78980e,
    0xb1db9b0fecbfaabe,
    0xe79541e25d0dba6b,
    0xff98837fda2a5bdf,
    0xc3bd5e2cd52318a8,
    0x02ab7bb54e687499,
    0xbebf0929f41aa230,
    0x58aee9fdc3f41b74,
    0x62daff171a9fae42,
    0xe5baa16ee5b5419e,
    0x16b3a918e4278c9d,
    0x4ab9cfc9a41744c4,
    0x86ddce906c8cdb4d,
    0x867e3492977cb1bb,
    0x3d0e482377794618,
    0x90e1bc8ba22d3294,
    0xf48119b103954df1,
    0x79780d4e5b2b3b2a,
    0xb36eb1caa58ee7dc,
    0xf0fe55be95a18d13,
    0x1234769364d9eac9,
    0x31a7445bdf8bcb5c,
    0x1735808ee4398bca,
    0x8f09996552504a5d,
    0x4fcf7212bebfdd89,
    0xdfd3a0870f60e072,
    0x25474d793f2c7d32,
    0xb9e2a99fdb7b2948,
    0x0da24e08451a8d1a,
    0x44a705073f90be80,
    0x7f2e6910bdea3ffd,
    0x7fc92593c865b4c2,
    0x0f812a265e560f2b,
    0xfecee737556609f5,
    0x996d1b60923c18a6,
    0x2c1fb5204d248917,
    0x4cf560811e3465c5,
    0xf2a6b292a535dc4e,
    0x3b4de2fabe6d6476,
    0xa6a669d1baba633e,
    0xa73c905bcbc01878,
    0x38be984c83ce8648,
    0x262a15662b298944,
    0xdf09e5c90a990b56,
    0xa8519a5b46242cc0,
    0x14d93f0c55095499,
    0xbad28e0ca5854070,
    0x93d7d7a9d87056f0,
    0x3b0d936889b10a5d,
    0x0ec6680cabb95f09,
    0x27429c30e8b6cff7,
    0x6465f271027abfa8,
    0xd0abd7d3688aa0d7,
    0x986a686578456056,
    0xc10a152d71cb3f16,
    0x4a6c986967d5ace8,
    0x37269c228e8e3db1,
    0xf5bad73c74be6d8a,
    0x68323fe289df33d1,
    0xcb9848f06e9659f6,
    0x5052886f7169c8c5,
    0xb040414dd8c98a14,
    0xea59a91078581c00,
    0x7c6bcb08155fac38,
    0xbd6192029dd91d60,
    0x8a4a182923bdf75a,
    0x8c91e2fe14041a34,
    0xc9d368e6546c1f00,
    0xdfd83d690e5f073e,
    0x34f2a050c605b6b0,
    0xf3fbe985738811dd,
    0x2d21e3da342cd6be,
    0x31523358d080e093,
]

Uint = typing.Any


class Uint:

    bits = 64

    def __init__(self, x: int):
        assert x >= 0, x
        assert x < self.mask() + 1, x
        self.uint = x
        if x > self.mask() // 2:
            self.sint = x - self.mask() - 1
        else:
            self.sint = x
        self.u64s = []
        for i in range(0, self.bits, 64):
            self.u64s.append((x >> i) & 0xffffffffffffffff)

    def __repr__(self):
        return '{' + ','.join([f'0x{i:016x}' for i in self.u64s]) + '}'

    @classmethod
    def from_u(cls, u):
        return cls(u)

    @classmethod
    def from_i(cls, i):
        if i < 0:
            return cls((1 << cls.bits) + i)
        return cls(i)

    @classmethod
    def from_u64s(cls, l: typing.List[int]):
        u = 0
        for i, e in enumerate(l):
            u |= e << (i * 64)
        return cls(u)

    @classmethod
    def from_rand(cls):
        return cls.from_u64s([random.choice(best_numbers) for _ in range(cls.bits // 64)])

    @classmethod
    def mask(cls):
        return (1 << cls.bits) - 1

    def add(self, other: Uint) -> Uint:
        return self.__class__.from_u((self.uint + other.uint) & self.mask())

    def sub(self, other: Uint) -> Uint:
        x = self.uint - other.uint
        if x < 0:
            return self.__class__.from_i(x)
        else:
            return self.__class__.from_u(x)

    def mul(self, other: Uint) -> Uint:
        return self.__class__.from_u((self.uint * other.uint) & self.mask())

    def div(self, other: Uint) -> Uint:
        if other.uint == 0:
            return Uint(self.mask())
        if self.uint == 1 << (self.bits - 1) and other.uint == self.mask():
            return self
        r = self.sint // other.sint
        if r < 0 and self.sint % other.sint != 0:
            r += 1
        return self.__class__.from_i(r)

    def divu(self, other: Uint) -> Uint:
        if other.uint == 0:
            return Uint(self.mask())
        return self.__class__.from_u(self.uint // other.uint)

    def rem(self, other: Uint) -> Uint:
        if other.uint == 0:
            return self.__class__.from_u(self.uint)
        if self.uint == 1 << (self.bits - 1) and other.uint == self.mask():
            return self.__class__.from_u(0)
        return self.__class__.from_i(self.sint - self.div(other).sint * other.sint)

    def remu(self, other: Uint) -> Uint:
        if other.uint == 0:
            return self.__class__.from_u(self.uint)
        return self.__class__.from_u(self.uint % other.uint)

    def sll(self, other: Uint) -> Uint:
        shamt = other.uint % self.bits
        return self.__class__.from_u((self.uint << shamt) & self.mask())

    def srl(self, other: Uint) -> Uint:
        shamt = other.uint % self.bits
        return self.__class__from_u(self.uint >> shamt)

    def sra(self, other: Uint) -> Uint:
        shamt = other.uint % self.bits
        if self.uint < (1 << (self.bits - 1)):
            return self.__class__.from_u(self.uint >> shamt)
        else:
            a = self.uint >> shamt
            b = ((1 << shamt) - 1) << (self.bits - shamt)
            return self.__class__.from_u(a | b)

    def seq(self, other: Uint) -> bool:
        return self.uint == other.uint

    def sne(self, other: Uint) -> bool:
        return self.uint != other.uint

    def slt(self, other: Uint) -> bool:
        return self.sint < other.sint

    def sgt(self, other: Uint) -> bool:
        return self.sint > other.sint

    def sltu(self, other: Uint) -> bool:
        return self.uint < other.uint

    def sgtu(self, other: Uint) -> bool:
        return self.uint > other.uint

    def sle(self, other: Uint) -> bool:
        return self.sint <= other.sint

    def sge(self, other: Uint) -> bool:
        return self.sint >= other.sint

    def sleu(self, other: Uint) -> bool:
        return self.uint <= other.uint

    def sgeu(self, other: Uint) -> bool:
        return self.uint >= other.uint

    __add__ = add
    __sub__ = sub
    __mul__ = mul
    __floordiv__ = divu
    __truediv__ = divu
    __mod__ = remu
    __lt__ = sltu
    __gt__ = sgtu
    __le__ = sleu
    __ge__ = sgeu
    __eq__ = seq
    __ne__ = sne
    __lshift__ = sll
    __rshift__ = srl


class U256(Uint):
    bits = 256


class U512(Uint):
    bits = 512


def print_u256_array(u: typing.List[U256]):
    print('{' + ','.join([repr(e) for e in u]) + '}')


def print_u512_array(u: typing.List[U512]):
    print('{' + ','.join([repr(e) for e in u]) + '}')


lhs = [U256.from_rand() for _ in range(100)]
rhs = [U256.from_rand() for _ in range(100)]
r = [U256(0) for _ in range(100)]
for i in range(100):
    r[i] = lhs[i].div(U256.from_i(-2))

print_u512_array(lhs)
print_u512_array(rhs)
print_u512_array(r)
