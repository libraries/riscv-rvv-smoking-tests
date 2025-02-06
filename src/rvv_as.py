import os
import sys


def regn(r: str) -> int:
    match r:
        case 'zero': return 0
        case 'ra': return 1
        case 'sp': return 2
        case 'gp': return 3
        case 'tp': return 4
        case 't0': return 5
        case 't1': return 6
        case 't2': return 7
        case 's0' | 'fp': return 8
        case 's1': return 9
        case 'a0': return 10
        case 'a1': return 11
        case 'a2': return 12
        case 'a3': return 13
        case 'a4': return 14
        case 'a5': return 15
        case 'a6': return 16
        case 'a7': return 17
        case 's2': return 18
        case 's3': return 19
        case 's4': return 20
        case 's5': return 21
        case 's6': return 22
        case 's7': return 23
        case 's8': return 24
        case 's9': return 25
        case 's10': return 26
        case 's11': return 27
        case 't3': return 28
        case 't4': return 29
        case 't5': return 30
        case 't6': return 31
        case _: assert False


def vegn(r: str) -> int:
    return int(r[1:])


def emit(code: int) -> str:
    a = (code >> 0x00) % 256
    b = (code >> 0x08) % 256
    c = (code >> 0x10) % 256
    d = (code >> 0x18) % 256
    return f'.byte {a:#04x}, {b:#04x}, {c:#04x}, {d:#04x}'


def conv(line: str) -> str:
    line = line.rstrip()
    text = line.lstrip()
    seps = text.split(' ', 1)
    if len(seps) < 2:
        print(line)
        return
    if seps[0].startswith('.'):
        print(line)
        return
    indent = ' ' * (len(line) - len(line.lstrip()))
    opcode = seps[0]
    args = [e.strip() for e in seps[1].split(',')]
    match opcode:
        case 'vsetvli':
            if args[2] not in ['e128', 'e256', 'e512', 'e1024']:
                print(line)
                return
            code = 0
            code |= 0b0_00000000000_00000_111_00000_1010111
            code |= regn(args[0]) << 7
            code |= regn(args[1]) << 15
            match args[2]:
                case 'e128': code |= (0b100 << 23)
                case 'e256': code |= (0b101 << 23)
                case 'e512': code |= (0b110 << 23)
                case 'e1024': code |= (0b111 << 23)
                case _: assert False
            match args[3]:
                case 'mf8': code |= (0b101 << 20)
                case 'mf4': code |= (0b110 << 20)
                case 'mf2': code |= (0b111 << 20)
                case 'm1': code |= (0b000 << 20)
                case 'm2': code |= (0b001 << 20)
                case 'm4': code |= (0b010 << 20)
                case 'm8': code |= (0b011 << 20)
                case _: assert False
            match args[4]:
                case 'ta': code |= (0b1 << 26)
                case 'tu': code |= (0b0 << 26)
                case _: assert False
            match args[5]:
                case 'ma': code |= (0b1 << 27)
                case 'mu': code |= (0b0 << 27)
                case _: assert False
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vle128.v':
            code = 0b000_100_0_00000_00000_000_00000_0000111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vle256.v':
            code = 0b000_100_0_00000_00000_101_00000_0000111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vle512.v':
            code = 0b000_100_0_00000_00000_110_00000_0000111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vle1024.v':
            code = 0b000_100_0_00000_00000_111_00000_0000111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vse128.v':
            code = 0b000_100_0_00000_00000_000_00000_0100111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vse256.v':
            code = 0b000_100_0_00000_00000_101_00000_0100111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vse512.v':
            code = 0b000_100_0_00000_00000_110_00000_0100111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case 'vse1024.v':
            code = 0b000_100_0_00000_00000_111_00000_0100111
            code |= vegn(args[0]) << 7
            code |= regn(args[1][1:-1]) << 15
            code |= 0b1 << 25
            print(f'{indent}# {text}')
            print(f'{indent}{emit(code)}')
        case _:
            print(line)


def main():
    with open(sys.argv[1], 'r') as f:
        for line in f:
            conv(line)


main()
