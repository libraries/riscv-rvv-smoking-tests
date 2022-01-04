#include <stddef.h>
#include <stdint.h>

void vwaddu_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][8]);

int main() {
  uint64_t x[100][4] = {{0x986a686578456056, 0x44a705073f90be80, 0xb1db9b0fecbfaabe, 0x1735808ee4398bca},
                        {0xbe55668178139c8e, 0x0000020000000000, 0x7f2e6910bdea3ffd, 0x00000bea6a6af755},
                        {0x0000000001000000, 0xffffffffffffffff, 0x8c91e2fe14041a34, 0x5052886f7169c8c5},
                        {0xea2177d8d5100000, 0x0000800000000000, 0xc10a152d71cb3f16, 0xbebf0929f41aa230},
                        {0x0000000000000080, 0xfad4dc0000000000, 0xf3fbe985738811dd, 0xcb9848f06e9659f6},
                        {0xc7dee68fffbaf900, 0xc9d368e6546c1f00, 0xca9d54bd4e78980e, 0x00004a9e26b7f794},
                        {0xa8519a5b46242cc0, 0x58aee9fdc3f41b74, 0x3b0d936889b10a5d, 0x262a15662b298944},
                        {0xe5baa16ee5b5419e, 0x986a686578456056, 0x2e00000000000000, 0x2c1fb5204d248917},
                        {0xca9d54bd4e78980e, 0x00129af7f2440efe, 0x63eb500cce126b70, 0x0000000000002000},
                        {0xd251a40a022b9000, 0x0000020000000000, 0x986a686578456056, 0x0000020000000000},
                        {0x0000000000000067, 0xbad28e0ca5854070, 0x93d7d7a9d87056f0, 0x7c6bcb08155fac38},
                        {0xd27d2fde3497614c, 0x0010000000000000, 0x61fd04828c93ce01, 0x00000000a865d7d4},
                        {0x00020e6dfbb7c441, 0x31523358d080e093, 0x0010000000000000, 0x8c91e2fe14041a34},
                        {0x2d21e3da342cd6be, 0xd251a40a022b9000, 0x8f09996552504a5d, 0xca9d54bd4e78980e},
                        {0x4a6c986967d5ace8, 0x686f332000000000, 0xa73c905bcbc01878, 0x996d1b60923c18a6},
                        {0x6d159abfb3030000, 0x000000000000714c, 0x314320aa7da5b1ef, 0xffffffffffffffff},
                        {0x7dc2ae94e4000000, 0x0000000000000080, 0x000000000000000d, 0x8b4eb00000000000},
                        {0x6465f271027abfa8, 0x262a15662b298944, 0x3d0e482377794618, 0x867e3492977cb1bb},
                        {0x63eb500cce126b70, 0xa6a669d1baba633e, 0xbad28e0ca5854070, 0x000000000000015b},
                        {0x0000000380f3cf69, 0xa73c905bcbc01878, 0xc9d368e6546c1f00, 0x0000000100000000},
                        {0x6edd225600000000, 0x05ada4e53975b451, 0xff98837fda2a5bdf, 0x3b4de2fabe6d6476},
                        {0xf5bad73c74be6d8a, 0x00129af7f2440efe, 0x0f812a265e560f2b, 0x4fcf7212bebfdd89},
                        {0x000000000000714c, 0xdfd83d690e5f073e, 0x63eb500cce126b70, 0x68323fe289df33d1},
                        {0x44a705073f90be80, 0x6d159abfb3030000, 0x000000000000000d, 0x3b0d936889b10a5d},
                        {0xea2177d8d5100000, 0x4fcf7212bebfdd89, 0xb040414dd8c98a14, 0xea59a91078581c00},
                        {0x90e1bc8ba22d3294, 0xc3bd5e2cd52318a8, 0x31523358d080e093, 0x02ab7bb54e687499},
                        {0x0000000000010000, 0x262a15662b298944, 0x00000000000075da, 0x62daff171a9fae42},
                        {0x02ab7bb54e687499, 0x6465f271027abfa8, 0x34f2a050c605b6b0, 0x0000000000000001},
                        {0xfad4dc0000000000, 0x0100000000000000, 0x31a7445bdf8bcb5c, 0x3b0d936889b10a5d},
                        {0x34f2a050c605b6b0, 0xbad28e0ca5854070, 0x000000000000714c, 0x34f2a050c605b6b0},
                        {0xfecee737556609f5, 0xaf29109cc0000000, 0x000000000000714c, 0x44a705073f90be80},
                        {0x2c1fb5204d248917, 0x14d93f0c55095499, 0x3d0e482377794618, 0x14d93f0c55095499},
                        {0x9480583abdfb5837, 0xdf9a26c8470349dd, 0x6465f271027abfa8, 0x3b4de2fabe6d6476},
                        {0xffffffffffffffff, 0x9480583abdfb5837, 0xff98837fda2a5bdf, 0xbad28e0ca5854070},
                        {0xa6a669d1baba633e, 0x0ec6680cabb95f09, 0xdf9a26c8470349dd, 0x9480583abdfb5837},
                        {0x00020e6dfbb7c441, 0x8c91e2fe14041a34, 0x2e00000000000000, 0x686f332000000000},
                        {0x9480583abdfb5837, 0x7c6bcb08155fac38, 0x90e1bc8ba22d3294, 0xbebf0929f41aa230},
                        {0x93d7d7a9d87056f0, 0x8f09996552504a5d, 0x9420000000000000, 0x0000000000002000},
                        {0xea59a91078581c00, 0x3b4de2fabe6d6476, 0x000000a3714b9ad2, 0x8a4a182923bdf75a},
                        {0xa6a669d1baba633e, 0x7f2e6910bdea3ffd, 0xc9d368e6546c1f00, 0x14d93f0c55095499},
                        {0x3b4de2fabe6d6476, 0xdf9a26c8470349dd, 0x986a686578456056, 0x0000000000000001},
                        {0x0000000000000001, 0xc7dee68fffbaf900, 0x2c1fb5204d248917, 0x0f812a265e560f2b},
                        {0xc10a152d71cb3f16, 0x0000000000002000, 0xf0fe55be95a18d13, 0xf2a6b292a535dc4e},
                        {0xcb9848f06e9659f6, 0x00000000a865d7d4, 0x867e3492977cb1bb, 0x686f332000000000},
                        {0x8f09996552504a5d, 0xc7dee68fffbaf900, 0x1234769364d9eac9, 0xf0fe55be95a18d13},
                        {0x2c1fb5204d248917, 0xe5baa16ee5b5419e, 0x2e00000000000000, 0xcb9848f06e9659f6},
                        {0x0000000000002000, 0x867e3492977cb1bb, 0x4fcf7212bebfdd89, 0x0010000000000000},
                        {0x996d1b60923c18a6, 0x0000000000000040, 0x00000000a865d7d4, 0xa73c905bcbc01878},
                        {0xa6a669d1baba633e, 0x00000bea6a6af755, 0x86ddce906c8cdb4d, 0xfad4dc0000000000},
                        {0x44a705073f90be80, 0x2d21e3da342cd6be, 0x34f2a050c605b6b0, 0xdfd3a0870f60e072},
                        {0xd27d2fde3497614c, 0x58aee9fdc3f41b74, 0xffffffffffffffff, 0x0000000000000004},
                        {0xb36eb1caa58ee7dc, 0x3b4de2fabe6d6476, 0x7fc92593c865b4c2, 0x0000000000000040},
                        {0xdfd3a0870f60e072, 0x68323fe289df33d1, 0xff98837fda2a5bdf, 0x0000800000000000},
                        {0xaf29109cc0000000, 0xca9d54bd4e78980e, 0xc3bd5e2cd52318a8, 0x25474d793f2c7d32},
                        {0x4cf560811e3465c5, 0x8f09996552504a5d, 0x61fd04828c93ce01, 0x05ada4e53975b451},
                        {0xf3fbe985738811dd, 0x8000000000000000, 0x00129af7f2440efe, 0xe5baa16ee5b5419e},
                        {0x6edd225600000000, 0x0000000000000000, 0xbe55668178139c8e, 0x9480583abdfb5837},
                        {0x1234769364d9eac9, 0x4ab9cfc9a41744c4, 0x4cf560811e3465c5, 0xc10a152d71cb3f16},
                        {0x00129af7f2440efe, 0xb040414dd8c98a14, 0xd0abd7d3688aa0d7, 0x1735808ee4398bca},
                        {0xc9d368e6546c1f00, 0x0000000000010000, 0x14d93f0c55095499, 0x00000000000075da},
                        {0x0000000000000004, 0xcb9848f06e9659f6, 0xffffffffffffffff, 0xe35a000000000000},
                        {0x0000000000000000, 0xc7dee68fffbaf900, 0x000000000000714c, 0x4fcf7212bebfdd89},
                        {0xe35a000000000000, 0x7fc92593c865b4c2, 0xfecee737556609f5, 0x314320aa7da5b1ef},
                        {0x0ec6680cabb95f09, 0x0000000000010000, 0x05ada4e53975b451, 0x262a15662b298944},
                        {0x34f2a050c605b6b0, 0xca9d54bd4e78980e, 0x0000000000000000, 0x58aee9fdc3f41b74},
                        {0x00000000000075da, 0x7f2e6910bdea3ffd, 0xbd6192029dd91d60, 0xc10a152d71cb3f16},
                        {0xbe55668178139c8e, 0x4a6c986967d5ace8, 0xbebf0929f41aa230, 0xff98837fda2a5bdf},
                        {0xf3fbe985738811dd, 0x6edd225600000000, 0xdfd83d690e5f073e, 0x0000000000002000},
                        {0xd27d2fde3497614c, 0x8f09996552504a5d, 0x68323fe289df33d1, 0x262a15662b298944},
                        {0x37269c228e8e3db1, 0xdf09e5c90a990b56, 0x0000000000000080, 0x0100000000000000},
                        {0x27429c30e8b6cff7, 0xc3bd5e2cd52318a8, 0xfecee737556609f5, 0x00000000000075da},
                        {0xa6a669d1baba633e, 0xf5bad73c74be6d8a, 0x4cf560811e3465c5, 0x8a4a182923bdf75a},
                        {0xdfd83d690e5f073e, 0xea2177d8d5100000, 0x90e1bc8ba22d3294, 0xa6a669d1baba633e},
                        {0x867e3492977cb1bb, 0x79780d4e5b2b3b2a, 0xdfd3a0870f60e072, 0xdfd83d690e5f073e},
                        {0x0000008000000000, 0x16b3a918e4278c9d, 0x3d0e482377794618, 0x3b0d936889b10a5d},
                        {0xff98837fda2a5bdf, 0xaf29109cc0000000, 0x2e00000000000000, 0xc7dee68fffbaf900},
                        {0x000000000003ed82, 0x0000020000000000, 0xb36eb1caa58ee7dc, 0x6d159abfb3030000},
                        {0x0f812a265e560f2b, 0xdfd3a0870f60e072, 0xd27d2fde3497614c, 0xb1db9b0fecbfaabe},
                        {0x6d159abfb3030000, 0xffffffffffffffff, 0x686f332000000000, 0xf3fbe985738811dd},
                        {0xff98837fda2a5bdf, 0xea2177d8d5100000, 0x00129af7f2440efe, 0x1000000000000000},
                        {0x61fd04828c93ce01, 0x5052886f7169c8c5, 0x1000000000000000, 0x000000000000000d},
                        {0xfecee737556609f5, 0xea59a91078581c00, 0x8a4a182923bdf75a, 0x00000000a865d7d4},
                        {0x0000000000010000, 0xbd6192029dd91d60, 0xe5baa16ee5b5419e, 0x79780d4e5b2b3b2a},
                        {0x4a6c986967d5ace8, 0x9480583abdfb5837, 0xa6a669d1baba633e, 0xa8519a5b46242cc0},
                        {0xd251a40a022b9000, 0x3b0d936889b10a5d, 0xe35a000000000000, 0x9420000000000000},
                        {0x000000000000000d, 0x27429c30e8b6cff7, 0x000000000003ed82, 0x61fd04828c93ce01},
                        {0x2c1fb5204d248917, 0x3b0d936889b10a5d, 0xc9d368e6546c1f00, 0xdf09e5c90a990b56},
                        {0x4cf560811e3465c5, 0x000000000dd2966b, 0x00000000a865d7d4, 0x4a6c986967d5ace8},
                        {0x5052886f7169c8c5, 0x1000000000000000, 0x000000000dd2966b, 0xf2a6b292a535dc4e},
                        {0xd251a40a022b9000, 0x0f812a265e560f2b, 0xfad4dc0000000000, 0x7c6bcb08155fac38},
                        {0x58aee9fdc3f41b74, 0xffffffffffffffff, 0x93d7d7a9d87056f0, 0x000000000000015b},
                        {0xf0fe55be95a18d13, 0x0000000000400000, 0x7fc92593c865b4c2, 0xa6a669d1baba633e},
                        {0x0000000000000001, 0x38be984c83ce8648, 0xfad4dc0000000000, 0xb9e2a99fdb7b2948},
                        {0x6d159abfb3030000, 0x27429c30e8b6cff7, 0x000000000003ed82, 0x14d93f0c55095499},
                        {0x9420000000000000, 0x86ddce906c8cdb4d, 0x0100000000000000, 0x0ec6680cabb95f09},
                        {0x3b4de2fabe6d6476, 0x2d21e3da342cd6be, 0x000000000000714c, 0x000000000dd2966b},
                        {0x00000000a865d7d4, 0x0000000000000004, 0x6edd225600000000, 0x0100000000000000},
                        {0xdf9a26c8470349dd, 0xc10a152d71cb3f16, 0xb36eb1caa58ee7dc, 0xbd6192029dd91d60},
                        {0x0000000000000000, 0x63eb500cce126b70, 0xb1db9b0fecbfaabe, 0xf2a6b292a535dc4e},
                        {0x314320aa7da5b1ef, 0x7f2e6910bdea3ffd, 0x0000000000000001, 0x05ada4e53975b451}};
  uint64_t y = 1;
  uint64_t e[100][8] = {{0x986a686578456057, 0x44a705073f90be80, 0xb1db9b0fecbfaabe, 0x1735808ee4398bca,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbe55668178139c8f, 0x0000020000000000, 0x7f2e6910bdea3ffd, 0x00000bea6a6af755,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000001000001, 0xffffffffffffffff, 0x8c91e2fe14041a34, 0x5052886f7169c8c5,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d5100001, 0x0000800000000000, 0xc10a152d71cb3f16, 0xbebf0929f41aa230,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000081, 0xfad4dc0000000000, 0xf3fbe985738811dd, 0xcb9848f06e9659f6,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc7dee68fffbaf901, 0xc9d368e6546c1f00, 0xca9d54bd4e78980e, 0x00004a9e26b7f794,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa8519a5b46242cc1, 0x58aee9fdc3f41b74, 0x3b0d936889b10a5d, 0x262a15662b298944,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe5baa16ee5b5419f, 0x986a686578456056, 0x2e00000000000000, 0x2c1fb5204d248917,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xca9d54bd4e78980f, 0x00129af7f2440efe, 0x63eb500cce126b70, 0x0000000000002000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd251a40a022b9001, 0x0000020000000000, 0x986a686578456056, 0x0000020000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000068, 0xbad28e0ca5854070, 0x93d7d7a9d87056f0, 0x7c6bcb08155fac38,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd27d2fde3497614d, 0x0010000000000000, 0x61fd04828c93ce01, 0x00000000a865d7d4,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00020e6dfbb7c442, 0x31523358d080e093, 0x0010000000000000, 0x8c91e2fe14041a34,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2d21e3da342cd6bf, 0xd251a40a022b9000, 0x8f09996552504a5d, 0xca9d54bd4e78980e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4a6c986967d5ace9, 0x686f332000000000, 0xa73c905bcbc01878, 0x996d1b60923c18a6,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6d159abfb3030001, 0x000000000000714c, 0x314320aa7da5b1ef, 0xffffffffffffffff,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7dc2ae94e4000001, 0x0000000000000080, 0x000000000000000d, 0x8b4eb00000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6465f271027abfa9, 0x262a15662b298944, 0x3d0e482377794618, 0x867e3492977cb1bb,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x63eb500cce126b71, 0xa6a669d1baba633e, 0xbad28e0ca5854070, 0x000000000000015b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000380f3cf6a, 0xa73c905bcbc01878, 0xc9d368e6546c1f00, 0x0000000100000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6edd225600000001, 0x05ada4e53975b451, 0xff98837fda2a5bdf, 0x3b4de2fabe6d6476,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf5bad73c74be6d8b, 0x00129af7f2440efe, 0x0f812a265e560f2b, 0x4fcf7212bebfdd89,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000714d, 0xdfd83d690e5f073e, 0x63eb500cce126b70, 0x68323fe289df33d1,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x44a705073f90be81, 0x6d159abfb3030000, 0x000000000000000d, 0x3b0d936889b10a5d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d5100001, 0x4fcf7212bebfdd89, 0xb040414dd8c98a14, 0xea59a91078581c00,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x90e1bc8ba22d3295, 0xc3bd5e2cd52318a8, 0x31523358d080e093, 0x02ab7bb54e687499,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000010001, 0x262a15662b298944, 0x00000000000075da, 0x62daff171a9fae42,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e68749a, 0x6465f271027abfa8, 0x34f2a050c605b6b0, 0x0000000000000001,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfad4dc0000000001, 0x0100000000000000, 0x31a7445bdf8bcb5c, 0x3b0d936889b10a5d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x34f2a050c605b6b1, 0xbad28e0ca5854070, 0x000000000000714c, 0x34f2a050c605b6b0,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfecee737556609f6, 0xaf29109cc0000000, 0x000000000000714c, 0x44a705073f90be80,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2c1fb5204d248918, 0x14d93f0c55095499, 0x3d0e482377794618, 0x14d93f0c55095499,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9480583abdfb5838, 0xdf9a26c8470349dd, 0x6465f271027abfa8, 0x3b4de2fabe6d6476,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x9480583abdfb5838, 0xff98837fda2a5bdf, 0xbad28e0ca5854070,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633f, 0x0ec6680cabb95f09, 0xdf9a26c8470349dd, 0x9480583abdfb5837,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00020e6dfbb7c442, 0x8c91e2fe14041a34, 0x2e00000000000000, 0x686f332000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9480583abdfb5838, 0x7c6bcb08155fac38, 0x90e1bc8ba22d3294, 0xbebf0929f41aa230,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x93d7d7a9d87056f1, 0x8f09996552504a5d, 0x9420000000000000, 0x0000000000002000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea59a91078581c01, 0x3b4de2fabe6d6476, 0x000000a3714b9ad2, 0x8a4a182923bdf75a,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633f, 0x7f2e6910bdea3ffd, 0xc9d368e6546c1f00, 0x14d93f0c55095499,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6477, 0xdf9a26c8470349dd, 0x986a686578456056, 0x0000000000000001,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000002, 0xc7dee68fffbaf900, 0x2c1fb5204d248917, 0x0f812a265e560f2b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc10a152d71cb3f17, 0x0000000000002000, 0xf0fe55be95a18d13, 0xf2a6b292a535dc4e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcb9848f06e9659f7, 0x00000000a865d7d4, 0x867e3492977cb1bb, 0x686f332000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8f09996552504a5e, 0xc7dee68fffbaf900, 0x1234769364d9eac9, 0xf0fe55be95a18d13,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2c1fb5204d248918, 0xe5baa16ee5b5419e, 0x2e00000000000000, 0xcb9848f06e9659f6,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000002001, 0x867e3492977cb1bb, 0x4fcf7212bebfdd89, 0x0010000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a7, 0x0000000000000040, 0x00000000a865d7d4, 0xa73c905bcbc01878,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633f, 0x00000bea6a6af755, 0x86ddce906c8cdb4d, 0xfad4dc0000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x44a705073f90be81, 0x2d21e3da342cd6be, 0x34f2a050c605b6b0, 0xdfd3a0870f60e072,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd27d2fde3497614d, 0x58aee9fdc3f41b74, 0xffffffffffffffff, 0x0000000000000004,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb36eb1caa58ee7dd, 0x3b4de2fabe6d6476, 0x7fc92593c865b4c2, 0x0000000000000040,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd3a0870f60e073, 0x68323fe289df33d1, 0xff98837fda2a5bdf, 0x0000800000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xaf29109cc0000001, 0xca9d54bd4e78980e, 0xc3bd5e2cd52318a8, 0x25474d793f2c7d32,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4cf560811e3465c6, 0x8f09996552504a5d, 0x61fd04828c93ce01, 0x05ada4e53975b451,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf3fbe985738811de, 0x8000000000000000, 0x00129af7f2440efe, 0xe5baa16ee5b5419e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6edd225600000001, 0x0000000000000000, 0xbe55668178139c8e, 0x9480583abdfb5837,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1234769364d9eaca, 0x4ab9cfc9a41744c4, 0x4cf560811e3465c5, 0xc10a152d71cb3f16,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00129af7f2440eff, 0xb040414dd8c98a14, 0xd0abd7d3688aa0d7, 0x1735808ee4398bca,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc9d368e6546c1f01, 0x0000000000010000, 0x14d93f0c55095499, 0x00000000000075da,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000005, 0xcb9848f06e9659f6, 0xffffffffffffffff, 0xe35a000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0xc7dee68fffbaf900, 0x000000000000714c, 0x4fcf7212bebfdd89,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe35a000000000001, 0x7fc92593c865b4c2, 0xfecee737556609f5, 0x314320aa7da5b1ef,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0ec6680cabb95f0a, 0x0000000000010000, 0x05ada4e53975b451, 0x262a15662b298944,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x34f2a050c605b6b1, 0xca9d54bd4e78980e, 0x0000000000000000, 0x58aee9fdc3f41b74,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000000075db, 0x7f2e6910bdea3ffd, 0xbd6192029dd91d60, 0xc10a152d71cb3f16,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbe55668178139c8f, 0x4a6c986967d5ace8, 0xbebf0929f41aa230, 0xff98837fda2a5bdf,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf3fbe985738811de, 0x6edd225600000000, 0xdfd83d690e5f073e, 0x0000000000002000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd27d2fde3497614d, 0x8f09996552504a5d, 0x68323fe289df33d1, 0x262a15662b298944,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x37269c228e8e3db2, 0xdf09e5c90a990b56, 0x0000000000000080, 0x0100000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x27429c30e8b6cff8, 0xc3bd5e2cd52318a8, 0xfecee737556609f5, 0x00000000000075da,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa6a669d1baba633f, 0xf5bad73c74be6d8a, 0x4cf560811e3465c5, 0x8a4a182923bdf75a,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdfd83d690e5f073f, 0xea2177d8d5100000, 0x90e1bc8ba22d3294, 0xa6a669d1baba633e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x867e3492977cb1bc, 0x79780d4e5b2b3b2a, 0xdfd3a0870f60e072, 0xdfd83d690e5f073e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000008000000001, 0x16b3a918e4278c9d, 0x3d0e482377794618, 0x3b0d936889b10a5d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xff98837fda2a5be0, 0xaf29109cc0000000, 0x2e00000000000000, 0xc7dee68fffbaf900,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000003ed83, 0x0000020000000000, 0xb36eb1caa58ee7dc, 0x6d159abfb3030000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0f812a265e560f2c, 0xdfd3a0870f60e072, 0xd27d2fde3497614c, 0xb1db9b0fecbfaabe,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6d159abfb3030001, 0xffffffffffffffff, 0x686f332000000000, 0xf3fbe985738811dd,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xff98837fda2a5be0, 0xea2177d8d5100000, 0x00129af7f2440efe, 0x1000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x61fd04828c93ce02, 0x5052886f7169c8c5, 0x1000000000000000, 0x000000000000000d,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfecee737556609f6, 0xea59a91078581c00, 0x8a4a182923bdf75a, 0x00000000a865d7d4,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000010001, 0xbd6192029dd91d60, 0xe5baa16ee5b5419e, 0x79780d4e5b2b3b2a,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4a6c986967d5ace9, 0x9480583abdfb5837, 0xa6a669d1baba633e, 0xa8519a5b46242cc0,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd251a40a022b9001, 0x3b0d936889b10a5d, 0xe35a000000000000, 0x9420000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000000000e, 0x27429c30e8b6cff7, 0x000000000003ed82, 0x61fd04828c93ce01,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2c1fb5204d248918, 0x3b0d936889b10a5d, 0xc9d368e6546c1f00, 0xdf09e5c90a990b56,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4cf560811e3465c6, 0x000000000dd2966b, 0x00000000a865d7d4, 0x4a6c986967d5ace8,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x5052886f7169c8c6, 0x1000000000000000, 0x000000000dd2966b, 0xf2a6b292a535dc4e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd251a40a022b9001, 0x0f812a265e560f2b, 0xfad4dc0000000000, 0x7c6bcb08155fac38,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x58aee9fdc3f41b75, 0xffffffffffffffff, 0x93d7d7a9d87056f0, 0x000000000000015b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf0fe55be95a18d14, 0x0000000000400000, 0x7fc92593c865b4c2, 0xa6a669d1baba633e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000002, 0x38be984c83ce8648, 0xfad4dc0000000000, 0xb9e2a99fdb7b2948,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6d159abfb3030001, 0x27429c30e8b6cff7, 0x000000000003ed82, 0x14d93f0c55095499,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9420000000000001, 0x86ddce906c8cdb4d, 0x0100000000000000, 0x0ec6680cabb95f09,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6477, 0x2d21e3da342cd6be, 0x000000000000714c, 0x000000000dd2966b,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000a865d7d5, 0x0000000000000004, 0x6edd225600000000, 0x0100000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xdf9a26c8470349de, 0xc10a152d71cb3f16, 0xb36eb1caa58ee7dc, 0xbd6192029dd91d60,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x63eb500cce126b70, 0xb1db9b0fecbfaabe, 0xf2a6b292a535dc4e,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x314320aa7da5b1f0, 0x7f2e6910bdea3ffd, 0x0000000000000001, 0x05ada4e53975b451,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  uint64_t z[100][8] = {0};
  vwaddu_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 8; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}
