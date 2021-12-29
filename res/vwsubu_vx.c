#include <stddef.h>
#include <stdint.h>

void vwsubu_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][8]);

int main() {
  uint64_t x[100][4] = {{0x0000008000000000, 0xdf09e5c90a990b56, 0x31a7445bdf8bcb5c, 0x00000bea6a6af755},
                        {0x6edd225600000000, 0x05ada4e53975b451, 0xb1db9b0fecbfaabe, 0x0000000000400000},
                        {0xd27d2fde3497614c, 0x996d1b60923c18a6, 0xdfd3a0870f60e072, 0x27429c30e8b6cff7},
                        {0xe5baa16ee5b5419e, 0x000000000000015b, 0x0000000000000067, 0x7f2e6910bdea3ffd},
                        {0x000000000000015b, 0x61fd04828c93ce01, 0x1234769364d9eac9, 0xe79541e25d0dba6b},
                        {0x31a7445bdf8bcb5c, 0x0000000000000040, 0xc7dee68fffbaf900, 0x000000000000714c},
                        {0x6465f271027abfa8, 0x4fcf7212bebfdd89, 0x6465f271027abfa8, 0x0000000000002000},
                        {0xb9e2a99fdb7b2948, 0x262a15662b298944, 0xf48119b103954df1, 0xdfd3a0870f60e072},
                        {0x0000800000000000, 0x0000000000000067, 0x02ab7bb54e687499, 0x9d8dbb3a5bde4347},
                        {0x9420000000000000, 0x00020e6dfbb7c441, 0xc10a152d71cb3f16, 0x86ddce906c8cdb4d},
                        {0xfad4dc0000000000, 0xb040414dd8c98a14, 0xe5baa16ee5b5419e, 0x0100000000000000},
                        {0x31523358d080e093, 0x0100000000000000, 0xbd6192029dd91d60, 0x0000000000010000},
                        {0x1735808ee4398bca, 0x0100000000000000, 0xbad28e0ca5854070, 0x262a15662b298944},
                        {0x000000000000714c, 0x16b3a918e4278c9d, 0x9480583abdfb5837, 0xd0abd7d3688aa0d7},
                        {0x0000000100000000, 0x0000000000000001, 0xe5baa16ee5b5419e, 0xbad28e0ca5854070},
                        {0x0000020000000000, 0x8000000000000000, 0x4cf560811e3465c5, 0xea59a91078581c00},
                        {0x0000000000002000, 0xa6a669d1baba633e, 0xbe55668178139c8e, 0xd27d2fde3497614c},
                        {0x314320aa7da5b1ef, 0x0000000000000001, 0x6edd225600000000, 0x00000bea6a6af755},
                        {0x34f2a050c605b6b0, 0xb36eb1caa58ee7dc, 0x262a15662b298944, 0x0da24e08451a8d1a},
                        {0xdfd3a0870f60e072, 0x0ec6680cabb95f09, 0x9420000000000000, 0x7f2e6910bdea3ffd},
                        {0x0000000000000000, 0xd27d2fde3497614c, 0x63eb500cce126b70, 0x6d159abfb3030000},
                        {0x00020e6dfbb7c441, 0x27429c30e8b6cff7, 0x000000000000000d, 0x7f2e6910bdea3ffd},
                        {0x867e3492977cb1bb, 0x8c91e2fe14041a34, 0xa73c905bcbc01878, 0x1000000000000000},
                        {0xc10a152d71cb3f16, 0xa8519a5b46242cc0, 0x986a686578456056, 0x31523358d080e093},
                        {0x62daff171a9fae42, 0x000000000000714c, 0x68323fe289df33d1, 0x93d7d7a9d87056f0},
                        {0x0ec6680cabb95f09, 0x9420000000000000, 0x1000000000000000, 0x00020e6dfbb7c441},
                        {0x31523358d080e093, 0xbebf0929f41aa230, 0xf0fe55be95a18d13, 0xff98837fda2a5bdf},
                        {0xdf9a26c8470349dd, 0xe79541e25d0dba6b, 0x34f2a050c605b6b0, 0x0000000000000004},
                        {0x0000000001000000, 0xe5baa16ee5b5419e, 0x8000000000000000, 0x8c91e2fe14041a34},
                        {0x3b0d936889b10a5d, 0x00129af7f2440efe, 0x9d8dbb3a5bde4347, 0x31523358d080e093},
                        {0xaf29109cc0000000, 0x0100000000000000, 0x0000800000000000, 0xf2a6b292a535dc4e},
                        {0x31523358d080e093, 0x68323fe289df33d1, 0x0f812a265e560f2b, 0x38be984c83ce8648},
                        {0xc10a152d71cb3f16, 0x000000000000015b, 0x1234769364d9eac9, 0x9480583abdfb5837},
                        {0x0000000000002000, 0xea2177d8d5100000, 0x5052886f7169c8c5, 0x16b3a918e4278c9d},
                        {0x0000000000000001, 0x8000000000000000, 0x986a686578456056, 0x1735808ee4398bca},
                        {0xa6a669d1baba633e, 0x000000000003ed82, 0xdfd3a0870f60e072, 0xb1db9b0fecbfaabe},
                        {0x31523358d080e093, 0x6d159abfb3030000, 0x27429c30e8b6cff7, 0xb040414dd8c98a14},
                        {0xf3fbe985738811dd, 0xe79541e25d0dba6b, 0x0000000000000001, 0x262a15662b298944},
                        {0x31523358d080e093, 0xc7dee68fffbaf900, 0xca9d54bd4e78980e, 0x7f2e6910bdea3ffd},
                        {0x4cf560811e3465c5, 0x986a686578456056, 0x8b4eb00000000000, 0x05ada4e53975b451},
                        {0x3b4de2fabe6d6476, 0x9d8dbb3a5bde4347, 0x05ada4e53975b451, 0xd27d2fde3497614c},
                        {0x16b3a918e4278c9d, 0x6d159abfb3030000, 0x0000000000000004, 0xbe55668178139c8e},
                        {0xf48119b103954df1, 0x0ec6680cabb95f09, 0x0ec6680cabb95f09, 0x27429c30e8b6cff7},
                        {0x93d7d7a9d87056f0, 0x6465f271027abfa8, 0x6edd225600000000, 0x3b4de2fabe6d6476},
                        {0x38be984c83ce8648, 0xdfd3a0870f60e072, 0x000000a3714b9ad2, 0xe35a000000000000},
                        {0xbe55668178139c8e, 0x0da24e08451a8d1a, 0x0000008000000000, 0xcb9848f06e9659f6},
                        {0xb1db9b0fecbfaabe, 0x1735808ee4398bca, 0x000000a3714b9ad2, 0x6d159abfb3030000},
                        {0x996d1b60923c18a6, 0xc3bd5e2cd52318a8, 0x8f09996552504a5d, 0x2c1fb5204d248917},
                        {0x9d8dbb3a5bde4347, 0x8a4a182923bdf75a, 0x4fcf7212bebfdd89, 0xe5baa16ee5b5419e},
                        {0x00129af7f2440efe, 0x7fc92593c865b4c2, 0xbebf0929f41aa230, 0x00129af7f2440efe},
                        {0x0000800000000000, 0x58aee9fdc3f41b74, 0x996d1b60923c18a6, 0x0100000000000000},
                        {0xe79541e25d0dba6b, 0xff98837fda2a5bdf, 0x000000a3714b9ad2, 0x0010000000000000},
                        {0xb040414dd8c98a14, 0x00129af7f2440efe, 0x00020e6dfbb7c441, 0xf3fbe985738811dd},
                        {0x58aee9fdc3f41b74, 0x2c1fb5204d248917, 0xf3fbe985738811dd, 0xbd6192029dd91d60},
                        {0xd27d2fde3497614c, 0xdfd3a0870f60e072, 0x1234769364d9eac9, 0xea2177d8d5100000},
                        {0x0000000000000067, 0xea59a91078581c00, 0xd251a40a022b9000, 0x00000000000075da},
                        {0x0000000000000004, 0xdfd83d690e5f073e, 0x9480583abdfb5837, 0x90e1bc8ba22d3294},
                        {0x6465f271027abfa8, 0x62daff171a9fae42, 0x9d8dbb3a5bde4347, 0x0000000000000001},
                        {0x7fc92593c865b4c2, 0x68323fe289df33d1, 0xb36eb1caa58ee7dc, 0x1000000000000000},
                        {0xb1db9b0fecbfaabe, 0xfecee737556609f5, 0x7fc92593c865b4c2, 0xbd6192029dd91d60},
                        {0xca9d54bd4e78980e, 0x31523358d080e093, 0x00004a9e26b7f794, 0xb36eb1caa58ee7dc},
                        {0xc3bd5e2cd52318a8, 0x7fc92593c865b4c2, 0x0ec6680cabb95f09, 0x6465f271027abfa8},
                        {0x4fcf7212bebfdd89, 0xdfd3a0870f60e072, 0x000000000003ed82, 0x02ab7bb54e687499},
                        {0xe35a000000000000, 0x4a6c986967d5ace8, 0x02ab7bb54e687499, 0x9480583abdfb5837},
                        {0x0000000100000000, 0x9d8dbb3a5bde4347, 0xb9e2a99fdb7b2948, 0xa73c905bcbc01878},
                        {0x314320aa7da5b1ef, 0x000000a3714b9ad2, 0x7c6bcb08155fac38, 0x2d21e3da342cd6be},
                        {0x9480583abdfb5837, 0x9420000000000000, 0xa6a669d1baba633e, 0x000000000000000d},
                        {0x0000000100000000, 0xffffffffffffffff, 0xff98837fda2a5bdf, 0x63eb500cce126b70},
                        {0x25474d793f2c7d32, 0x37269c228e8e3db1, 0xe79541e25d0dba6b, 0x4ab9cfc9a41744c4},
                        {0x0100000000000000, 0x0000000000000000, 0x0000800000000000, 0xa6a669d1baba633e},
                        {0x7dc2ae94e4000000, 0x986a686578456056, 0x686f332000000000, 0xb1db9b0fecbfaabe},
                        {0xb040414dd8c98a14, 0xfecee737556609f5, 0x00000bea6a6af755, 0x4a6c986967d5ace8},
                        {0x8c91e2fe14041a34, 0xaf29109cc0000000, 0x986a686578456056, 0x000000000000015b},
                        {0xf3fbe985738811dd, 0x37269c228e8e3db1, 0xf5bad73c74be6d8a, 0xa6a669d1baba633e},
                        {0x00000000000075da, 0xb040414dd8c98a14, 0x86ddce906c8cdb4d, 0x0000000001000000},
                        {0x2d21e3da342cd6be, 0xea2177d8d5100000, 0x0000020000000000, 0xdf09e5c90a990b56},
                        {0xea59a91078581c00, 0xbd6192029dd91d60, 0x0000000000400000, 0x3b4de2fabe6d6476},
                        {0x1735808ee4398bca, 0x0000008000000000, 0xf3fbe985738811dd, 0x996d1b60923c18a6},
                        {0x58aee9fdc3f41b74, 0x0000000000002000, 0xca9d54bd4e78980e, 0x0100000000000000},
                        {0x25474d793f2c7d32, 0x90e1bc8ba22d3294, 0x0000000001000000, 0x38be984c83ce8648},
                        {0x0000000380f3cf69, 0xe35a000000000000, 0xc9d368e6546c1f00, 0x0000000000000000},
                        {0x61fd04828c93ce01, 0xdf09e5c90a990b56, 0xf2a6b292a535dc4e, 0x000000000000714c},
                        {0x9d8dbb3a5bde4347, 0xa73c905bcbc01878, 0x44a705073f90be80, 0x93d7d7a9d87056f0},
                        {0x05ada4e53975b451, 0x0da24e08451a8d1a, 0x8f09996552504a5d, 0x8a4a182923bdf75a},
                        {0x4a6c986967d5ace8, 0x00129af7f2440efe, 0x02ab7bb54e687499, 0xe5baa16ee5b5419e},
                        {0x02ab7bb54e687499, 0x0000000000000000, 0x6d159abfb3030000, 0xff98837fda2a5bdf},
                        {0x000000000000015b, 0x996d1b60923c18a6, 0x0000000000000001, 0x00004a9e26b7f794},
                        {0x996d1b60923c18a6, 0xc3bd5e2cd52318a8, 0xb1db9b0fecbfaabe, 0x0000000000000040},
                        {0x34f2a050c605b6b0, 0x6d159abfb3030000, 0x61fd04828c93ce01, 0xc3bd5e2cd52318a8},
                        {0x262a15662b298944, 0x314320aa7da5b1ef, 0x00129af7f2440efe, 0x37269c228e8e3db1},
                        {0x1735808ee4398bca, 0x8b4eb00000000000, 0x68323fe289df33d1, 0x0000008000000000},
                        {0x7f2e6910bdea3ffd, 0x9480583abdfb5837, 0x9d8dbb3a5bde4347, 0x000000000dd2966b},
                        {0xbd6192029dd91d60, 0x000000000000015b, 0xc7dee68fffbaf900, 0x62daff171a9fae42},
                        {0xea2177d8d5100000, 0xe5baa16ee5b5419e, 0xbebf0929f41aa230, 0x0000000000000000},
                        {0x000000000dd2966b, 0x3d0e482377794618, 0x0000008000000000, 0x0000000000000000},
                        {0xb040414dd8c98a14, 0xbad28e0ca5854070, 0x3b0d936889b10a5d, 0x00129af7f2440efe},
                        {0x14d93f0c55095499, 0xb36eb1caa58ee7dc, 0x02ab7bb54e687499, 0xfad4dc0000000000},
                        {0x3b4de2fabe6d6476, 0x0da24e08451a8d1a, 0x0000000000000067, 0x0000000000400000},
                        {0xb9e2a99fdb7b2948, 0xe5baa16ee5b5419e, 0x00129af7f2440efe, 0x6edd225600000000},
                        {0x4a6c986967d5ace8, 0x3b4de2fabe6d6476, 0x996d1b60923c18a6, 0xdf9a26c8470349dd}};
  uint64_t y = 1;
  uint64_t e[100][8] = {{0x0000007fffffffff, 0xdf09e5c90a990b56, 0x31a7445bdf8bcb5c, 0x00000bea6a6af755,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6edd2255ffffffff, 0x05ada4e53975b451, 0xb1db9b0fecbfaabe, 0x0000000000400000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd27d2fde3497614b, 0x996d1b60923c18a6, 0xdfd3a0870f60e072, 0x27429c30e8b6cff7,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe5baa16ee5b5419d, 0x000000000000015b, 0x0000000000000067, 0x7f2e6910bdea3ffd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000015a, 0x61fd04828c93ce01, 0x1234769364d9eac9, 0xe79541e25d0dba6b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31a7445bdf8bcb5b, 0x0000000000000040, 0xc7dee68fffbaf900, 0x000000000000714c,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6465f271027abfa7, 0x4fcf7212bebfdd89, 0x6465f271027abfa8, 0x0000000000002000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb9e2a99fdb7b2947, 0x262a15662b298944, 0xf48119b103954df1, 0xdfd3a0870f60e072,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00007fffffffffff, 0x0000000000000067, 0x02ab7bb54e687499, 0x9d8dbb3a5bde4347,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x941fffffffffffff, 0x00020e6dfbb7c441, 0xc10a152d71cb3f16, 0x86ddce906c8cdb4d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfad4dbffffffffff, 0xb040414dd8c98a14, 0xe5baa16ee5b5419e, 0x0100000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e092, 0x0100000000000000, 0xbd6192029dd91d60, 0x0000000000010000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1735808ee4398bc9, 0x0100000000000000, 0xbad28e0ca5854070, 0x262a15662b298944,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000714b, 0x16b3a918e4278c9d, 0x9480583abdfb5837, 0xd0abd7d3688aa0d7,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000ffffffff, 0x0000000000000001, 0xe5baa16ee5b5419e, 0xbad28e0ca5854070,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000001ffffffffff, 0x8000000000000000, 0x4cf560811e3465c5, 0xea59a91078581c00,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000001fff, 0xa6a669d1baba633e, 0xbe55668178139c8e, 0xd27d2fde3497614c,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x314320aa7da5b1ee, 0x0000000000000001, 0x6edd225600000000, 0x00000bea6a6af755,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x34f2a050c605b6af, 0xb36eb1caa58ee7dc, 0x262a15662b298944, 0x0da24e08451a8d1a,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd3a0870f60e071, 0x0ec6680cabb95f09, 0x9420000000000000, 0x7f2e6910bdea3ffd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffffff, 0xd27d2fde3497614b, 0x63eb500cce126b70, 0x6d159abfb3030000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00020e6dfbb7c440, 0x27429c30e8b6cff7, 0x000000000000000d, 0x7f2e6910bdea3ffd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x867e3492977cb1ba, 0x8c91e2fe14041a34, 0xa73c905bcbc01878, 0x1000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc10a152d71cb3f15, 0xa8519a5b46242cc0, 0x986a686578456056, 0x31523358d080e093,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x62daff171a9fae41, 0x000000000000714c, 0x68323fe289df33d1, 0x93d7d7a9d87056f0,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0ec6680cabb95f08, 0x9420000000000000, 0x1000000000000000, 0x00020e6dfbb7c441,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e092, 0xbebf0929f41aa230, 0xf0fe55be95a18d13, 0xff98837fda2a5bdf,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdf9a26c8470349dc, 0xe79541e25d0dba6b, 0x34f2a050c605b6b0, 0x0000000000000004,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000ffffff, 0xe5baa16ee5b5419e, 0x8000000000000000, 0x8c91e2fe14041a34,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3b0d936889b10a5c, 0x00129af7f2440efe, 0x9d8dbb3a5bde4347, 0x31523358d080e093,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xaf29109cbfffffff, 0x0100000000000000, 0x0000800000000000, 0xf2a6b292a535dc4e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e092, 0x68323fe289df33d1, 0x0f812a265e560f2b, 0x38be984c83ce8648,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc10a152d71cb3f15, 0x000000000000015b, 0x1234769364d9eac9, 0x9480583abdfb5837,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000001fff, 0xea2177d8d5100000, 0x5052886f7169c8c5, 0x16b3a918e4278c9d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x8000000000000000, 0x986a686578456056, 0x1735808ee4398bca,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633d, 0x000000000003ed82, 0xdfd3a0870f60e072, 0xb1db9b0fecbfaabe,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e092, 0x6d159abfb3030000, 0x27429c30e8b6cff7, 0xb040414dd8c98a14,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf3fbe985738811dc, 0xe79541e25d0dba6b, 0x0000000000000001, 0x262a15662b298944,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e092, 0xc7dee68fffbaf900, 0xca9d54bd4e78980e, 0x7f2e6910bdea3ffd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4cf560811e3465c4, 0x986a686578456056, 0x8b4eb00000000000, 0x05ada4e53975b451,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6475, 0x9d8dbb3a5bde4347, 0x05ada4e53975b451, 0xd27d2fde3497614c,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x16b3a918e4278c9c, 0x6d159abfb3030000, 0x0000000000000004, 0xbe55668178139c8e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf48119b103954df0, 0x0ec6680cabb95f09, 0x0ec6680cabb95f09, 0x27429c30e8b6cff7,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x93d7d7a9d87056ef, 0x6465f271027abfa8, 0x6edd225600000000, 0x3b4de2fabe6d6476,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x38be984c83ce8647, 0xdfd3a0870f60e072, 0x000000a3714b9ad2, 0xe35a000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbe55668178139c8d, 0x0da24e08451a8d1a, 0x0000008000000000, 0xcb9848f06e9659f6,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb1db9b0fecbfaabd, 0x1735808ee4398bca, 0x000000a3714b9ad2, 0x6d159abfb3030000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a5, 0xc3bd5e2cd52318a8, 0x8f09996552504a5d, 0x2c1fb5204d248917,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9d8dbb3a5bde4346, 0x8a4a182923bdf75a, 0x4fcf7212bebfdd89, 0xe5baa16ee5b5419e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00129af7f2440efd, 0x7fc92593c865b4c2, 0xbebf0929f41aa230, 0x00129af7f2440efe,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00007fffffffffff, 0x58aee9fdc3f41b74, 0x996d1b60923c18a6, 0x0100000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe79541e25d0dba6a, 0xff98837fda2a5bdf, 0x000000a3714b9ad2, 0x0010000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb040414dd8c98a13, 0x00129af7f2440efe, 0x00020e6dfbb7c441, 0xf3fbe985738811dd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x58aee9fdc3f41b73, 0x2c1fb5204d248917, 0xf3fbe985738811dd, 0xbd6192029dd91d60,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd27d2fde3497614b, 0xdfd3a0870f60e072, 0x1234769364d9eac9, 0xea2177d8d5100000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000066, 0xea59a91078581c00, 0xd251a40a022b9000, 0x00000000000075da,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000003, 0xdfd83d690e5f073e, 0x9480583abdfb5837, 0x90e1bc8ba22d3294,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6465f271027abfa7, 0x62daff171a9fae42, 0x9d8dbb3a5bde4347, 0x0000000000000001,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7fc92593c865b4c1, 0x68323fe289df33d1, 0xb36eb1caa58ee7dc, 0x1000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb1db9b0fecbfaabd, 0xfecee737556609f5, 0x7fc92593c865b4c2, 0xbd6192029dd91d60,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xca9d54bd4e78980d, 0x31523358d080e093, 0x00004a9e26b7f794, 0xb36eb1caa58ee7dc,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc3bd5e2cd52318a7, 0x7fc92593c865b4c2, 0x0ec6680cabb95f09, 0x6465f271027abfa8,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4fcf7212bebfdd88, 0xdfd3a0870f60e072, 0x000000000003ed82, 0x02ab7bb54e687499,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe359ffffffffffff, 0x4a6c986967d5ace8, 0x02ab7bb54e687499, 0x9480583abdfb5837,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000ffffffff, 0x9d8dbb3a5bde4347, 0xb9e2a99fdb7b2948, 0xa73c905bcbc01878,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x314320aa7da5b1ee, 0x000000a3714b9ad2, 0x7c6bcb08155fac38, 0x2d21e3da342cd6be,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9480583abdfb5836, 0x9420000000000000, 0xa6a669d1baba633e, 0x000000000000000d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000ffffffff, 0xffffffffffffffff, 0xff98837fda2a5bdf, 0x63eb500cce126b70,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x25474d793f2c7d31, 0x37269c228e8e3db1, 0xe79541e25d0dba6b, 0x4ab9cfc9a41744c4,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00ffffffffffffff, 0x0000000000000000, 0x0000800000000000, 0xa6a669d1baba633e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7dc2ae94e3ffffff, 0x986a686578456056, 0x686f332000000000, 0xb1db9b0fecbfaabe,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb040414dd8c98a13, 0xfecee737556609f5, 0x00000bea6a6af755, 0x4a6c986967d5ace8,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a33, 0xaf29109cc0000000, 0x986a686578456056, 0x000000000000015b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf3fbe985738811dc, 0x37269c228e8e3db1, 0xf5bad73c74be6d8a, 0xa6a669d1baba633e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000000075d9, 0xb040414dd8c98a14, 0x86ddce906c8cdb4d, 0x0000000001000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2d21e3da342cd6bd, 0xea2177d8d5100000, 0x0000020000000000, 0xdf09e5c90a990b56,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea59a91078581bff, 0xbd6192029dd91d60, 0x0000000000400000, 0x3b4de2fabe6d6476,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1735808ee4398bc9, 0x0000008000000000, 0xf3fbe985738811dd, 0x996d1b60923c18a6,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x58aee9fdc3f41b73, 0x0000000000002000, 0xca9d54bd4e78980e, 0x0100000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x25474d793f2c7d31, 0x90e1bc8ba22d3294, 0x0000000001000000, 0x38be984c83ce8648,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000380f3cf68, 0xe35a000000000000, 0xc9d368e6546c1f00, 0x0000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x61fd04828c93ce00, 0xdf09e5c90a990b56, 0xf2a6b292a535dc4e, 0x000000000000714c,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9d8dbb3a5bde4346, 0xa73c905bcbc01878, 0x44a705073f90be80, 0x93d7d7a9d87056f0,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x05ada4e53975b450, 0x0da24e08451a8d1a, 0x8f09996552504a5d, 0x8a4a182923bdf75a,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4a6c986967d5ace7, 0x00129af7f2440efe, 0x02ab7bb54e687499, 0xe5baa16ee5b5419e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e687498, 0x0000000000000000, 0x6d159abfb3030000, 0xff98837fda2a5bdf,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000015a, 0x996d1b60923c18a6, 0x0000000000000001, 0x00004a9e26b7f794,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a5, 0xc3bd5e2cd52318a8, 0xb1db9b0fecbfaabe, 0x0000000000000040,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x34f2a050c605b6af, 0x6d159abfb3030000, 0x61fd04828c93ce01, 0xc3bd5e2cd52318a8,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x262a15662b298943, 0x314320aa7da5b1ef, 0x00129af7f2440efe, 0x37269c228e8e3db1,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1735808ee4398bc9, 0x8b4eb00000000000, 0x68323fe289df33d1, 0x0000008000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7f2e6910bdea3ffc, 0x9480583abdfb5837, 0x9d8dbb3a5bde4347, 0x000000000dd2966b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbd6192029dd91d5f, 0x000000000000015b, 0xc7dee68fffbaf900, 0x62daff171a9fae42,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d50fffff, 0xe5baa16ee5b5419e, 0xbebf0929f41aa230, 0x0000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000dd2966a, 0x3d0e482377794618, 0x0000008000000000, 0x0000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb040414dd8c98a13, 0xbad28e0ca5854070, 0x3b0d936889b10a5d, 0x00129af7f2440efe,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x14d93f0c55095498, 0xb36eb1caa58ee7dc, 0x02ab7bb54e687499, 0xfad4dc0000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6475, 0x0da24e08451a8d1a, 0x0000000000000067, 0x0000000000400000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb9e2a99fdb7b2947, 0xe5baa16ee5b5419e, 0x00129af7f2440efe, 0x6edd225600000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4a6c986967d5ace7, 0x3b4de2fabe6d6476, 0x996d1b60923c18a6, 0xdf9a26c8470349dd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  uint64_t z[100][8] = {0};
  vwsubu_vx(100, x, y, z);

  // can only test one V register due to bug
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 8; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}