#include <stddef.h>
#include <stdint.h>

void vmseq_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[100][4] = {{0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb1db9b0fecbfaabe, 0x0000000000002000, 0x3b0d936889b10a5d, 0x00000000000075da},
                        {0x000000000003ed82, 0x62daff171a9fae42, 0xcb9848f06e9659f6, 0xb9e2a99fdb7b2948},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0x63eb500cce126b70, 0x68323fe289df33d1, 0x31523358d080e093},
                        {0x37269c228e8e3db1, 0x2e00000000000000, 0x3d0e482377794618, 0xbe55668178139c8e},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6edd225600000000, 0x9480583abdfb5837, 0x000000000000714c, 0x0000000000000067},
                        {0x7fc92593c865b4c2, 0x6d159abfb3030000, 0x00000000000075da, 0x000000a3714b9ad2},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8b4eb00000000000, 0x62daff171a9fae42, 0x686f332000000000, 0xff98837fda2a5bdf},
                        {0x00000000a865d7d4, 0xb1db9b0fecbfaabe, 0x00004a9e26b7f794, 0x0000800000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000a865d7d4, 0x6edd225600000000, 0x5052886f7169c8c5, 0x8f09996552504a5d},
                        {0x0000020000000000, 0x00000000a865d7d4, 0x7f2e6910bdea3ffd, 0xfad4dc0000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9d8dbb3a5bde4347, 0x31523358d080e093, 0x0da24e08451a8d1a, 0xdf09e5c90a990b56},
                        {0xbad28e0ca5854070, 0x9480583abdfb5837, 0x314320aa7da5b1ef, 0x4fcf7212bebfdd89},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb040414dd8c98a14, 0x34f2a050c605b6b0, 0x0000800000000000, 0x0010000000000000},
                        {0xbd6192029dd91d60, 0xa6a669d1baba633e, 0x62daff171a9fae42, 0x0000000000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc9d368e6546c1f00, 0xea2177d8d5100000, 0x37269c228e8e3db1, 0x4ab9cfc9a41744c4},
                        {0xd251a40a022b9000, 0xa73c905bcbc01878, 0xbad28e0ca5854070, 0x0000000000400000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb36eb1caa58ee7dc, 0x4ab9cfc9a41744c4, 0xc7dee68fffbaf900, 0x7c6bcb08155fac38},
                        {0x4fcf7212bebfdd89, 0x000000a3714b9ad2, 0x9480583abdfb5837, 0x1000000000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000000075da, 0xb9e2a99fdb7b2948, 0x0000008000000000, 0xdfd3a0870f60e072},
                        {0xf2a6b292a535dc4e, 0x0000000000400000, 0xd27d2fde3497614c, 0x00000000a865d7d4},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd251a40a022b9000, 0x0ec6680cabb95f09, 0x3b4de2fabe6d6476, 0xa73c905bcbc01878},
                        {0xf0fe55be95a18d13, 0x58aee9fdc3f41b74, 0x000000000000714c, 0xc9d368e6546c1f00},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf0fe55be95a18d13, 0x2e00000000000000, 0x58aee9fdc3f41b74, 0x7f2e6910bdea3ffd},
                        {0x0000020000000000, 0x90e1bc8ba22d3294, 0x44a705073f90be80, 0x2d21e3da342cd6be},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7f2e6910bdea3ffd, 0x05ada4e53975b451, 0xd27d2fde3497614c, 0x4fcf7212bebfdd89},
                        {0x996d1b60923c18a6, 0x00000bea6a6af755, 0x34f2a050c605b6b0, 0x27429c30e8b6cff7},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e687499, 0xe79541e25d0dba6b, 0x31523358d080e093, 0xf0fe55be95a18d13},
                        {0xcb9848f06e9659f6, 0x61fd04828c93ce01, 0x0000000100000000, 0x262a15662b298944},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000380f3cf69, 0x0ec6680cabb95f09, 0x9420000000000000, 0x686f332000000000},
                        {0x0000020000000000, 0x00000bea6a6af755, 0xfad4dc0000000000, 0x34f2a050c605b6b0},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x34f2a050c605b6b0, 0x44a705073f90be80, 0xfad4dc0000000000, 0xcb9848f06e9659f6},
                        {0xb36eb1caa58ee7dc, 0xe79541e25d0dba6b, 0x8a4a182923bdf75a, 0x4fcf7212bebfdd89},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc3bd5e2cd52318a8, 0x68323fe289df33d1, 0x2e00000000000000, 0xffffffffffffffff},
                        {0xf3fbe985738811dd, 0xe5baa16ee5b5419e, 0x0000800000000000, 0x1234769364d9eac9},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x61fd04828c93ce01, 0x7c6bcb08155fac38, 0xdf09e5c90a990b56, 0xaf29109cc0000000},
                        {0xb1db9b0fecbfaabe, 0xb040414dd8c98a14, 0x02ab7bb54e687499, 0xf0fe55be95a18d13},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd3a0870f60e072, 0x44a705073f90be80, 0x00129af7f2440efe, 0x25474d793f2c7d32},
                        {0x4fcf7212bebfdd89, 0x986a686578456056, 0x0000800000000000, 0x38be984c83ce8648},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf2a6b292a535dc4e, 0xc3bd5e2cd52318a8, 0x8000000000000000, 0x0000000000000080},
                        {0x31523358d080e093, 0xf3fbe985738811dd, 0x63eb500cce126b70, 0xf2a6b292a535dc4e},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x62daff171a9fae42, 0xf3fbe985738811dd, 0x0000000000000040},
                        {0x000000000dd2966b, 0x1234769364d9eac9, 0xb9e2a99fdb7b2948, 0x62daff171a9fae42},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d5100000, 0x000000a3714b9ad2, 0x986a686578456056, 0x05ada4e53975b451},
                        {0x000000a3714b9ad2, 0x6465f271027abfa8, 0x0000000380f3cf69, 0x996d1b60923c18a6},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe35a000000000000, 0xb040414dd8c98a14, 0xdfd3a0870f60e072, 0xf0fe55be95a18d13},
                        {0xbd6192029dd91d60, 0xb9e2a99fdb7b2948, 0x00000000a865d7d4, 0x0000000000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000400000, 0xdfd83d690e5f073e, 0x63eb500cce126b70, 0x8c91e2fe14041a34},
                        {0x00000bea6a6af755, 0x0010000000000000, 0x8000000000000000, 0x0000800000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0xf5bad73c74be6d8a, 0x0da24e08451a8d1a, 0x7c6bcb08155fac38},
                        {0xf2a6b292a535dc4e, 0xbe55668178139c8e, 0x0000000001000000, 0x996d1b60923c18a6},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb36eb1caa58ee7dc, 0xc7dee68fffbaf900, 0xc10a152d71cb3f16, 0x00129af7f2440efe},
                        {0xbe55668178139c8e, 0x0000000001000000, 0x262a15662b298944, 0x05ada4e53975b451},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4fcf7212bebfdd89, 0x68323fe289df33d1, 0xdfd3a0870f60e072, 0x000000000dd2966b},
                        {0x38be984c83ce8648, 0x314320aa7da5b1ef, 0x0000000000010000, 0xdfd83d690e5f073e},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc9d368e6546c1f00, 0x1000000000000000, 0x262a15662b298944, 0x2e00000000000000},
                        {0x8c91e2fe14041a34, 0x8b4eb00000000000, 0xd251a40a022b9000, 0x90e1bc8ba22d3294},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf5bad73c74be6d8a, 0x7c6bcb08155fac38, 0x0000000000010000, 0x37269c228e8e3db1},
                        {0x262a15662b298944, 0x4ab9cfc9a41744c4, 0xc7dee68fffbaf900, 0xbd6192029dd91d60},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x93d7d7a9d87056f0, 0x0000000000000000, 0xfad4dc0000000000, 0x0000000000002000},
                        {0x5052886f7169c8c5, 0xf5bad73c74be6d8a, 0x6465f271027abfa8, 0x0000000000400000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x61fd04828c93ce01, 0x5052886f7169c8c5, 0x27429c30e8b6cff7, 0xaf29109cc0000000},
                        {0x7fc92593c865b4c2, 0x27429c30e8b6cff7, 0x00020e6dfbb7c441, 0x86ddce906c8cdb4d},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9480583abdfb5837, 0xff98837fda2a5bdf, 0x44a705073f90be80, 0xdf09e5c90a990b56},
                        {0xdfd83d690e5f073e, 0x3b0d936889b10a5d, 0xa6a669d1baba633e, 0x0000000000000000},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea59a91078581c00, 0x1735808ee4398bca, 0xb040414dd8c98a14, 0xc7dee68fffbaf900},
                        {0x4ab9cfc9a41744c4, 0x7f2e6910bdea3ffd, 0xe5baa16ee5b5419e, 0xdfd3a0870f60e072},
                        {0x0000000000bc614e, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};
  uint64_t y = 12345678;
  uint64_t z[100][4];
  uint64_t e[100][4] = {{0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  vmseq_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
