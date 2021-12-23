#include <stddef.h>
#include <stdint.h>

void vssub_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[100][4] = {{0x000000000000000d, 0x3b4de2fabe6d6476, 0x86ddce906c8cdb4d, 0x0100000000000000},
                        {0xdf9a26c8470349dd, 0x00020e6dfbb7c441, 0x34f2a050c605b6b0, 0x0000000100000000},
                        {0x4cf560811e3465c5, 0xea59a91078581c00, 0x86ddce906c8cdb4d, 0x000000000000714c},
                        {0x00000000a865d7d4, 0xd27d2fde3497614c, 0x4a6c986967d5ace8, 0x00004a9e26b7f794},
                        {0xbd6192029dd91d60, 0x0000000000400000, 0xc9d368e6546c1f00, 0xfad4dc0000000000},
                        {0x34f2a050c605b6b0, 0xd251a40a022b9000, 0xbe55668178139c8e, 0x8f09996552504a5d},
                        {0xf0fe55be95a18d13, 0xb040414dd8c98a14, 0x8000000000000000, 0xc7dee68fffbaf900},
                        {0x6edd225600000000, 0x79780d4e5b2b3b2a, 0x2c1fb5204d248917, 0xbd6192029dd91d60},
                        {0x7f2e6910bdea3ffd, 0x2c1fb5204d248917, 0x000000000003ed82, 0xff98837fda2a5bdf},
                        {0x00000bea6a6af755, 0x0000000000000000, 0x90e1bc8ba22d3294, 0x7fc92593c865b4c2},
                        {0x0000008000000000, 0xb1db9b0fecbfaabe, 0x0ec6680cabb95f09, 0x93d7d7a9d87056f0},
                        {0x686f332000000000, 0x7c6bcb08155fac38, 0xf48119b103954df1, 0x31a7445bdf8bcb5c},
                        {0x000000a3714b9ad2, 0x9480583abdfb5837, 0x7f2e6910bdea3ffd, 0x14d93f0c55095499},
                        {0x2c1fb5204d248917, 0x37269c228e8e3db1, 0x86ddce906c8cdb4d, 0x8f09996552504a5d},
                        {0x02ab7bb54e687499, 0xea59a91078581c00, 0x90e1bc8ba22d3294, 0x68323fe289df33d1},
                        {0x27429c30e8b6cff7, 0xa8519a5b46242cc0, 0x02ab7bb54e687499, 0x44a705073f90be80},
                        {0x1234769364d9eac9, 0xff98837fda2a5bdf, 0x6d159abfb3030000, 0x02ab7bb54e687499},
                        {0xdf09e5c90a990b56, 0x0000000000010000, 0xf48119b103954df1, 0xd27d2fde3497614c},
                        {0x31a7445bdf8bcb5c, 0x25474d793f2c7d32, 0x3d0e482377794618, 0x25474d793f2c7d32},
                        {0x0da24e08451a8d1a, 0x37269c228e8e3db1, 0x0000000000000067, 0x31523358d080e093},
                        {0xf0fe55be95a18d13, 0xdfd83d690e5f073e, 0x8000000000000000, 0x4ab9cfc9a41744c4},
                        {0x986a686578456056, 0x0000000000000000, 0x6d159abfb3030000, 0x2c1fb5204d248917},
                        {0x0000000000000067, 0x44a705073f90be80, 0x4cf560811e3465c5, 0x3d0e482377794618},
                        {0x3d0e482377794618, 0xb36eb1caa58ee7dc, 0x0f812a265e560f2b, 0x867e3492977cb1bb},
                        {0xdfd3a0870f60e072, 0x9d8dbb3a5bde4347, 0x000000a3714b9ad2, 0x00129af7f2440efe},
                        {0x8000000000000000, 0x0000000100000000, 0x8c91e2fe14041a34, 0x00020e6dfbb7c441},
                        {0x0000000001000000, 0x262a15662b298944, 0x0ec6680cabb95f09, 0x867e3492977cb1bb},
                        {0x0000000000000080, 0x2e00000000000000, 0xf2a6b292a535dc4e, 0x0000800000000000},
                        {0x000000000000714c, 0x0000000000010000, 0x0000800000000000, 0x8f09996552504a5d},
                        {0x6edd225600000000, 0x4a6c986967d5ace8, 0x68323fe289df33d1, 0xd0abd7d3688aa0d7},
                        {0x14d93f0c55095499, 0x9480583abdfb5837, 0x0000000000000080, 0x31a7445bdf8bcb5c},
                        {0x7c6bcb08155fac38, 0x0da24e08451a8d1a, 0x000000000000000d, 0x0000000000000080},
                        {0xd251a40a022b9000, 0x0000000000010000, 0x8000000000000000, 0xbe55668178139c8e},
                        {0x0000800000000000, 0x8a4a182923bdf75a, 0x314320aa7da5b1ef, 0x93d7d7a9d87056f0},
                        {0x79780d4e5b2b3b2a, 0xf2a6b292a535dc4e, 0xc10a152d71cb3f16, 0xff98837fda2a5bdf},
                        {0x0000000000000040, 0xc10a152d71cb3f16, 0x0000000000000000, 0x4ab9cfc9a41744c4},
                        {0xca9d54bd4e78980e, 0x314320aa7da5b1ef, 0x0000000000002000, 0x686f332000000000},
                        {0xf5bad73c74be6d8a, 0x37269c228e8e3db1, 0xdfd3a0870f60e072, 0xd27d2fde3497614c},
                        {0xea2177d8d5100000, 0x7fc92593c865b4c2, 0xea59a91078581c00, 0x4fcf7212bebfdd89},
                        {0x8b4eb00000000000, 0xf5bad73c74be6d8a, 0xbebf0929f41aa230, 0x0000000000000067},
                        {0x8000000000000000, 0x0000000000010000, 0x00129af7f2440efe, 0x4a6c986967d5ace8},
                        {0x61fd04828c93ce01, 0x0000000000000000, 0xf3fbe985738811dd, 0x4fcf7212bebfdd89},
                        {0x2d21e3da342cd6be, 0xc7dee68fffbaf900, 0x8b4eb00000000000, 0xffffffffffffffff},
                        {0x61fd04828c93ce01, 0xd0abd7d3688aa0d7, 0xf5bad73c74be6d8a, 0xbd6192029dd91d60},
                        {0x000000000000015b, 0x686f332000000000, 0x8c91e2fe14041a34, 0x38be984c83ce8648},
                        {0x9d8dbb3a5bde4347, 0xd251a40a022b9000, 0x93d7d7a9d87056f0, 0xd251a40a022b9000},
                        {0x0000000000010000, 0xf0fe55be95a18d13, 0xbad28e0ca5854070, 0x0000000100000000},
                        {0x31a7445bdf8bcb5c, 0xea59a91078581c00, 0x262a15662b298944, 0xa73c905bcbc01878},
                        {0xdfd3a0870f60e072, 0x0da24e08451a8d1a, 0xb9e2a99fdb7b2948, 0xdfd83d690e5f073e},
                        {0xc3bd5e2cd52318a8, 0xea2177d8d5100000, 0xff98837fda2a5bdf, 0xb36eb1caa58ee7dc},
                        {0x1000000000000000, 0x00000000000075da, 0xf48119b103954df1, 0x7fc92593c865b4c2},
                        {0xbebf0929f41aa230, 0x262a15662b298944, 0x000000a3714b9ad2, 0x6edd225600000000},
                        {0xbebf0929f41aa230, 0x7fc92593c865b4c2, 0x7f2e6910bdea3ffd, 0x0000020000000000},
                        {0x16b3a918e4278c9d, 0x38be984c83ce8648, 0xb040414dd8c98a14, 0x0000000000400000},
                        {0x2d21e3da342cd6be, 0x314320aa7da5b1ef, 0xdfd3a0870f60e072, 0xd251a40a022b9000},
                        {0x00000bea6a6af755, 0x8a4a182923bdf75a, 0x0000000000000000, 0x0000020000000000},
                        {0x0010000000000000, 0xb36eb1caa58ee7dc, 0xbd6192029dd91d60, 0x7c6bcb08155fac38},
                        {0x2e00000000000000, 0x262a15662b298944, 0xb9e2a99fdb7b2948, 0x05ada4e53975b451},
                        {0xa6a669d1baba633e, 0x4a6c986967d5ace8, 0x00000000a865d7d4, 0x90e1bc8ba22d3294},
                        {0x0000000000000040, 0xb36eb1caa58ee7dc, 0x0000000000000004, 0x0000020000000000},
                        {0x000000000000000d, 0x00000000a865d7d4, 0x0000000000000000, 0xfad4dc0000000000},
                        {0xd27d2fde3497614c, 0xd27d2fde3497614c, 0x0000000000000000, 0x8000000000000000},
                        {0x000000000dd2966b, 0x986a686578456056, 0xaf29109cc0000000, 0x0f812a265e560f2b},
                        {0xd0abd7d3688aa0d7, 0x1735808ee4398bca, 0xdf9a26c8470349dd, 0x25474d793f2c7d32},
                        {0x02ab7bb54e687499, 0x0000000100000000, 0x996d1b60923c18a6, 0x000000000dd2966b},
                        {0xbe55668178139c8e, 0xd251a40a022b9000, 0x0ec6680cabb95f09, 0xdf9a26c8470349dd},
                        {0x0000000000010000, 0x25474d793f2c7d32, 0x34f2a050c605b6b0, 0x1234769364d9eac9},
                        {0x4cf560811e3465c5, 0x3d0e482377794618, 0x34f2a050c605b6b0, 0xdf09e5c90a990b56},
                        {0x61fd04828c93ce01, 0x31523358d080e093, 0xb36eb1caa58ee7dc, 0x0000000000400000},
                        {0x0000000000000080, 0x00000bea6a6af755, 0xdfd3a0870f60e072, 0x3d0e482377794618},
                        {0x0000000000000000, 0x68323fe289df33d1, 0x6d159abfb3030000, 0x000000000dd2966b},
                        {0x79780d4e5b2b3b2a, 0x0010000000000000, 0xe5baa16ee5b5419e, 0x3b4de2fabe6d6476},
                        {0xfecee737556609f5, 0x3b0d936889b10a5d, 0x00020e6dfbb7c441, 0xdf09e5c90a990b56},
                        {0x0000000001000000, 0x2d21e3da342cd6be, 0x00000000000075da, 0x3b0d936889b10a5d},
                        {0x262a15662b298944, 0x00000000a865d7d4, 0xea2177d8d5100000, 0x0000000000000004},
                        {0x4a6c986967d5ace8, 0x31523358d080e093, 0x34f2a050c605b6b0, 0x4ab9cfc9a41744c4},
                        {0xd0abd7d3688aa0d7, 0x7dc2ae94e4000000, 0x8b4eb00000000000, 0x44a705073f90be80},
                        {0xb9e2a99fdb7b2948, 0xc3bd5e2cd52318a8, 0x0000000000000040, 0x8000000000000000},
                        {0x0000000001000000, 0x27429c30e8b6cff7, 0x16b3a918e4278c9d, 0x1000000000000000},
                        {0xa6a669d1baba633e, 0x996d1b60923c18a6, 0x14d93f0c55095499, 0xe5baa16ee5b5419e},
                        {0x0000000000000080, 0x0da24e08451a8d1a, 0x6465f271027abfa8, 0xe5baa16ee5b5419e},
                        {0x9d8dbb3a5bde4347, 0x0000000000000001, 0x6edd225600000000, 0xa8519a5b46242cc0},
                        {0xf48119b103954df1, 0x61fd04828c93ce01, 0x000000000000714c, 0xd0abd7d3688aa0d7},
                        {0x6edd225600000000, 0x62daff171a9fae42, 0x7f2e6910bdea3ffd, 0xe79541e25d0dba6b},
                        {0xf48119b103954df1, 0x0000000001000000, 0x3d0e482377794618, 0xdf09e5c90a990b56},
                        {0x27429c30e8b6cff7, 0x62daff171a9fae42, 0xd0abd7d3688aa0d7, 0x0000000000000040},
                        {0xd0abd7d3688aa0d7, 0x1000000000000000, 0x000000000003ed82, 0x14d93f0c55095499},
                        {0xb1db9b0fecbfaabe, 0x0000008000000000, 0x0100000000000000, 0xe5baa16ee5b5419e},
                        {0xf2a6b292a535dc4e, 0xea59a91078581c00, 0x7f2e6910bdea3ffd, 0xe79541e25d0dba6b},
                        {0xbad28e0ca5854070, 0x000000000dd2966b, 0xdfd3a0870f60e072, 0x000000000000000d},
                        {0x16b3a918e4278c9d, 0x25474d793f2c7d32, 0xaf29109cc0000000, 0x000000000000015b},
                        {0xb1db9b0fecbfaabe, 0x4ab9cfc9a41744c4, 0xd251a40a022b9000, 0x38be984c83ce8648},
                        {0x000000000dd2966b, 0xb9e2a99fdb7b2948, 0x314320aa7da5b1ef, 0x7f2e6910bdea3ffd},
                        {0x2e00000000000000, 0x0000000000400000, 0x0000000001000000, 0x986a686578456056},
                        {0x00129af7f2440efe, 0xc3bd5e2cd52318a8, 0xff98837fda2a5bdf, 0xf2a6b292a535dc4e},
                        {0x00000000000075da, 0x68323fe289df33d1, 0x86ddce906c8cdb4d, 0xb36eb1caa58ee7dc},
                        {0xa73c905bcbc01878, 0x000000000dd2966b, 0x58aee9fdc3f41b74, 0xc3bd5e2cd52318a8},
                        {0x3d0e482377794618, 0x00000000a865d7d4, 0x8f09996552504a5d, 0x61fd04828c93ce01},
                        {0x0000000000002000, 0x000000a3714b9ad2, 0xdf9a26c8470349dd, 0x6465f271027abfa8},
                        {0x0000000000010000, 0xdf09e5c90a990b56, 0x00000bea6a6af755, 0x63eb500cce126b70}};
  uint64_t y = 0x7fffffffffffffff;
  uint64_t z[100][4];
  uint64_t e[100][4] = {{0x800000000000000e, 0x3b4de2fabe6d6475, 0x86ddce906c8cdb4d, 0x0100000000000000},
                        {0x5f9a26c8470349de, 0x00020e6dfbb7c441, 0x34f2a050c605b6b0, 0x0000000100000000},
                        {0xccf560811e3465c6, 0xea59a91078581bff, 0x86ddce906c8cdb4d, 0x000000000000714c},
                        {0x80000000a865d7d5, 0xd27d2fde3497614b, 0x4a6c986967d5ace8, 0x00004a9e26b7f794},
                        {0x3d6192029dd91d61, 0x0000000000400000, 0xc9d368e6546c1f00, 0xfad4dc0000000000},
                        {0xb4f2a050c605b6b1, 0xd251a40a022b8fff, 0xbe55668178139c8e, 0x8f09996552504a5d},
                        {0x70fe55be95a18d14, 0xb040414dd8c98a14, 0x8000000000000000, 0xc7dee68fffbaf900},
                        {0xeedd225600000001, 0x79780d4e5b2b3b29, 0x2c1fb5204d248917, 0xbd6192029dd91d60},
                        {0xff2e6910bdea3ffe, 0x2c1fb5204d248916, 0x000000000003ed82, 0xff98837fda2a5bdf},
                        {0x80000bea6a6af756, 0xffffffffffffffff, 0x90e1bc8ba22d3293, 0x7fc92593c865b4c2},
                        {0x8000008000000001, 0xb1db9b0fecbfaabd, 0x0ec6680cabb95f09, 0x93d7d7a9d87056f0},
                        {0xe86f332000000001, 0x7c6bcb08155fac37, 0xf48119b103954df1, 0x31a7445bdf8bcb5c},
                        {0x800000a3714b9ad3, 0x9480583abdfb5836, 0x7f2e6910bdea3ffd, 0x14d93f0c55095499},
                        {0xac1fb5204d248918, 0x37269c228e8e3db0, 0x86ddce906c8cdb4d, 0x8f09996552504a5d},
                        {0x82ab7bb54e68749a, 0xea59a91078581bff, 0x90e1bc8ba22d3294, 0x68323fe289df33d1},
                        {0xa7429c30e8b6cff8, 0xa8519a5b46242cbf, 0x02ab7bb54e687499, 0x44a705073f90be80},
                        {0x9234769364d9eaca, 0xff98837fda2a5bde, 0x6d159abfb3030000, 0x02ab7bb54e687499},
                        {0x5f09e5c90a990b57, 0x0000000000010000, 0xf48119b103954df1, 0xd27d2fde3497614c},
                        {0xb1a7445bdf8bcb5d, 0x25474d793f2c7d31, 0x3d0e482377794618, 0x25474d793f2c7d32},
                        {0x8da24e08451a8d1b, 0x37269c228e8e3db0, 0x0000000000000067, 0x31523358d080e093},
                        {0x70fe55be95a18d14, 0xdfd83d690e5f073e, 0x8000000000000000, 0x4ab9cfc9a41744c4},
                        {0x186a686578456057, 0x0000000000000000, 0x6d159abfb3030000, 0x2c1fb5204d248917},
                        {0x8000000000000068, 0x44a705073f90be7f, 0x4cf560811e3465c5, 0x3d0e482377794618},
                        {0xbd0e482377794619, 0xb36eb1caa58ee7db, 0x0f812a265e560f2b, 0x867e3492977cb1bb},
                        {0x5fd3a0870f60e073, 0x9d8dbb3a5bde4347, 0x000000a3714b9ad2, 0x00129af7f2440efe},
                        {0x0000000000000001, 0x0000000100000000, 0x8c91e2fe14041a34, 0x00020e6dfbb7c441},
                        {0x8000000001000001, 0x262a15662b298943, 0x0ec6680cabb95f09, 0x867e3492977cb1bb},
                        {0x8000000000000081, 0x2dffffffffffffff, 0xf2a6b292a535dc4e, 0x0000800000000000},
                        {0x800000000000714d, 0x000000000000ffff, 0x0000800000000000, 0x8f09996552504a5d},
                        {0xeedd225600000001, 0x4a6c986967d5ace7, 0x68323fe289df33d1, 0xd0abd7d3688aa0d7},
                        {0x94d93f0c5509549a, 0x9480583abdfb5836, 0x0000000000000080, 0x31a7445bdf8bcb5c},
                        {0xfc6bcb08155fac39, 0x0da24e08451a8d19, 0x000000000000000d, 0x0000000000000080},
                        {0x5251a40a022b9001, 0x0000000000010000, 0x8000000000000000, 0xbe55668178139c8e},
                        {0x8000800000000001, 0x8a4a182923bdf759, 0x314320aa7da5b1ef, 0x93d7d7a9d87056f0},
                        {0xf9780d4e5b2b3b2b, 0xf2a6b292a535dc4d, 0xc10a152d71cb3f16, 0xff98837fda2a5bdf},
                        {0x8000000000000041, 0xc10a152d71cb3f15, 0x0000000000000000, 0x4ab9cfc9a41744c4},
                        {0x4a9d54bd4e78980f, 0x314320aa7da5b1ef, 0x0000000000002000, 0x686f332000000000},
                        {0x75bad73c74be6d8b, 0x37269c228e8e3db1, 0xdfd3a0870f60e072, 0xd27d2fde3497614c},
                        {0x6a2177d8d5100001, 0x7fc92593c865b4c2, 0xea59a91078581c00, 0x4fcf7212bebfdd89},
                        {0x0b4eb00000000001, 0xf5bad73c74be6d8a, 0xbebf0929f41aa230, 0x0000000000000067},
                        {0x0000000000000001, 0x0000000000010000, 0x00129af7f2440efe, 0x4a6c986967d5ace8},
                        {0xe1fd04828c93ce02, 0xffffffffffffffff, 0xf3fbe985738811dc, 0x4fcf7212bebfdd89},
                        {0xad21e3da342cd6bf, 0xc7dee68fffbaf8ff, 0x8b4eb00000000000, 0xffffffffffffffff},
                        {0xe1fd04828c93ce02, 0xd0abd7d3688aa0d6, 0xf5bad73c74be6d8a, 0xbd6192029dd91d60},
                        {0x800000000000015c, 0x686f331fffffffff, 0x8c91e2fe14041a34, 0x38be984c83ce8648},
                        {0x1d8dbb3a5bde4348, 0xd251a40a022b9000, 0x93d7d7a9d87056f0, 0xd251a40a022b9000},
                        {0x8000000000010001, 0xf0fe55be95a18d12, 0xbad28e0ca5854070, 0x0000000100000000},
                        {0xb1a7445bdf8bcb5d, 0xea59a91078581bff, 0x262a15662b298944, 0xa73c905bcbc01878},
                        {0x5fd3a0870f60e073, 0x0da24e08451a8d1a, 0xb9e2a99fdb7b2948, 0xdfd83d690e5f073e},
                        {0x43bd5e2cd52318a9, 0xea2177d8d5100000, 0xff98837fda2a5bdf, 0xb36eb1caa58ee7dc},
                        {0x9000000000000001, 0x00000000000075d9, 0xf48119b103954df1, 0x7fc92593c865b4c2},
                        {0x3ebf0929f41aa231, 0x262a15662b298944, 0x000000a3714b9ad2, 0x6edd225600000000},
                        {0x3ebf0929f41aa231, 0x7fc92593c865b4c2, 0x7f2e6910bdea3ffd, 0x0000020000000000},
                        {0x96b3a918e4278c9e, 0x38be984c83ce8647, 0xb040414dd8c98a14, 0x0000000000400000},
                        {0xad21e3da342cd6bf, 0x314320aa7da5b1ee, 0xdfd3a0870f60e072, 0xd251a40a022b9000},
                        {0x80000bea6a6af756, 0x8a4a182923bdf759, 0x0000000000000000, 0x0000020000000000},
                        {0x8010000000000001, 0xb36eb1caa58ee7db, 0xbd6192029dd91d60, 0x7c6bcb08155fac38},
                        {0xae00000000000001, 0x262a15662b298943, 0xb9e2a99fdb7b2948, 0x05ada4e53975b451},
                        {0x26a669d1baba633f, 0x4a6c986967d5ace8, 0x00000000a865d7d4, 0x90e1bc8ba22d3294},
                        {0x8000000000000041, 0xb36eb1caa58ee7db, 0x0000000000000004, 0x0000020000000000},
                        {0x800000000000000e, 0x00000000a865d7d3, 0x0000000000000000, 0xfad4dc0000000000},
                        {0x527d2fde3497614d, 0xd27d2fde3497614c, 0x0000000000000000, 0x8000000000000000},
                        {0x800000000dd2966c, 0x986a686578456055, 0xaf29109cc0000000, 0x0f812a265e560f2b},
                        {0x50abd7d3688aa0d8, 0x1735808ee4398bca, 0xdf9a26c8470349dd, 0x25474d793f2c7d32},
                        {0x82ab7bb54e68749a, 0x00000000ffffffff, 0x996d1b60923c18a6, 0x000000000dd2966b},
                        {0x3e55668178139c8f, 0xd251a40a022b9000, 0x0ec6680cabb95f09, 0xdf9a26c8470349dd},
                        {0x8000000000010001, 0x25474d793f2c7d31, 0x34f2a050c605b6b0, 0x1234769364d9eac9},
                        {0xccf560811e3465c6, 0x3d0e482377794617, 0x34f2a050c605b6b0, 0xdf09e5c90a990b56},
                        {0xe1fd04828c93ce02, 0x31523358d080e092, 0xb36eb1caa58ee7dc, 0x0000000000400000},
                        {0x8000000000000081, 0x00000bea6a6af754, 0xdfd3a0870f60e072, 0x3d0e482377794618},
                        {0x8000000000000001, 0x68323fe289df33d0, 0x6d159abfb3030000, 0x000000000dd2966b},
                        {0xf9780d4e5b2b3b2b, 0x000fffffffffffff, 0xe5baa16ee5b5419e, 0x3b4de2fabe6d6476},
                        {0x7ecee737556609f6, 0x3b0d936889b10a5d, 0x00020e6dfbb7c441, 0xdf09e5c90a990b56},
                        {0x8000000001000001, 0x2d21e3da342cd6bd, 0x00000000000075da, 0x3b0d936889b10a5d},
                        {0xa62a15662b298945, 0x00000000a865d7d3, 0xea2177d8d5100000, 0x0000000000000004},
                        {0xca6c986967d5ace9, 0x31523358d080e092, 0x34f2a050c605b6b0, 0x4ab9cfc9a41744c4},
                        {0x50abd7d3688aa0d8, 0x7dc2ae94e4000000, 0x8b4eb00000000000, 0x44a705073f90be80},
                        {0x39e2a99fdb7b2949, 0xc3bd5e2cd52318a8, 0x0000000000000040, 0x8000000000000000},
                        {0x8000000001000001, 0x27429c30e8b6cff6, 0x16b3a918e4278c9d, 0x1000000000000000},
                        {0x26a669d1baba633f, 0x996d1b60923c18a6, 0x14d93f0c55095499, 0xe5baa16ee5b5419e},
                        {0x8000000000000081, 0x0da24e08451a8d19, 0x6465f271027abfa8, 0xe5baa16ee5b5419e},
                        {0x1d8dbb3a5bde4348, 0x0000000000000001, 0x6edd225600000000, 0xa8519a5b46242cc0},
                        {0x748119b103954df2, 0x61fd04828c93ce01, 0x000000000000714c, 0xd0abd7d3688aa0d7},
                        {0xeedd225600000001, 0x62daff171a9fae41, 0x7f2e6910bdea3ffd, 0xe79541e25d0dba6b},
                        {0x748119b103954df2, 0x0000000001000000, 0x3d0e482377794618, 0xdf09e5c90a990b56},
                        {0xa7429c30e8b6cff8, 0x62daff171a9fae41, 0xd0abd7d3688aa0d7, 0x0000000000000040},
                        {0x50abd7d3688aa0d8, 0x1000000000000000, 0x000000000003ed82, 0x14d93f0c55095499},
                        {0x31db9b0fecbfaabf, 0x0000008000000000, 0x0100000000000000, 0xe5baa16ee5b5419e},
                        {0x72a6b292a535dc4f, 0xea59a91078581c00, 0x7f2e6910bdea3ffd, 0xe79541e25d0dba6b},
                        {0x3ad28e0ca5854071, 0x000000000dd2966b, 0xdfd3a0870f60e072, 0x000000000000000d},
                        {0x96b3a918e4278c9e, 0x25474d793f2c7d31, 0xaf29109cc0000000, 0x000000000000015b},
                        {0x31db9b0fecbfaabf, 0x4ab9cfc9a41744c4, 0xd251a40a022b9000, 0x38be984c83ce8648},
                        {0x800000000dd2966c, 0xb9e2a99fdb7b2947, 0x314320aa7da5b1ef, 0x7f2e6910bdea3ffd},
                        {0xae00000000000001, 0x00000000003fffff, 0x0000000001000000, 0x986a686578456056},
                        {0x80129af7f2440eff, 0xc3bd5e2cd52318a7, 0xff98837fda2a5bdf, 0xf2a6b292a535dc4e},
                        {0x80000000000075db, 0x68323fe289df33d0, 0x86ddce906c8cdb4d, 0xb36eb1caa58ee7dc},
                        {0x273c905bcbc01879, 0x000000000dd2966b, 0x58aee9fdc3f41b74, 0xc3bd5e2cd52318a8},
                        {0xbd0e482377794619, 0x00000000a865d7d3, 0x8f09996552504a5d, 0x61fd04828c93ce01},
                        {0x8000000000002001, 0x000000a3714b9ad1, 0xdf9a26c8470349dd, 0x6465f271027abfa8},
                        {0x8000000000010001, 0xdf09e5c90a990b55, 0x00000bea6a6af755, 0x63eb500cce126b70}};

  vssub_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
