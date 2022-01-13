#include <stddef.h>
#include <stdint.h>

void vwmulsu_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][8]);

int main() {
  uint64_t x[100][4] = {{0x0010000000000000, 0xd0abd7d3688aa0d7, 0x996d1b60923c18a6, 0x31a7445bdf8bcb5c},
                        {0x44a705073f90be80, 0x8000000000000000, 0x867e3492977cb1bb, 0x4cf560811e3465c5},
                        {0xf0fe55be95a18d13, 0x0010000000000000, 0x31a7445bdf8bcb5c, 0xffffffffffffffff},
                        {0xdfd83d690e5f073e, 0x37269c228e8e3db1, 0xe79541e25d0dba6b, 0xd0abd7d3688aa0d7},
                        {0x38be984c83ce8648, 0xcb9848f06e9659f6, 0x00020e6dfbb7c441, 0x0000000380f3cf69},
                        {0xf3fbe985738811dd, 0xd0abd7d3688aa0d7, 0x5052886f7169c8c5, 0x6d159abfb3030000},
                        {0x2e00000000000000, 0x9420000000000000, 0x25474d793f2c7d32, 0xf0fe55be95a18d13},
                        {0x000000000000000d, 0xa73c905bcbc01878, 0x00000bea6a6af755, 0x1000000000000000},
                        {0x16b3a918e4278c9d, 0x0000000001000000, 0x000000a3714b9ad2, 0x38be984c83ce8648},
                        {0x0000000000000040, 0x0000000000000001, 0x0000008000000000, 0x00129af7f2440efe},
                        {0x7f2e6910bdea3ffd, 0x000000a3714b9ad2, 0x0000000000000080, 0xc3bd5e2cd52318a8},
                        {0x00129af7f2440efe, 0x44a705073f90be80, 0x000000000000000d, 0x37269c228e8e3db1},
                        {0x262a15662b298944, 0x867e3492977cb1bb, 0x3d0e482377794618, 0x0000000000000080},
                        {0xca9d54bd4e78980e, 0x93d7d7a9d87056f0, 0xb36eb1caa58ee7dc, 0xbd6192029dd91d60},
                        {0xc3bd5e2cd52318a8, 0x93d7d7a9d87056f0, 0x4cf560811e3465c5, 0x0000000380f3cf69},
                        {0x00020e6dfbb7c441, 0xf3fbe985738811dd, 0x58aee9fdc3f41b74, 0xbebf0929f41aa230},
                        {0x867e3492977cb1bb, 0x7dc2ae94e4000000, 0x6465f271027abfa8, 0x8b4eb00000000000},
                        {0x37269c228e8e3db1, 0x0f812a265e560f2b, 0xfecee737556609f5, 0x00000bea6a6af755},
                        {0x7f2e6910bdea3ffd, 0xe79541e25d0dba6b, 0x5052886f7169c8c5, 0x9d8dbb3a5bde4347},
                        {0x34f2a050c605b6b0, 0x00129af7f2440efe, 0xf48119b103954df1, 0xb1db9b0fecbfaabe},
                        {0x2c1fb5204d248917, 0xe35a000000000000, 0x000000000dd2966b, 0x000000000000015b},
                        {0x7c6bcb08155fac38, 0xe35a000000000000, 0xea2177d8d5100000, 0xa73c905bcbc01878},
                        {0xa6a669d1baba633e, 0x6d159abfb3030000, 0x4ab9cfc9a41744c4, 0x6465f271027abfa8},
                        {0x34f2a050c605b6b0, 0xff98837fda2a5bdf, 0xfecee737556609f5, 0x0000008000000000},
                        {0x79780d4e5b2b3b2a, 0x6edd225600000000, 0x0f812a265e560f2b, 0x3b0d936889b10a5d},
                        {0x262a15662b298944, 0x63eb500cce126b70, 0xc3bd5e2cd52318a8, 0x6edd225600000000},
                        {0x0000000000000067, 0x86ddce906c8cdb4d, 0x0000000000010000, 0x7c6bcb08155fac38},
                        {0xffffffffffffffff, 0xe35a000000000000, 0x7f2e6910bdea3ffd, 0x1234769364d9eac9},
                        {0x2e00000000000000, 0xd251a40a022b9000, 0xff98837fda2a5bdf, 0x7fc92593c865b4c2},
                        {0xaf29109cc0000000, 0xffffffffffffffff, 0xc9d368e6546c1f00, 0xb1db9b0fecbfaabe},
                        {0x0da24e08451a8d1a, 0x0000000000000080, 0x00020e6dfbb7c441, 0x4a6c986967d5ace8},
                        {0x5052886f7169c8c5, 0xea59a91078581c00, 0xffffffffffffffff, 0x27429c30e8b6cff7},
                        {0x8c91e2fe14041a34, 0x63eb500cce126b70, 0x62daff171a9fae42, 0x00129af7f2440efe},
                        {0x9480583abdfb5837, 0x0000000000000040, 0x262a15662b298944, 0xf5bad73c74be6d8a},
                        {0x0000000000000000, 0xb1db9b0fecbfaabe, 0xe79541e25d0dba6b, 0x0000000001000000},
                        {0x9420000000000000, 0xd0abd7d3688aa0d7, 0x314320aa7da5b1ef, 0xd0abd7d3688aa0d7},
                        {0x314320aa7da5b1ef, 0x0100000000000000, 0xbe55668178139c8e, 0xf48119b103954df1},
                        {0xbe55668178139c8e, 0x7fc92593c865b4c2, 0xbebf0929f41aa230, 0x0000020000000000},
                        {0x1735808ee4398bca, 0x00129af7f2440efe, 0x9d8dbb3a5bde4347, 0x31523358d080e093},
                        {0xe5baa16ee5b5419e, 0x34f2a050c605b6b0, 0x867e3492977cb1bb, 0x14d93f0c55095499},
                        {0x8b4eb00000000000, 0x0100000000000000, 0x000000a3714b9ad2, 0xdf09e5c90a990b56},
                        {0xdf09e5c90a990b56, 0xf3fbe985738811dd, 0xe35a000000000000, 0x31523358d080e093},
                        {0x0000000380f3cf69, 0x000000000dd2966b, 0x0000000000400000, 0x0000000100000000},
                        {0x0000000000000040, 0xbad28e0ca5854070, 0x0da24e08451a8d1a, 0xe35a000000000000},
                        {0x9d8dbb3a5bde4347, 0x0100000000000000, 0x63eb500cce126b70, 0xfad4dc0000000000},
                        {0xdfd83d690e5f073e, 0x0000000380f3cf69, 0x00000000a865d7d4, 0x9d8dbb3a5bde4347},
                        {0x05ada4e53975b451, 0xc7dee68fffbaf900, 0x00004a9e26b7f794, 0x31523358d080e093},
                        {0xc7dee68fffbaf900, 0x6d159abfb3030000, 0x7fc92593c865b4c2, 0x16b3a918e4278c9d},
                        {0x93d7d7a9d87056f0, 0x314320aa7da5b1ef, 0x90e1bc8ba22d3294, 0xe35a000000000000},
                        {0x3b0d936889b10a5d, 0x0000000000000001, 0x63eb500cce126b70, 0xbe55668178139c8e},
                        {0x0da24e08451a8d1a, 0x000000a3714b9ad2, 0x8f09996552504a5d, 0x6edd225600000000},
                        {0xd251a40a022b9000, 0x1735808ee4398bca, 0x62daff171a9fae42, 0xaf29109cc0000000},
                        {0x8000000000000000, 0x0ec6680cabb95f09, 0x996d1b60923c18a6, 0x61fd04828c93ce01},
                        {0xff98837fda2a5bdf, 0x0000800000000000, 0x44a705073f90be80, 0x05ada4e53975b451},
                        {0x8c91e2fe14041a34, 0x79780d4e5b2b3b2a, 0x2c1fb5204d248917, 0x5052886f7169c8c5},
                        {0x00129af7f2440efe, 0x4ab9cfc9a41744c4, 0x44a705073f90be80, 0x00000000000075da},
                        {0x986a686578456056, 0x8a4a182923bdf75a, 0xb040414dd8c98a14, 0x79780d4e5b2b3b2a},
                        {0x0da24e08451a8d1a, 0x79780d4e5b2b3b2a, 0x4cf560811e3465c5, 0x5052886f7169c8c5},
                        {0xbad28e0ca5854070, 0xc9d368e6546c1f00, 0x0000000000000000, 0x0000000000000000},
                        {0x25474d793f2c7d32, 0x0000000000000000, 0x000000000000000d, 0xfecee737556609f5},
                        {0xd251a40a022b9000, 0x68323fe289df33d1, 0xe35a000000000000, 0xd0abd7d3688aa0d7},
                        {0x44a705073f90be80, 0x4ab9cfc9a41744c4, 0x4a6c986967d5ace8, 0x0000000000002000},
                        {0x31523358d080e093, 0xbebf0929f41aa230, 0x1234769364d9eac9, 0xbd6192029dd91d60},
                        {0xdfd3a0870f60e072, 0x262a15662b298944, 0x0000000000000067, 0x3b4de2fabe6d6476},
                        {0xd27d2fde3497614c, 0xd27d2fde3497614c, 0x0000000000000000, 0x262a15662b298944},
                        {0x8000000000000000, 0xf48119b103954df1, 0x000000000000714c, 0x0ec6680cabb95f09},
                        {0x14d93f0c55095499, 0x000000000003ed82, 0x7dc2ae94e4000000, 0xf3fbe985738811dd},
                        {0x0000000000002000, 0x9420000000000000, 0x0000000000010000, 0x02ab7bb54e687499},
                        {0x63eb500cce126b70, 0x00000000000075da, 0x686f332000000000, 0xbad28e0ca5854070},
                        {0x90e1bc8ba22d3294, 0x00004a9e26b7f794, 0x00000000000075da, 0xffffffffffffffff},
                        {0xe35a000000000000, 0x314320aa7da5b1ef, 0x0000008000000000, 0x0000000100000000},
                        {0x8a4a182923bdf75a, 0x4cf560811e3465c5, 0x9d8dbb3a5bde4347, 0xc7dee68fffbaf900},
                        {0xffffffffffffffff, 0x0000000380f3cf69, 0x000000000dd2966b, 0xd251a40a022b9000},
                        {0xf0fe55be95a18d13, 0xca9d54bd4e78980e, 0x0000000000000080, 0x0000800000000000},
                        {0x000000000000015b, 0x7c6bcb08155fac38, 0x314320aa7da5b1ef, 0x0000008000000000},
                        {0x79780d4e5b2b3b2a, 0x02ab7bb54e687499, 0xa6a669d1baba633e, 0x93d7d7a9d87056f0},
                        {0xbebf0929f41aa230, 0x4cf560811e3465c5, 0x0000000000000000, 0x14d93f0c55095499},
                        {0x0000000000000004, 0xa8519a5b46242cc0, 0x0000000000000040, 0x867e3492977cb1bb},
                        {0x000000000000015b, 0x3d0e482377794618, 0x00000000a865d7d4, 0x8b4eb00000000000},
                        {0x0f812a265e560f2b, 0x7c6bcb08155fac38, 0x2c1fb5204d248917, 0xe35a000000000000},
                        {0x90e1bc8ba22d3294, 0x61fd04828c93ce01, 0xfecee737556609f5, 0xb040414dd8c98a14},
                        {0xbe55668178139c8e, 0x0010000000000000, 0x8b4eb00000000000, 0x79780d4e5b2b3b2a},
                        {0x2c1fb5204d248917, 0xe35a000000000000, 0x4cf560811e3465c5, 0x00020e6dfbb7c441},
                        {0x02ab7bb54e687499, 0x8000000000000000, 0x16b3a918e4278c9d, 0xa8519a5b46242cc0},
                        {0xdf09e5c90a990b56, 0xffffffffffffffff, 0xb9e2a99fdb7b2948, 0x314320aa7da5b1ef},
                        {0x7c6bcb08155fac38, 0x00000000000075da, 0x86ddce906c8cdb4d, 0x0010000000000000},
                        {0x9d8dbb3a5bde4347, 0x0ec6680cabb95f09, 0x0010000000000000, 0xdfd3a0870f60e072},
                        {0x0000000000002000, 0xca9d54bd4e78980e, 0xdf09e5c90a990b56, 0x0010000000000000},
                        {0x8c91e2fe14041a34, 0xf2a6b292a535dc4e, 0xcb9848f06e9659f6, 0x4ab9cfc9a41744c4},
                        {0x00129af7f2440efe, 0x34f2a050c605b6b0, 0x4fcf7212bebfdd89, 0x6465f271027abfa8},
                        {0x7c6bcb08155fac38, 0x0100000000000000, 0xdf9a26c8470349dd, 0x000000a3714b9ad2},
                        {0x000000000000000d, 0x00020e6dfbb7c441, 0x1234769364d9eac9, 0x0000008000000000},
                        {0xbebf0929f41aa230, 0x4cf560811e3465c5, 0x61fd04828c93ce01, 0xea59a91078581c00},
                        {0x0000000000400000, 0x62daff171a9fae42, 0xbebf0929f41aa230, 0xb9e2a99fdb7b2948},
                        {0x44a705073f90be80, 0x44a705073f90be80, 0xdf09e5c90a990b56, 0x4cf560811e3465c5},
                        {0xb9e2a99fdb7b2948, 0x0000000000000000, 0x9420000000000000, 0x00000bea6a6af755},
                        {0xc7dee68fffbaf900, 0x4fcf7212bebfdd89, 0x93d7d7a9d87056f0, 0xf5bad73c74be6d8a},
                        {0xbebf0929f41aa230, 0xb040414dd8c98a14, 0x314320aa7da5b1ef, 0x0000000000000000},
                        {0x9480583abdfb5837, 0xa8519a5b46242cc0, 0x9420000000000000, 0x0da24e08451a8d1a},
                        {0x000000000003ed82, 0x4ab9cfc9a41744c4, 0x62daff171a9fae42, 0x0000000380f3cf69}};
  uint64_t y = 0xfffffffffffffffc;
  uint64_t e[100][8] = {{0xffc0000000000000, 0xbd60a0b25dd57ca3, 0x6af76a511f9a3e3b, 0xd2d009f1140ceb34,
                         0x31a7445bdf8bcb5b, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xed63ebe301bd0600, 0x44a705073f90be7e, 0x66072db5a20d3912, 0x52a8b28e1eab1aa5,
                         0x4cf560811e3465c4, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3c06a905a979cbb4, 0xf0be55be95a18d0f, 0x3972ee9081d0d290, 0x31a7445bdf8bcb5f,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x809f0a5bc683e308, 0x033dccded4261076, 0x98d194991a575405, 0xa4e5e294bae3370b,
                         0xd0abd7d3688aa0d8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1d059ecdf0c5e6e0, 0x0a5d748ac9751e6f, 0xcb900f387fb748ef, 0x00020e5ff7e8869d,
                         0x0000000380f3cf69, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x301059ea31dfb88c, 0xb14c8a37d15d8e7d, 0x8f61b615a2e37dc0, 0x9bfc1d70a55dc8c4,
                         0x6d159abfb302fffe, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4800000000000000, 0xdd7fffffffffffff, 0xff02ca1b034e0b35, 0x614df67ee8a648e5,
                         0xf0fe55be95a18d13, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffffffffcc, 0x630dbe90d0ff9e2c, 0xa73c60b222143b21, 0xc0000bea6a6af755,
                         0x0fffffffffffffff, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa5315b9c6f61cd8c, 0x16b3a918e0278c9c, 0xfffffd723bd194b8, 0x1d059f71621181b1,
                         0x38be984c83ce8647, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffff00, 0x000000000000003b, 0xfffffe0000000001, 0xffb594a036efc407,
                         0x00129af7f2440efd, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x03465bbd0857000c, 0x7f2e6682f8bbd4b3, 0x000000a3714b98d2, 0xf10a874cab739de0,
                         0xc3bd5e2cd52318a8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffb5942036efc408, 0xed7686daf40114fd, 0x44a705073f90be4a, 0x23658f75c5c70949,
                         0x37269c228e8e3db0, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6757aa675359daf0, 0x0c31431bcd36c257, 0x92451404b9979959, 0x3d0e482377794417,
                         0x0000000000000080, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd58aad0ac61d9fc8, 0x7b3df615ecb73c4a, 0xc61d107f4234b77e, 0xbde869c02e2a7259,
                         0xbd6192029dd91d61, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf10a874cab739d60, 0x745dff857361bce4, 0x600255a55f9ebfda, 0x4cf560731a652820,
                         0x0000000380f3cf69, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfff7c6481120eefc, 0x301268582d977ccc, 0x9140418e63b7a409, 0x5db2c555f38992b3,
                         0xbebf0929f41aa231, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe6072db5a20d3914, 0x8f737a3f077cb1b8, 0xec2ae4d0da15015e, 0x372b3271027abfa6,
                         0x8b4eb00000000002, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x23658f75c5c7093c, 0xf921f38915360104, 0x14458d4908bde756, 0xfeceb78dabba2c9d,
                         0x00000bea6a6af755, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x03465bbd0857000c, 0xe0d9618749b3564f, 0xa64b202497669753, 0xda1b9b8601f0bba8,
                         0x9d8dbb3a5bde4348, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2c357ebce7e92540, 0x34a83470fcf57ab7, 0x2e0e3433e3eed73a, 0x2d12ad715096a2f5,
                         0xb1db9b0fecbfaac0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x4f812b7ecb6ddba4, 0x9eb7b5204d248916, 0xe359ffffc8b5a650, 0x000000000dd290ff,
                         0x000000000000015b, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0e50d3dfaa814f20, 0xef03cb08155fac36, 0x3ad4209cabbffffc, 0x4d2f3669a60f9e1d,
                         0xa73c905bcbc0187a, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x656658b915167308, 0xf24ffed2eeae633b, 0x422e5b9922a5ecee, 0xb92206059a2c4623,
                         0x6465f271027abfa6, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x2c357ebce7e92540, 0x369092515d5c4733, 0x045ce6a284923407, 0xfecee537556609f2,
                         0x0000008000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1a1fcac693531358, 0xbe0383f65b2b3b28, 0x30d879bc86a7c352, 0x234adc843791e5b7,
                         0x3b0d936889b10a5c, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6757aa675359daf0, 0x967cd532f2dfdb83, 0x54f5d759798608ce, 0x0848d4d4d52318a5,
                         0x6edd2255ffffffff, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffffffe64, 0xe488c5be4dcc9332, 0x86ddce906c88db4a, 0x0e50d3dfaa824f20,
                         0x7c6bcb08155fac36, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000004, 0x7297fffffffffffb, 0xe6a05bbd08570009, 0x365c8ec32a8294d7,
                         0x1234769364d9eac9, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4800000000000000, 0xe4b96fd7f751bfff, 0xd3ef960a99822080, 0x0073ed30b89388d3,
                         0x7fc92593c865b4c1, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x435bbd8d00000000, 0xaf29109cc0000001, 0xd8b25c66ae4f83fb, 0x0264fca6a16d7405,
                         0xb1db9b0fecbfaac0, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc976c7deeb95cb98, 0x0da24e08451a8b19, 0xfff7c6481120ef7c, 0xd64facc85c6110a0,
                         0x4a6c986967d5ace6, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xbeb5de423a58dcec, 0xa6ebe42d900958c3, 0xea59a91078581c00, 0x62f58f3c5d24c01f,
                         0x27429c30e8b6cff7, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcdb87407afef9730, 0xfce4a2cadbba6c71, 0xd87f53b06393b266, 0x62909337518f7248,
                         0x00129af7f2440efe, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xadfe9f1508129f24, 0x9480583abdfb5734, 0x6757aa675359db30, 0x4f3eb874582fd31b,
                         0xf5bad73c74be6d8a, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000000, 0x389193c04d015508, 0x138693867888c10f, 0xe79541e2590dba68,
                         0x0000000001000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xaf80000000000000, 0x5170a0b25dd57ca1, 0x0b9f552971f3d918, 0xee93c15cdb7b2e93,
                         0xd0abd7d3688aa0d7, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3af37d5609693844, 0x2d4320aa7da5b1ee, 0x07aa65fa1fb18dc8, 0xec50ffbd69be64c7,
                         0xf48119b103954df1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x06aa65fa1fb18dc8, 0xbf30d032567cc983, 0x84cd00ebf7fb2c00, 0xbebf0129f41aa22d,
                         0x0000020000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xa329fdc46f19d0d8, 0x16eb14af1b294fd1, 0x89dbae0e82cb01e2, 0xd844edd719dac0f8,
                         0x31523358d080e092, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x69157a44692af988, 0x11f0202bcd9e66da, 0x1af9ce066812efc4, 0x3319386143575f55,
                         0x14d93f0c55095499, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd2c5400000000000, 0x874eaffffffffffd, 0x00fffd723ad194b8, 0x83d8697f46e76d7a,
                         0xdf09e5c90a990b56, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x83d868dbd59bd2a8, 0x0f1a3fb33c78c3de, 0x6693e985738811da, 0x1e11329cbdfc7db1,
                         0x31523358d080e093, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffff1fc30c25c, 0x0000000349a975bc, 0x000000000cd2966b, 0xfffffffc00400000,
                         0x00000000ffffffff, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffff00, 0x14b5c7cd69eafe7f, 0x844955eb911b0c05, 0x803a4e08451a8d1a,
                         0xe35a000000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x89c913169086f2e4, 0x998dbb3a5bde4344, 0x7152bfccc7b65240, 0x7897e00cce126b6e,
                         0xfad4dc0000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x809f0a5bc683e308, 0xdfd83d5b0a8fc996, 0x00000000df5c7019, 0x89c9131738eccab8,
                         0x9d8dbb3a5bde4348, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe9496c6b1a292ebc, 0xe6320aa53a89d050, 0xc7ddbc1764db1aac, 0x3ab77d3ae4b47548,
                         0x31523358d080e092, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe08465c001141c00, 0x13887b9133aef8fc, 0x6df10470916c2cf7, 0x24fa813037c7824c,
                         0x16b3a918e4278c9d, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb0a0a1589e3ea440, 0xcecb54ffe1d98f31, 0xedbc2e7bf4f0e79e, 0x0379bc8ba22d3291,
                         0xe35a000000000001, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x13c9b25dd93bd68c, 0x3b0d936889b10a58, 0x7052bfccc7b65241, 0x6a95b606edc3f936,
                         0xbe55668178139c8f, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc976c7deeb95cb98, 0x0da24b7a7fec21d1, 0xc3d99b0e280a715e, 0xd395100d52504a5a,
                         0x6edd2255fffffffe, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb6b96fd7f751c000, 0x757ba1ce714560d4, 0x8bc9843279bad2c2, 0xa636bca41a9fae40,
                         0xaf29109cc0000001, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000000, 0x44e65fcd511a83da, 0xa911fa8a62c8fc71, 0x117909565fece09f,
                         0x61fd04828c93ce00, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x019df20097569084, 0xff96837fda2a5bdb, 0xed646be301bd0600, 0x2df0717259b9ed3a,
                         0x05ada4e53975b451, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcdb87407afef9730, 0xa6b1adc4a7572d89, 0xc8f938cd269916cc, 0xead59362877d6602,
                         0x5052886f7169c8c3, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffb5942036efc408, 0xd52b5bd161e6fbed, 0x381dbbaca5d44ac2, 0x44a705073f8ee717,
                         0x00000000000075da, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x9e565e6a1eea7ea8, 0x6f4207c0e94d82eb, 0xc94912f1c097cf08, 0xca600c146c1c9d69,
                         0x79780d4e5b2b3b28, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xc976c7deeb95cb98, 0x27c218ced86da071, 0x45a28b49e259a414, 0x0bab3ec3588d42b0,
                         0x5052886f7169c8c4, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x14b5c7cd69eafe40, 0x9384ea7353d4c46d, 0xc9d368e6546c1efd, 0x0000000000000000,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x6ae2ca1b034e0b38, 0x25474d793f2c7d31, 0xffffffffffffffcc, 0x04c46322aa67d838,
                         0xfecee737556609f5, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xb6b96fd7f751c000, 0x3188a47fdaaec0b8, 0xdaca3fe289df33d0, 0xa0aaa0b25dd57ca0,
                         0xd0abd7d3688aa0d8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xed63ebe301bd0600, 0x19bfc5e0af33ab6e, 0x21076e2404c09123, 0x4a6c986967d52ce7,
                         0x0000000000002000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x3ab7329cbdfc7db4, 0x36560eb1001657d2, 0x75ed2edc60b2f709, 0x1cae2e88ed757549,
                         0xbd6192029dd91d61, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x80b17de3c27c7e38, 0x472b4aee62babb5e, 0x262a15662b2987a8, 0x12c87415064a6e8f,
                         0x3b4de2fabe6d6475, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb60b40872da27ad0, 0x888870656239dc18, 0xd27d2fde34976149, 0x6757aa675359daf0,
                         0x262a15662b298943, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0xadfb993bf1aac83a, 0xf48119b1039388bd, 0xc4e65fcd511af528,
                         0x0ec6680cabb95f08, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xac9b03ceabdaad9c, 0x14d93f0c54f99e90, 0x08f545ac7003ed82, 0xadd3087f15dfb88a,
                         0xf3fbe985738811dd, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffffff8000, 0xaf80000000001fff, 0x941ffffffffbfffd, 0xf552112ac65f2d9c,
                         0x02ab7bb54e687498, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x7052bfccc7b65240, 0x63eb500cce109406, 0x5e433380000075da, 0x7d24faed69eafe3e,
                         0xbad28e0ca5854071, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xbc790dd1774b35b0, 0x90e09213074d5441, 0x00004a9e26b6202c, 0x00000000000075de,
                         0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7298000000000000, 0x1e4d7d5609693840, 0x31431eaa7da5b1ef, 0x0000007c00000000,
                         0x0000000100000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xd6d79f5b71082298, 0x56749624aaec6043, 0xd6be7397aebb58a8, 0x7e1220fa5cf25f44,
                         0xc7dee68fffbaf901, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000004, 0xfffffff1fc30c257, 0x0000000349a975bd, 0xb6b96fd80524566b,
                         0xd251a40a022b9000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3c06a905a979cbb4, 0xc68902c95bbf2cd7, 0xca9d54bd4e78960b, 0xfffe000000000080,
                         0x00007fffffffffff, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffffffa94, 0x0e50d3dfaa81507a, 0xb75f485e1ec8e47a, 0x31431eaa7da5b1ee,
                         0x0000008000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1a1fcac693531358, 0x6eca1e79218968c4, 0x6811d46e637ee7a1, 0x57470b2a58f9077b,
                         0x93d7d7a9d87056f2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0503db582f957740, 0x8ae987257b490b19, 0x4cf560811e3465c4, 0xac9b03ceabdaad9c,
                         0x14d93f0c55095498, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffffffff0, 0x5eb99692e76f4d03, 0xa8519a5b46242bbd, 0xe6072db5a20d3954,
                         0x867e3492977cb1bc, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xfffffffffffffa94, 0x0bc6df72221ae8fa, 0x3d0e4820d5e1e6c7, 0xd2c54000a865d7d4,
                         0x8b4eb00000000001, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc1fb576686a7c354, 0x1dd1fe0608d75e4a, 0xcbecf686e0cd87da, 0x9eb7b5204d248916,
                         0xe35a000000000000, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xbc790dd1774b35b0, 0x08edaa816fddfa8d, 0x66c167a536fba62c, 0x3dcde1fff23fe1a1,
                         0xb040414dd8c98a16, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x06aa65fa1fb18dc8, 0xbe15668178139c8b, 0xd2d5400000000000, 0xa56e7ac693531355,
                         0x79780d4e5b2b3b28, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4f812b7ecb6ddba4, 0x9eb7b5204d248916, 0xaf847dfb872e68e8, 0x4ced26c92f5554c0,
                         0x00020e6dfbb7c441, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xf552112ac65e2d9c, 0x02ab7bb54e687498, 0x25315b9c6f61cd8a, 0x756d3fabcb96d99d,
                         0xa8519a5b46242cc1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x83d868dbd59bd2a8, 0xdf09e5c90a990b56, 0x1875598092135adb, 0xf4d626f5e4e4618a,
                         0x314320aa7da5b1ee, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0e50d3dfaa814f20, 0x7c6bcb08155dd4ce, 0xe488c5be4dcd08a6, 0x869dce906c8cdb4a,
                         0x0010000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x89c913169086f2e4, 0x62741b07acf8c720, 0x0e86680cabb95f09, 0x80c17de3c27c7e38,
                         0xdfd3a0870f60e072, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffffff8000, 0xd58aad0ac61dbfc7, 0x4e75bd9924146ab2, 0xdec9e5c90a990b53,
                         0x0010000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xcdb87407afef9730, 0xc1f718b37f2ca8f9, 0xc4458ed0eadc7472, 0xa0b109c9de3946e3,
                         0x4ab9cfc9a41744c3, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffb5942036efc408, 0x2c4819b4da2d343d, 0xf5b4d805cb06408b, 0xbe37a84eb4d4dee7,
                         0x6465f271027abfa6, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0e50d3dfaa814f20, 0x786bcb08155fac36, 0x829764dee3f2d88c, 0xdf9a243a81d4de91,
                         0x000000a3714b9ad2, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xffffffffffffffcc, 0xfff7c6481120ef08, 0xb73034206850191c, 0x1234749364d9eac8,
                         0x0000008000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0503db582f957740, 0x8ae987257b490b19, 0xc5014e76ebe52dc0, 0xb8966040ab335dff,
                         0xea59a91078581c00, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xffffffffff000000, 0x749403a395c146f7, 0x67deda6f4a352580, 0xd73462aa862dfd0d,
                         0xb9e2a99fdb7b2949, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xed63ebe301bd0600, 0x320af0ea414dc47e, 0xc87f6de3152c9127, 0xab3463c491c7743e,
                         0x4cf560811e3465c4, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x1875598092135ae0, 0xb9e2a99fdb7b2945, 0xaf80000000000000, 0x941fd056565422a9,
                         0x00000bea6a6af755, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe08465c001141c00, 0x88a11e4504bb82d8, 0x0070136b5cfe81c8, 0xbcec7ab80576a0c6,
                         0xf5bad73c74be6d8a, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0503db582f957740, 0xfdbe03f290f479dd, 0xeb33bea3e232c255, 0x314320aa7da5b1ee,
                         0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xadfe9f1508129f24, 0xf339eecda56aa534, 0x57d19a5b46242cbd, 0x5d96c7deeb95cb96,
                         0x0da24e08451a8d1a, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xfffffffffff049f8, 0xd518c0d96fa6da71, 0xbf4dd36d39988bba, 0x62daff0916d0709c,
                         0x0000000380f3cf69, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  uint64_t z[100][8] = {0};
  vwmulsu_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 8; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}