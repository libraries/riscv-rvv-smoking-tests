#include <stddef.h>
#include <stdint.h>

void vssubu_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[100][4] = {{0x2e00000000000000, 0x63eb500cce126b70, 0x0000000000002000, 0x0100000000000000},
                        {0x3d0e482377794618, 0x2d21e3da342cd6be, 0x6edd225600000000, 0x68323fe289df33d1},
                        {0xd27d2fde3497614c, 0x314320aa7da5b1ef, 0xc3bd5e2cd52318a8, 0x0000000000000004},
                        {0x3d0e482377794618, 0xc7dee68fffbaf900, 0xf0fe55be95a18d13, 0x9420000000000000},
                        {0x0000008000000000, 0xb040414dd8c98a14, 0x2d21e3da342cd6be, 0x996d1b60923c18a6},
                        {0x38be984c83ce8648, 0x4ab9cfc9a41744c4, 0xa73c905bcbc01878, 0x38be984c83ce8648},
                        {0xa8519a5b46242cc0, 0xff98837fda2a5bdf, 0xdfd83d690e5f073e, 0x8f09996552504a5d},
                        {0xfecee737556609f5, 0xfecee737556609f5, 0x0da24e08451a8d1a, 0x0f812a265e560f2b},
                        {0x8000000000000000, 0x0000008000000000, 0x0000000000000080, 0x4fcf7212bebfdd89},
                        {0x3d0e482377794618, 0x000000000000015b, 0x68323fe289df33d1, 0x3b4de2fabe6d6476},
                        {0x2d21e3da342cd6be, 0xf2a6b292a535dc4e, 0x000000000000714c, 0x986a686578456056},
                        {0x61fd04828c93ce01, 0xffffffffffffffff, 0x262a15662b298944, 0x00000bea6a6af755},
                        {0x00000000000075da, 0x6edd225600000000, 0x2d21e3da342cd6be, 0x996d1b60923c18a6},
                        {0x00000000000075da, 0x14d93f0c55095499, 0x0100000000000000, 0x000000000dd2966b},
                        {0x05ada4e53975b451, 0x000000000003ed82, 0xf3fbe985738811dd, 0xf5bad73c74be6d8a},
                        {0x00000000000075da, 0x1000000000000000, 0x000000000000714c, 0x05ada4e53975b451},
                        {0x0f812a265e560f2b, 0x90e1bc8ba22d3294, 0xb1db9b0fecbfaabe, 0x0000000000400000},
                        {0x9480583abdfb5837, 0x2d21e3da342cd6be, 0xb36eb1caa58ee7dc, 0x6465f271027abfa8},
                        {0x262a15662b298944, 0x0000008000000000, 0x00000000a865d7d4, 0x58aee9fdc3f41b74},
                        {0x9420000000000000, 0x0000000000000004, 0x0000000000010000, 0xc9d368e6546c1f00},
                        {0x8b4eb00000000000, 0x7c6bcb08155fac38, 0x6edd225600000000, 0xb1db9b0fecbfaabe},
                        {0x0100000000000000, 0x000000000000015b, 0xfecee737556609f5, 0x00129af7f2440efe},
                        {0x0000000000400000, 0x0000000000010000, 0x16b3a918e4278c9d, 0xffffffffffffffff},
                        {0xbe55668178139c8e, 0xdf09e5c90a990b56, 0x4fcf7212bebfdd89, 0x0000000000000004},
                        {0x7c6bcb08155fac38, 0xdf9a26c8470349dd, 0x0da24e08451a8d1a, 0xdf09e5c90a990b56},
                        {0x31523358d080e093, 0x6edd225600000000, 0x31a7445bdf8bcb5c, 0x0000000000002000},
                        {0x00020e6dfbb7c441, 0xd0abd7d3688aa0d7, 0xe79541e25d0dba6b, 0xdfd83d690e5f073e},
                        {0x0000000001000000, 0x3d0e482377794618, 0xdf09e5c90a990b56, 0x27429c30e8b6cff7},
                        {0xf48119b103954df1, 0x16b3a918e4278c9d, 0x000000000000015b, 0x000000000dd2966b},
                        {0x0000020000000000, 0x9480583abdfb5837, 0x867e3492977cb1bb, 0xf3fbe985738811dd},
                        {0x6edd225600000000, 0x000000000003ed82, 0xbebf0929f41aa230, 0xbebf0929f41aa230},
                        {0x0000000000002000, 0x1234769364d9eac9, 0x314320aa7da5b1ef, 0x61fd04828c93ce01},
                        {0x2d21e3da342cd6be, 0x000000000000015b, 0xffffffffffffffff, 0x00020e6dfbb7c441},
                        {0xf2a6b292a535dc4e, 0xb1db9b0fecbfaabe, 0x2d21e3da342cd6be, 0x9420000000000000},
                        {0x0ec6680cabb95f09, 0x1000000000000000, 0xffffffffffffffff, 0xcb9848f06e9659f6},
                        {0xcb9848f06e9659f6, 0x61fd04828c93ce01, 0xf3fbe985738811dd, 0x2c1fb5204d248917},
                        {0xe5baa16ee5b5419e, 0x314320aa7da5b1ef, 0x2c1fb5204d248917, 0x000000000003ed82},
                        {0x000000000000714c, 0x9420000000000000, 0x8000000000000000, 0x34f2a050c605b6b0},
                        {0x996d1b60923c18a6, 0x00000bea6a6af755, 0x000000000000714c, 0xea59a91078581c00},
                        {0x0000800000000000, 0x38be984c83ce8648, 0x0ec6680cabb95f09, 0x0000008000000000},
                        {0x996d1b60923c18a6, 0x8c91e2fe14041a34, 0x61fd04828c93ce01, 0x0000000100000000},
                        {0x5052886f7169c8c5, 0x14d93f0c55095499, 0x0100000000000000, 0x14d93f0c55095499},
                        {0xca9d54bd4e78980e, 0x6d159abfb3030000, 0xdf9a26c8470349dd, 0x0000000000000000},
                        {0x0000000000002000, 0xd0abd7d3688aa0d7, 0x0000000001000000, 0x5052886f7169c8c5},
                        {0x0000000000000000, 0x9420000000000000, 0xb040414dd8c98a14, 0x3b0d936889b10a5d},
                        {0x61fd04828c93ce01, 0xbad28e0ca5854070, 0x686f332000000000, 0x93d7d7a9d87056f0},
                        {0x02ab7bb54e687499, 0xf0fe55be95a18d13, 0x7f2e6910bdea3ffd, 0x1735808ee4398bca},
                        {0x62daff171a9fae42, 0x4fcf7212bebfdd89, 0x68323fe289df33d1, 0x996d1b60923c18a6},
                        {0xd27d2fde3497614c, 0x93d7d7a9d87056f0, 0x7f2e6910bdea3ffd, 0x86ddce906c8cdb4d},
                        {0xea2177d8d5100000, 0x0000000000000000, 0x61fd04828c93ce01, 0xbebf0929f41aa230},
                        {0x00129af7f2440efe, 0x58aee9fdc3f41b74, 0x0f812a265e560f2b, 0x0010000000000000},
                        {0x2c1fb5204d248917, 0xf48119b103954df1, 0x16b3a918e4278c9d, 0x4ab9cfc9a41744c4},
                        {0x6465f271027abfa8, 0xe35a000000000000, 0xc7dee68fffbaf900, 0x6465f271027abfa8},
                        {0x62daff171a9fae42, 0xdfd3a0870f60e072, 0x79780d4e5b2b3b2a, 0x90e1bc8ba22d3294},
                        {0xc3bd5e2cd52318a8, 0xe5baa16ee5b5419e, 0xe5baa16ee5b5419e, 0xc9d368e6546c1f00},
                        {0xe79541e25d0dba6b, 0x6d159abfb3030000, 0x9d8dbb3a5bde4347, 0x9480583abdfb5837},
                        {0xaf29109cc0000000, 0x686f332000000000, 0x0000000000002000, 0x1234769364d9eac9},
                        {0xd0abd7d3688aa0d7, 0x1234769364d9eac9, 0xcb9848f06e9659f6, 0xb9e2a99fdb7b2948},
                        {0x37269c228e8e3db1, 0x4ab9cfc9a41744c4, 0xf2a6b292a535dc4e, 0x4ab9cfc9a41744c4},
                        {0x0000020000000000, 0x867e3492977cb1bb, 0x0000000000010000, 0x0000008000000000},
                        {0x0000000000010000, 0x00020e6dfbb7c441, 0xea59a91078581c00, 0xca9d54bd4e78980e},
                        {0xea2177d8d5100000, 0xdfd83d690e5f073e, 0x262a15662b298944, 0xd0abd7d3688aa0d7},
                        {0xbebf0929f41aa230, 0x0000000001000000, 0x0000000100000000, 0x0000000000000040},
                        {0x0000000000000000, 0x8000000000000000, 0x63eb500cce126b70, 0xdfd3a0870f60e072},
                        {0x05ada4e53975b451, 0xbebf0929f41aa230, 0x25474d793f2c7d32, 0x6d159abfb3030000},
                        {0x00000bea6a6af755, 0x9420000000000000, 0x4a6c986967d5ace8, 0x16b3a918e4278c9d},
                        {0xcb9848f06e9659f6, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x90e1bc8ba22d3294},
                        {0x6edd225600000000, 0x867e3492977cb1bb, 0x7dc2ae94e4000000, 0x0da24e08451a8d1a},
                        {0x314320aa7da5b1ef, 0xf2a6b292a535dc4e, 0x62daff171a9fae42, 0x8000000000000000},
                        {0xea2177d8d5100000, 0x6edd225600000000, 0x0000000000000040, 0x0010000000000000},
                        {0x4cf560811e3465c5, 0x14d93f0c55095499, 0x0000000380f3cf69, 0x37269c228e8e3db1},
                        {0x63eb500cce126b70, 0x0000000000400000, 0xf5bad73c74be6d8a, 0xdfd83d690e5f073e},
                        {0x6465f271027abfa8, 0xf2a6b292a535dc4e, 0x0000000000000080, 0x58aee9fdc3f41b74},
                        {0xea59a91078581c00, 0x0000000000000067, 0x16b3a918e4278c9d, 0x25474d793f2c7d32},
                        {0x314320aa7da5b1ef, 0xd0abd7d3688aa0d7, 0xb36eb1caa58ee7dc, 0x61fd04828c93ce01},
                        {0x8000000000000000, 0x37269c228e8e3db1, 0xb9e2a99fdb7b2948, 0x0f812a265e560f2b},
                        {0x0010000000000000, 0xc3bd5e2cd52318a8, 0xcb9848f06e9659f6, 0xd27d2fde3497614c},
                        {0x8a4a182923bdf75a, 0xea59a91078581c00, 0x6d159abfb3030000, 0x1735808ee4398bca},
                        {0xd27d2fde3497614c, 0xfad4dc0000000000, 0xea2177d8d5100000, 0x7fc92593c865b4c2},
                        {0x37269c228e8e3db1, 0x7f2e6910bdea3ffd, 0x6d159abfb3030000, 0x4ab9cfc9a41744c4},
                        {0xdf9a26c8470349dd, 0x9d8dbb3a5bde4347, 0x314320aa7da5b1ef, 0x9480583abdfb5837},
                        {0x16b3a918e4278c9d, 0xdf9a26c8470349dd, 0x0000000000010000, 0x1000000000000000},
                        {0xbe55668178139c8e, 0x1234769364d9eac9, 0x34f2a050c605b6b0, 0x996d1b60923c18a6},
                        {0x62daff171a9fae42, 0xb36eb1caa58ee7dc, 0x0010000000000000, 0xa8519a5b46242cc0},
                        {0xdfd3a0870f60e072, 0xaf29109cc0000000, 0x8c91e2fe14041a34, 0x000000a3714b9ad2},
                        {0x1000000000000000, 0xb9e2a99fdb7b2948, 0xfecee737556609f5, 0xfecee737556609f5},
                        {0xaf29109cc0000000, 0x00000000000075da, 0xb36eb1caa58ee7dc, 0xb040414dd8c98a14},
                        {0x05ada4e53975b451, 0x58aee9fdc3f41b74, 0x9480583abdfb5837, 0xb9e2a99fdb7b2948},
                        {0xc3bd5e2cd52318a8, 0x25474d793f2c7d32, 0x000000a3714b9ad2, 0x0000000000000000},
                        {0xa73c905bcbc01878, 0xbe55668178139c8e, 0xc9d368e6546c1f00, 0x2e00000000000000},
                        {0x3b4de2fabe6d6476, 0x90e1bc8ba22d3294, 0x63eb500cce126b70, 0x1234769364d9eac9},
                        {0x4cf560811e3465c5, 0x262a15662b298944, 0xb1db9b0fecbfaabe, 0x686f332000000000},
                        {0x0000000000010000, 0x262a15662b298944, 0xa6a669d1baba633e, 0xe79541e25d0dba6b},
                        {0xc7dee68fffbaf900, 0x000000000dd2966b, 0x0000000000002000, 0x0000000380f3cf69},
                        {0x0000000000000000, 0x1000000000000000, 0xdf9a26c8470349dd, 0x4cf560811e3465c5},
                        {0x62daff171a9fae42, 0x986a686578456056, 0x3d0e482377794618, 0x14d93f0c55095499},
                        {0xb36eb1caa58ee7dc, 0x7f2e6910bdea3ffd, 0xc10a152d71cb3f16, 0x0000000000000040},
                        {0x5052886f7169c8c5, 0x16b3a918e4278c9d, 0x31a7445bdf8bcb5c, 0x996d1b60923c18a6},
                        {0x8a4a182923bdf75a, 0x0000020000000000, 0x000000000003ed82, 0xea59a91078581c00},
                        {0xbebf0929f41aa230, 0xaf29109cc0000000, 0x0000000000010000, 0x00000000a865d7d4}};
  uint64_t y = 0x7fffffffffffffff;
  uint64_t z[100][4];
  uint64_t e[100][4] = {{0xae00000000000001, 0x63eb500cce126b6f, 0x0000000000002000, 0x0100000000000000},
                        {0xbd0e482377794619, 0x2d21e3da342cd6bd, 0x6edd225600000000, 0x68323fe289df33d1},
                        {0x527d2fde3497614d, 0x314320aa7da5b1ef, 0xc3bd5e2cd52318a8, 0x0000000000000004},
                        {0xbd0e482377794619, 0xc7dee68fffbaf8ff, 0xf0fe55be95a18d13, 0x9420000000000000},
                        {0x8000008000000001, 0xb040414dd8c98a13, 0x2d21e3da342cd6be, 0x996d1b60923c18a6},
                        {0xb8be984c83ce8649, 0x4ab9cfc9a41744c3, 0xa73c905bcbc01878, 0x38be984c83ce8648},
                        {0x28519a5b46242cc1, 0xff98837fda2a5bdf, 0xdfd83d690e5f073e, 0x8f09996552504a5d},
                        {0x7ecee737556609f6, 0xfecee737556609f5, 0x0da24e08451a8d1a, 0x0f812a265e560f2b},
                        {0x0000000000000001, 0x0000008000000000, 0x0000000000000080, 0x4fcf7212bebfdd89},
                        {0xbd0e482377794619, 0x000000000000015a, 0x68323fe289df33d1, 0x3b4de2fabe6d6476},
                        {0xad21e3da342cd6bf, 0xf2a6b292a535dc4d, 0x000000000000714c, 0x986a686578456056},
                        {0xe1fd04828c93ce02, 0xfffffffffffffffe, 0x262a15662b298944, 0x00000bea6a6af755},
                        {0x80000000000075db, 0x6edd2255ffffffff, 0x2d21e3da342cd6be, 0x996d1b60923c18a6},
                        {0x80000000000075db, 0x14d93f0c55095498, 0x0100000000000000, 0x000000000dd2966b},
                        {0x85ada4e53975b452, 0x000000000003ed81, 0xf3fbe985738811dd, 0xf5bad73c74be6d8a},
                        {0x80000000000075db, 0x0fffffffffffffff, 0x000000000000714c, 0x05ada4e53975b451},
                        {0x8f812a265e560f2c, 0x90e1bc8ba22d3293, 0xb1db9b0fecbfaabe, 0x0000000000400000},
                        {0x1480583abdfb5838, 0x2d21e3da342cd6be, 0xb36eb1caa58ee7dc, 0x6465f271027abfa8},
                        {0xa62a15662b298945, 0x0000007fffffffff, 0x00000000a865d7d4, 0x58aee9fdc3f41b74},
                        {0x1420000000000001, 0x0000000000000004, 0x0000000000010000, 0xc9d368e6546c1f00},
                        {0x0b4eb00000000001, 0x7c6bcb08155fac38, 0x6edd225600000000, 0xb1db9b0fecbfaabe},
                        {0x8100000000000001, 0x000000000000015a, 0xfecee737556609f5, 0x00129af7f2440efe},
                        {0x8000000000400001, 0x000000000000ffff, 0x16b3a918e4278c9d, 0xffffffffffffffff},
                        {0x3e55668178139c8f, 0xdf09e5c90a990b56, 0x4fcf7212bebfdd89, 0x0000000000000004},
                        {0xfc6bcb08155fac39, 0xdf9a26c8470349dc, 0x0da24e08451a8d1a, 0xdf09e5c90a990b56},
                        {0xb1523358d080e094, 0x6edd2255ffffffff, 0x31a7445bdf8bcb5c, 0x0000000000002000},
                        {0x80020e6dfbb7c442, 0xd0abd7d3688aa0d6, 0xe79541e25d0dba6b, 0xdfd83d690e5f073e},
                        {0x8000000001000001, 0x3d0e482377794617, 0xdf09e5c90a990b56, 0x27429c30e8b6cff7},
                        {0x748119b103954df2, 0x16b3a918e4278c9d, 0x000000000000015b, 0x000000000dd2966b},
                        {0x8000020000000001, 0x9480583abdfb5836, 0x867e3492977cb1bb, 0xf3fbe985738811dd},
                        {0xeedd225600000001, 0x000000000003ed81, 0xbebf0929f41aa230, 0xbebf0929f41aa230},
                        {0x8000000000002001, 0x1234769364d9eac8, 0x314320aa7da5b1ef, 0x61fd04828c93ce01},
                        {0xad21e3da342cd6bf, 0x000000000000015a, 0xffffffffffffffff, 0x00020e6dfbb7c441},
                        {0x72a6b292a535dc4f, 0xb1db9b0fecbfaabe, 0x2d21e3da342cd6be, 0x9420000000000000},
                        {0x8ec6680cabb95f0a, 0x0fffffffffffffff, 0xffffffffffffffff, 0xcb9848f06e9659f6},
                        {0x4b9848f06e9659f7, 0x61fd04828c93ce01, 0xf3fbe985738811dd, 0x2c1fb5204d248917},
                        {0x65baa16ee5b5419f, 0x314320aa7da5b1ef, 0x2c1fb5204d248917, 0x000000000003ed82},
                        {0x800000000000714d, 0x941fffffffffffff, 0x8000000000000000, 0x34f2a050c605b6b0},
                        {0x196d1b60923c18a7, 0x00000bea6a6af755, 0x000000000000714c, 0xea59a91078581c00},
                        {0x8000800000000001, 0x38be984c83ce8647, 0x0ec6680cabb95f09, 0x0000008000000000},
                        {0x196d1b60923c18a7, 0x8c91e2fe14041a34, 0x61fd04828c93ce01, 0x0000000100000000},
                        {0xd052886f7169c8c6, 0x14d93f0c55095498, 0x0100000000000000, 0x14d93f0c55095499},
                        {0x4a9d54bd4e78980f, 0x6d159abfb3030000, 0xdf9a26c8470349dd, 0x0000000000000000},
                        {0x8000000000002001, 0xd0abd7d3688aa0d6, 0x0000000001000000, 0x5052886f7169c8c5},
                        {0x8000000000000001, 0x941fffffffffffff, 0xb040414dd8c98a14, 0x3b0d936889b10a5d},
                        {0xe1fd04828c93ce02, 0xbad28e0ca585406f, 0x686f332000000000, 0x93d7d7a9d87056f0},
                        {0x82ab7bb54e68749a, 0xf0fe55be95a18d12, 0x7f2e6910bdea3ffd, 0x1735808ee4398bca},
                        {0xe2daff171a9fae43, 0x4fcf7212bebfdd88, 0x68323fe289df33d1, 0x996d1b60923c18a6},
                        {0x527d2fde3497614d, 0x93d7d7a9d87056f0, 0x7f2e6910bdea3ffd, 0x86ddce906c8cdb4d},
                        {0x6a2177d8d5100001, 0x0000000000000000, 0x61fd04828c93ce01, 0xbebf0929f41aa230},
                        {0x80129af7f2440eff, 0x58aee9fdc3f41b73, 0x0f812a265e560f2b, 0x0010000000000000},
                        {0xac1fb5204d248918, 0xf48119b103954df0, 0x16b3a918e4278c9d, 0x4ab9cfc9a41744c4},
                        {0xe465f271027abfa9, 0xe359ffffffffffff, 0xc7dee68fffbaf900, 0x6465f271027abfa8},
                        {0xe2daff171a9fae43, 0xdfd3a0870f60e071, 0x79780d4e5b2b3b2a, 0x90e1bc8ba22d3294},
                        {0x43bd5e2cd52318a9, 0xe5baa16ee5b5419e, 0xe5baa16ee5b5419e, 0xc9d368e6546c1f00},
                        {0x679541e25d0dba6c, 0x6d159abfb3030000, 0x9d8dbb3a5bde4347, 0x9480583abdfb5837},
                        {0x2f29109cc0000001, 0x686f332000000000, 0x0000000000002000, 0x1234769364d9eac9},
                        {0x50abd7d3688aa0d8, 0x1234769364d9eac9, 0xcb9848f06e9659f6, 0xb9e2a99fdb7b2948},
                        {0xb7269c228e8e3db2, 0x4ab9cfc9a41744c3, 0xf2a6b292a535dc4e, 0x4ab9cfc9a41744c4},
                        {0x8000020000000001, 0x867e3492977cb1ba, 0x0000000000010000, 0x0000008000000000},
                        {0x8000000000010001, 0x00020e6dfbb7c440, 0xea59a91078581c00, 0xca9d54bd4e78980e},
                        {0x6a2177d8d5100001, 0xdfd83d690e5f073e, 0x262a15662b298944, 0xd0abd7d3688aa0d7},
                        {0x3ebf0929f41aa231, 0x0000000001000000, 0x0000000100000000, 0x0000000000000040},
                        {0x8000000000000001, 0x7fffffffffffffff, 0x63eb500cce126b70, 0xdfd3a0870f60e072},
                        {0x85ada4e53975b452, 0xbebf0929f41aa22f, 0x25474d793f2c7d32, 0x6d159abfb3030000},
                        {0x80000bea6a6af756, 0x941fffffffffffff, 0x4a6c986967d5ace8, 0x16b3a918e4278c9d},
                        {0x4b9848f06e9659f7, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x90e1bc8ba22d3294},
                        {0xeedd225600000001, 0x867e3492977cb1ba, 0x7dc2ae94e4000000, 0x0da24e08451a8d1a},
                        {0xb14320aa7da5b1f0, 0xf2a6b292a535dc4d, 0x62daff171a9fae42, 0x8000000000000000},
                        {0x6a2177d8d5100001, 0x6edd225600000000, 0x0000000000000040, 0x0010000000000000},
                        {0xccf560811e3465c6, 0x14d93f0c55095498, 0x0000000380f3cf69, 0x37269c228e8e3db1},
                        {0xe3eb500cce126b71, 0x00000000003fffff, 0xf5bad73c74be6d8a, 0xdfd83d690e5f073e},
                        {0xe465f271027abfa9, 0xf2a6b292a535dc4d, 0x0000000000000080, 0x58aee9fdc3f41b74},
                        {0x6a59a91078581c01, 0x0000000000000067, 0x16b3a918e4278c9d, 0x25474d793f2c7d32},
                        {0xb14320aa7da5b1f0, 0xd0abd7d3688aa0d6, 0xb36eb1caa58ee7dc, 0x61fd04828c93ce01},
                        {0x0000000000000001, 0x37269c228e8e3db1, 0xb9e2a99fdb7b2948, 0x0f812a265e560f2b},
                        {0x8010000000000001, 0xc3bd5e2cd52318a7, 0xcb9848f06e9659f6, 0xd27d2fde3497614c},
                        {0x0a4a182923bdf75b, 0xea59a91078581c00, 0x6d159abfb3030000, 0x1735808ee4398bca},
                        {0x527d2fde3497614d, 0xfad4dc0000000000, 0xea2177d8d5100000, 0x7fc92593c865b4c2},
                        {0xb7269c228e8e3db2, 0x7f2e6910bdea3ffc, 0x6d159abfb3030000, 0x4ab9cfc9a41744c4},
                        {0x5f9a26c8470349de, 0x9d8dbb3a5bde4347, 0x314320aa7da5b1ef, 0x9480583abdfb5837},
                        {0x96b3a918e4278c9e, 0xdf9a26c8470349dc, 0x0000000000010000, 0x1000000000000000},
                        {0x3e55668178139c8f, 0x1234769364d9eac9, 0x34f2a050c605b6b0, 0x996d1b60923c18a6},
                        {0xe2daff171a9fae43, 0xb36eb1caa58ee7db, 0x0010000000000000, 0xa8519a5b46242cc0},
                        {0x5fd3a0870f60e073, 0xaf29109cc0000000, 0x8c91e2fe14041a34, 0x000000a3714b9ad2},
                        {0x9000000000000001, 0xb9e2a99fdb7b2947, 0xfecee737556609f5, 0xfecee737556609f5},
                        {0x2f29109cc0000001, 0x00000000000075da, 0xb36eb1caa58ee7dc, 0xb040414dd8c98a14},
                        {0x85ada4e53975b452, 0x58aee9fdc3f41b73, 0x9480583abdfb5837, 0xb9e2a99fdb7b2948},
                        {0x43bd5e2cd52318a9, 0x25474d793f2c7d32, 0x000000a3714b9ad2, 0x0000000000000000},
                        {0x273c905bcbc01879, 0xbe55668178139c8e, 0xc9d368e6546c1f00, 0x2e00000000000000},
                        {0xbb4de2fabe6d6477, 0x90e1bc8ba22d3293, 0x63eb500cce126b70, 0x1234769364d9eac9},
                        {0xccf560811e3465c6, 0x262a15662b298943, 0xb1db9b0fecbfaabe, 0x686f332000000000},
                        {0x8000000000010001, 0x262a15662b298943, 0xa6a669d1baba633e, 0xe79541e25d0dba6b},
                        {0x47dee68fffbaf901, 0x000000000dd2966b, 0x0000000000002000, 0x0000000380f3cf69},
                        {0x8000000000000001, 0x0fffffffffffffff, 0xdf9a26c8470349dd, 0x4cf560811e3465c5},
                        {0xe2daff171a9fae43, 0x986a686578456055, 0x3d0e482377794618, 0x14d93f0c55095499},
                        {0x336eb1caa58ee7dd, 0x7f2e6910bdea3ffd, 0xc10a152d71cb3f16, 0x0000000000000040},
                        {0xd052886f7169c8c6, 0x16b3a918e4278c9c, 0x31a7445bdf8bcb5c, 0x996d1b60923c18a6},
                        {0x0a4a182923bdf75b, 0x0000020000000000, 0x000000000003ed82, 0xea59a91078581c00},
                        {0x3ebf0929f41aa231, 0xaf29109cc0000000, 0x0000000000010000, 0x00000000a865d7d4}};

  vssubu_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}