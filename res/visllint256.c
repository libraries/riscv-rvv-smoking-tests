#include <stddef.h>
#include <stdint.h>

void visllint256(size_t n, const uint64_t x[][4], uint64_t y[][4]);



int main() {
  uint64_t x[100][4] = {{0x0000000000000000, 0x8a4a182923bdf75a, 0x90e1bc8ba22d3294, 0x262a15662b298944},{0xbd6192029dd91d60, 0x000000000dd2966b, 0x61fd04828c93ce01, 0xb040414dd8c98a14},{0xdf9a26c8470349dd, 0x0000008000000000, 0x000000000dd2966b, 0xe35a000000000000},{0xb040414dd8c98a14, 0xf0fe55be95a18d13, 0x314320aa7da5b1ef, 0x1735808ee4398bca},{0x867e3492977cb1bb, 0x000000000000714c, 0xe5baa16ee5b5419e, 0xbd6192029dd91d60},{0x6edd225600000000, 0xbe55668178139c8e, 0xdfd3a0870f60e072, 0x0000020000000000},{0xb1db9b0fecbfaabe, 0xbe55668178139c8e, 0x8c91e2fe14041a34, 0xaf29109cc0000000},{0x7fc92593c865b4c2, 0x31a7445bdf8bcb5c, 0xe5baa16ee5b5419e, 0xbd6192029dd91d60},{0x0f812a265e560f2b, 0xaf29109cc0000000, 0x0000000000000000, 0xbd6192029dd91d60},{0x38be984c83ce8648, 0x7dc2ae94e4000000, 0x8b4eb00000000000, 0xe5baa16ee5b5419e},{0x00020e6dfbb7c441, 0xdfd83d690e5f073e, 0xfecee737556609f5, 0x000000000dd2966b},{0x14d93f0c55095499, 0xbad28e0ca5854070, 0x0000008000000000, 0x31523358d080e093},{0xf5bad73c74be6d8a, 0x0ec6680cabb95f09, 0x9420000000000000, 0x3b0d936889b10a5d},{0xc9d368e6546c1f00, 0x0000000000000004, 0x2e00000000000000, 0x02ab7bb54e687499},{0xa8519a5b46242cc0, 0xc7dee68fffbaf900, 0xea2177d8d5100000, 0x8000000000000000},{0x0000008000000000, 0x3b4de2fabe6d6476, 0xbe55668178139c8e, 0x34f2a050c605b6b0},{0xb040414dd8c98a14, 0x000000000000000d, 0xfad4dc0000000000, 0x16b3a918e4278c9d},{0x6d159abfb3030000, 0x90e1bc8ba22d3294, 0x8a4a182923bdf75a, 0xc7dee68fffbaf900},{0x14d93f0c55095499, 0x0000000000010000, 0xf0fe55be95a18d13, 0x00000000000075da},{0xbe55668178139c8e, 0xfecee737556609f5, 0xd27d2fde3497614c, 0x0000000000010000},{0x5052886f7169c8c5, 0x4fcf7212bebfdd89, 0x68323fe289df33d1, 0x4cf560811e3465c5},{0x0da24e08451a8d1a, 0x2d21e3da342cd6be, 0x0f812a265e560f2b, 0x7c6bcb08155fac38},{0x25474d793f2c7d32, 0x63eb500cce126b70, 0x79780d4e5b2b3b2a, 0x8a4a182923bdf75a},{0x000000000003ed82, 0x68323fe289df33d1, 0x1000000000000000, 0xa73c905bcbc01878},{0x44a705073f90be80, 0xe5baa16ee5b5419e, 0xcb9848f06e9659f6, 0x31a7445bdf8bcb5c},{0x867e3492977cb1bb, 0xe35a000000000000, 0x986a686578456056, 0x2e00000000000000},{0xfecee737556609f5, 0x00020e6dfbb7c441, 0x00004a9e26b7f794, 0x7c6bcb08155fac38},{0x262a15662b298944, 0x7fc92593c865b4c2, 0x00000bea6a6af755, 0x000000000000015b},{0xf2a6b292a535dc4e, 0xb36eb1caa58ee7dc, 0x4ab9cfc9a41744c4, 0x0000000000000067},{0x5052886f7169c8c5, 0xb9e2a99fdb7b2948, 0x61fd04828c93ce01, 0xdfd83d690e5f073e},{0xbebf0929f41aa230, 0x996d1b60923c18a6, 0x6d159abfb3030000, 0x0000000000000000},{0x63eb500cce126b70, 0x16b3a918e4278c9d, 0x0000000380f3cf69, 0x6d159abfb3030000},{0xfecee737556609f5, 0x9480583abdfb5837, 0xdfd83d690e5f073e, 0xe5baa16ee5b5419e},{0xe5baa16ee5b5419e, 0xdf9a26c8470349dd, 0x3d0e482377794618, 0x3d0e482377794618},{0xe5baa16ee5b5419e, 0xf2a6b292a535dc4e, 0xdf09e5c90a990b56, 0x68323fe289df33d1},{0x7c6bcb08155fac38, 0x00004a9e26b7f794, 0x00129af7f2440efe, 0x05ada4e53975b451},{0x1234769364d9eac9, 0x38be984c83ce8648, 0x6d159abfb3030000, 0xf3fbe985738811dd},{0x2e00000000000000, 0x6465f271027abfa8, 0x2c1fb5204d248917, 0x1000000000000000},{0x000000000dd2966b, 0x1735808ee4398bca, 0x9420000000000000, 0x000000000003ed82},{0x3d0e482377794618, 0x314320aa7da5b1ef, 0x0000008000000000, 0x9420000000000000},{0x4ab9cfc9a41744c4, 0x4cf560811e3465c5, 0xe35a000000000000, 0x00129af7f2440efe},{0x000000000000714c, 0x93d7d7a9d87056f0, 0x2d21e3da342cd6be, 0xf3fbe985738811dd},{0x314320aa7da5b1ef, 0xbad28e0ca5854070, 0x000000000dd2966b, 0xe35a000000000000},{0x90e1bc8ba22d3294, 0x0000000100000000, 0x0010000000000000, 0x0000008000000000},{0x0000800000000000, 0x0f812a265e560f2b, 0x2c1fb5204d248917, 0xa73c905bcbc01878},{0x68323fe289df33d1, 0x9480583abdfb5837, 0x7c6bcb08155fac38, 0x0100000000000000},{0x0000000000000040, 0x4cf560811e3465c5, 0x7f2e6910bdea3ffd, 0x00000000a865d7d4},{0x0010000000000000, 0x79780d4e5b2b3b2a, 0xfecee737556609f5, 0x00129af7f2440efe},{0x93d7d7a9d87056f0, 0x000000000dd2966b, 0x61fd04828c93ce01, 0x314320aa7da5b1ef},{0xf0fe55be95a18d13, 0x9d8dbb3a5bde4347, 0xea2177d8d5100000, 0xd27d2fde3497614c},{0x00000bea6a6af755, 0x7f2e6910bdea3ffd, 0x262a15662b298944, 0x16b3a918e4278c9d},{0x3b4de2fabe6d6476, 0x62daff171a9fae42, 0x8a4a182923bdf75a, 0xff98837fda2a5bdf},{0x0000000000000040, 0x0000000380f3cf69, 0x0f812a265e560f2b, 0x3b0d936889b10a5d},{0x0000000000000040, 0x0000000380f3cf69, 0x000000a3714b9ad2, 0x2d21e3da342cd6be},{0x1735808ee4398bca, 0xb36eb1caa58ee7dc, 0x25474d793f2c7d32, 0xdfd3a0870f60e072},{0x4a6c986967d5ace8, 0x0000020000000000, 0x8000000000000000, 0x9420000000000000},{0xdfd3a0870f60e072, 0x986a686578456056, 0x44a705073f90be80, 0x0000000000000004},{0x00000bea6a6af755, 0x0000000000000004, 0x0000000000000000, 0x8b4eb00000000000},{0xf0fe55be95a18d13, 0x0000020000000000, 0x00000000000075da, 0x0da24e08451a8d1a},{0x3b0d936889b10a5d, 0x0000000000000001, 0xf0fe55be95a18d13, 0x0000000001000000},{0xea2177d8d5100000, 0xbebf0929f41aa230, 0x6edd225600000000, 0x00020e6dfbb7c441},{0x27429c30e8b6cff7, 0xdfd3a0870f60e072, 0xdfd83d690e5f073e, 0xf3fbe985738811dd},{0x0000000000000001, 0x8c91e2fe14041a34, 0xdfd3a0870f60e072, 0x4ab9cfc9a41744c4},{0x31a7445bdf8bcb5c, 0x867e3492977cb1bb, 0x8c91e2fe14041a34, 0xa8519a5b46242cc0},{0x0000000001000000, 0x93d7d7a9d87056f0, 0xf0fe55be95a18d13, 0x0100000000000000},{0x0da24e08451a8d1a, 0x0000000000010000, 0x00000bea6a6af755, 0x0000000000000004},{0x000000000dd2966b, 0xd251a40a022b9000, 0xbad28e0ca5854070, 0x9480583abdfb5837},{0xe79541e25d0dba6b, 0x31a7445bdf8bcb5c, 0xe5baa16ee5b5419e, 0xb1db9b0fecbfaabe},{0x0000000000002000, 0x2d21e3da342cd6be, 0xbe55668178139c8e, 0xf0fe55be95a18d13},{0x44a705073f90be80, 0x79780d4e5b2b3b2a, 0x0000000000400000, 0x44a705073f90be80},{0x8c91e2fe14041a34, 0x000000000dd2966b, 0x262a15662b298944, 0x3b0d936889b10a5d},{0xf0fe55be95a18d13, 0x4fcf7212bebfdd89, 0xf48119b103954df1, 0x0000000380f3cf69},{0x14d93f0c55095499, 0x0100000000000000, 0x0000000000400000, 0xe79541e25d0dba6b},{0xaf29109cc0000000, 0x000000000dd2966b, 0x2d21e3da342cd6be, 0x9d8dbb3a5bde4347},{0x1000000000000000, 0x000000000003ed82, 0x000000a3714b9ad2, 0xc3bd5e2cd52318a8},{0x1735808ee4398bca, 0x1735808ee4398bca, 0xfad4dc0000000000, 0xa8519a5b46242cc0},{0x5052886f7169c8c5, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x0f812a265e560f2b},{0x93d7d7a9d87056f0, 0x8f09996552504a5d, 0x0000000000000000, 0x6d159abfb3030000},{0x05ada4e53975b451, 0x44a705073f90be80, 0x0000000000000067, 0x6d159abfb3030000},{0x25474d793f2c7d32, 0x61fd04828c93ce01, 0x6d159abfb3030000, 0xb1db9b0fecbfaabe},{0x00020e6dfbb7c441, 0x02ab7bb54e687499, 0x000000a3714b9ad2, 0x986a686578456056},{0x86ddce906c8cdb4d, 0x93d7d7a9d87056f0, 0x27429c30e8b6cff7, 0x8a4a182923bdf75a},{0x000000000000000d, 0xa8519a5b46242cc0, 0x0000000000000080, 0xa73c905bcbc01878},{0xf5bad73c74be6d8a, 0x0000000000000004, 0x58aee9fdc3f41b74, 0xb9e2a99fdb7b2948},{0x0000000000000000, 0x1000000000000000, 0x62daff171a9fae42, 0x93d7d7a9d87056f0},{0x58aee9fdc3f41b74, 0xbebf0929f41aa230, 0x262a15662b298944, 0x3b4de2fabe6d6476},{0x8f09996552504a5d, 0x79780d4e5b2b3b2a, 0xa73c905bcbc01878, 0x16b3a918e4278c9d},{0xd27d2fde3497614c, 0xc10a152d71cb3f16, 0x000000000dd2966b, 0x9420000000000000},{0x8000000000000000, 0x1000000000000000, 0x05ada4e53975b451, 0x0010000000000000},{0x2d21e3da342cd6be, 0xdfd3a0870f60e072, 0x9420000000000000, 0xb040414dd8c98a14},{0x0000000000002000, 0x000000000000000d, 0x93d7d7a9d87056f0, 0x000000000000000d},{0x00000000a865d7d4, 0x38be984c83ce8648, 0x3b4de2fabe6d6476, 0x9d8dbb3a5bde4347},{0x0f812a265e560f2b, 0x90e1bc8ba22d3294, 0x7c6bcb08155fac38, 0xdf9a26c8470349dd},{0xaf29109cc0000000, 0x6edd225600000000, 0xe35a000000000000, 0x00129af7f2440efe},{0x0000020000000000, 0xc7dee68fffbaf900, 0xa73c905bcbc01878, 0x00129af7f2440efe},{0x0000000000000001, 0x000000000dd2966b, 0xc10a152d71cb3f16, 0x44a705073f90be80},{0x90e1bc8ba22d3294, 0x000000000000015b, 0xd0abd7d3688aa0d7, 0x000000a3714b9ad2},{0x4cf560811e3465c5, 0x000000000dd2966b, 0x314320aa7da5b1ef, 0x0da24e08451a8d1a},{0x0000020000000000, 0x8f09996552504a5d, 0x000000a3714b9ad2, 0xd27d2fde3497614c},{0xdfd83d690e5f073e, 0x02ab7bb54e687499, 0x4a6c986967d5ace8, 0x25474d793f2c7d32}};
  uint64_t y[100][4];
  uint64_t e[100][4] = {{0x0000000000000000, 0x14943052477beeb4, 0x21c37917445a6529, 0x4c542acc56531289},{0x7ac324053bb23ac0, 0x000000001ba52cd7, 0xc3fa090519279c02, 0x6080829bb1931428},{0xbf344d908e0693ba, 0x0000010000000001, 0x000000001ba52cd6, 0xc6b4000000000000},{0x6080829bb1931428, 0xe1fcab7d2b431a27, 0x62864154fb4b63df, 0x2e6b011dc8731794},{0x0cfc69252ef96376, 0x000000000000e299, 0xcb7542ddcb6a833c, 0x7ac324053bb23ac1},{0xddba44ac00000000, 0x7caacd02f027391c, 0xbfa7410e1ec1c0e5, 0x0000040000000001},{0x63b7361fd97f557c, 0x7caacd02f027391d, 0x1923c5fc28083469, 0x5e52213980000001},{0xff924b2790cb6984, 0x634e88b7bf1796b8, 0xcb7542ddcb6a833c, 0x7ac324053bb23ac1},{0x1f02544cbcac1e56, 0x5e52213980000000, 0x0000000000000001, 0x7ac324053bb23ac0},{0x717d3099079d0c90, 0xfb855d29c8000000, 0x169d600000000000, 0xcb7542ddcb6a833d},{0x00041cdbf76f8882, 0xbfb07ad21cbe0e7c, 0xfd9dce6eaacc13eb, 0x000000001ba52cd7},{0x29b27e18aa12a932, 0x75a51c194b0a80e0, 0x0000010000000001, 0x62a466b1a101c126},{0xeb75ae78e97cdb14, 0x1d8cd0195772be13, 0x2840000000000000, 0x761b26d1136214bb},{0x93a6d1cca8d83e00, 0x0000000000000009, 0x5c00000000000000, 0x0556f76a9cd0e932},{0x50a334b68c485980, 0x8fbdcd1fff75f201, 0xd442efb1aa200001, 0x0000000000000001},{0x0000010000000000, 0x769bc5f57cdac8ec, 0x7caacd02f027391c, 0x69e540a18c0b6d61},{0x6080829bb1931428, 0x000000000000001b, 0xf5a9b80000000000, 0x2d675231c84f193b},{0xda2b357f66060000, 0x21c37917445a6528, 0x14943052477beeb5, 0x8fbdcd1fff75f201},{0x29b27e18aa12a932, 0x0000000000020000, 0xe1fcab7d2b431a26, 0x000000000000ebb5},{0x7caacd02f027391c, 0xfd9dce6eaacc13eb, 0xa4fa5fbc692ec299, 0x0000000000020001},{0xa0a510dee2d3918a, 0x9f9ee4257d7fbb12, 0xd0647fc513be67a2, 0x99eac1023c68cb8a},{0x1b449c108a351a34, 0x5a43c7b46859ad7c, 0x1f02544cbcac1e56, 0xf8d796102abf5870},{0x4a8e9af27e58fa64, 0xc7d6a0199c24d6e0, 0xf2f01a9cb6567654, 0x14943052477beeb4},{0x000000000007db04, 0xd0647fc513be67a2, 0x2000000000000000, 0x4e7920b7978030f0},{0x894e0a0e7f217d00, 0xcb7542ddcb6a833c, 0x973091e0dd2cb3ed, 0x634e88b7bf1796b9},{0x0cfc69252ef96376, 0xc6b4000000000001, 0x30d4d0caf08ac0ad, 0x5c00000000000001},{0xfd9dce6eaacc13ea, 0x00041cdbf76f8883, 0x0000953c4d6fef28, 0xf8d796102abf5870},{0x4c542acc56531288, 0xff924b2790cb6984, 0x000017d4d4d5eeaa, 0x00000000000002b6},{0xe54d65254a6bb89c, 0x66dd63954b1dcfb9, 0x95739f93482e8989, 0x00000000000000ce},{0xa0a510dee2d3918a, 0x73c5533fb6f65290, 0xc3fa090519279c03, 0xbfb07ad21cbe0e7c},{0x7d7e1253e8354460, 0x32da36c12478314d, 0xda2b357f66060001, 0x0000000000000000},{0xc7d6a0199c24d6e0, 0x2d675231c84f193a, 0x0000000701e79ed2, 0xda2b357f66060000},{0xfd9dce6eaacc13ea, 0x2900b0757bf6b06f, 0xbfb07ad21cbe0e7d, 0xcb7542ddcb6a833d},{0xcb7542ddcb6a833c, 0xbf344d908e0693bb, 0x7a1c9046eef28c31, 0x7a1c9046eef28c30},{0xcb7542ddcb6a833c, 0xe54d65254a6bb89d, 0xbe13cb92153216ad, 0xd0647fc513be67a3},{0xf8d796102abf5870, 0x0000953c4d6fef28, 0x002535efe4881dfc, 0x0b5b49ca72eb68a2},{0x2468ed26c9b3d592, 0x717d3099079d0c90, 0xda2b357f66060000, 0xe7f7d30ae71023ba},{0x5c00000000000000, 0xc8cbe4e204f57f50, 0x583f6a409a49122e, 0x2000000000000000},{0x000000001ba52cd6, 0x2e6b011dc8731794, 0x2840000000000000, 0x000000000007db05},{0x7a1c9046eef28c30, 0x62864154fb4b63de, 0x0000010000000000, 0x2840000000000000},{0x95739f93482e8988, 0x99eac1023c68cb8a, 0xc6b4000000000000, 0x002535efe4881dfd},{0x000000000000e298, 0x27afaf53b0e0ade0, 0x5a43c7b46859ad7d, 0xe7f7d30ae71023ba},{0x62864154fb4b63de, 0x75a51c194b0a80e0, 0x000000001ba52cd7, 0xc6b4000000000000},{0x21c37917445a6528, 0x0000000200000001, 0x0020000000000000, 0x0000010000000000},{0x0001000000000000, 0x1f02544cbcac1e56, 0x583f6a409a49122e, 0x4e7920b7978030f0},{0xd0647fc513be67a2, 0x2900b0757bf6b06e, 0xf8d796102abf5871, 0x0200000000000000},{0x0000000000000080, 0x99eac1023c68cb8a, 0xfe5cd2217bd47ffa, 0x0000000150cbafa8},{0x0020000000000000, 0xf2f01a9cb6567654, 0xfd9dce6eaacc13ea, 0x002535efe4881dfd},{0x27afaf53b0e0ade0, 0x000000001ba52cd7, 0xc3fa090519279c02, 0x62864154fb4b63de},{0xe1fcab7d2b431a26, 0x3b1b7674b7bc868f, 0xd442efb1aa200001, 0xa4fa5fbc692ec299},{0x000017d4d4d5eeaa, 0xfe5cd2217bd47ffa, 0x4c542acc56531288, 0x2d675231c84f193a},{0x769bc5f57cdac8ec, 0xc5b5fe2e353f5c84, 0x14943052477beeb4, 0xff3106ffb454b7bf},{0x0000000000000080, 0x0000000701e79ed2, 0x1f02544cbcac1e56, 0x761b26d1136214ba},{0x0000000000000080, 0x0000000701e79ed2, 0x00000146e29735a4, 0x5a43c7b46859ad7c},{0x2e6b011dc8731794, 0x66dd63954b1dcfb8, 0x4a8e9af27e58fa65, 0xbfa7410e1ec1c0e4},{0x94d930d2cfab59d0, 0x0000040000000000, 0x0000000000000000, 0x2840000000000001},{0xbfa7410e1ec1c0e4, 0x30d4d0caf08ac0ad, 0x894e0a0e7f217d01, 0x0000000000000008},{0x000017d4d4d5eeaa, 0x0000000000000008, 0x0000000000000000, 0x169d600000000000},{0xe1fcab7d2b431a26, 0x0000040000000001, 0x000000000000ebb4, 0x1b449c108a351a34},{0x761b26d1136214ba, 0x0000000000000002, 0xe1fcab7d2b431a26, 0x0000000002000001},{0xd442efb1aa200000, 0x7d7e1253e8354461, 0xddba44ac00000001, 0x00041cdbf76f8882},{0x4e853861d16d9fee, 0xbfa7410e1ec1c0e4, 0xbfb07ad21cbe0e7d, 0xe7f7d30ae71023bb},{0x0000000000000002, 0x1923c5fc28083468, 0xbfa7410e1ec1c0e5, 0x95739f93482e8989},{0x634e88b7bf1796b8, 0x0cfc69252ef96376, 0x1923c5fc28083469, 0x50a334b68c485981},{0x0000000002000000, 0x27afaf53b0e0ade0, 0xe1fcab7d2b431a27, 0x0200000000000001},{0x1b449c108a351a34, 0x0000000000020000, 0x000017d4d4d5eeaa, 0x0000000000000008},{0x000000001ba52cd6, 0xa4a3481404572000, 0x75a51c194b0a80e1, 0x2900b0757bf6b06f},{0xcf2a83c4ba1b74d6, 0x634e88b7bf1796b9, 0xcb7542ddcb6a833c, 0x63b7361fd97f557d},{0x0000000000004000, 0x5a43c7b46859ad7c, 0x7caacd02f027391c, 0xe1fcab7d2b431a27},{0x894e0a0e7f217d00, 0xf2f01a9cb6567654, 0x0000000000800000, 0x894e0a0e7f217d00},{0x1923c5fc28083468, 0x000000001ba52cd7, 0x4c542acc56531288, 0x761b26d1136214ba},{0xe1fcab7d2b431a26, 0x9f9ee4257d7fbb13, 0xe9023362072a9be2, 0x0000000701e79ed3},{0x29b27e18aa12a932, 0x0200000000000000, 0x0000000000800000, 0xcf2a83c4ba1b74d6},{0x5e52213980000000, 0x000000001ba52cd7, 0x5a43c7b46859ad7c, 0x3b1b7674b7bc868e},{0x2000000000000000, 0x000000000007db04, 0x00000146e29735a4, 0x877abc59aa463150},{0x2e6b011dc8731794, 0x2e6b011dc8731794, 0xf5a9b80000000000, 0x50a334b68c485981},{0xa0a510dee2d3918a, 0x14943052477beeb4, 0xff924b2790cb6985, 0x1f02544cbcac1e56},{0x27afaf53b0e0ade0, 0x1e1332caa4a094bb, 0x0000000000000001, 0xda2b357f66060000},{0x0b5b49ca72eb68a2, 0x894e0a0e7f217d00, 0x00000000000000ce, 0xda2b357f66060000},{0x4a8e9af27e58fa64, 0xc3fa090519279c02, 0xda2b357f66060000, 0x63b7361fd97f557c},{0x00041cdbf76f8882, 0x0556f76a9cd0e932, 0x00000146e29735a4, 0x30d4d0caf08ac0ac},{0x0dbb9d20d919b69a, 0x27afaf53b0e0ade1, 0x4e853861d16d9fef, 0x14943052477beeb4},{0x000000000000001a, 0x50a334b68c485980, 0x0000000000000101, 0x4e7920b7978030f0},{0xeb75ae78e97cdb14, 0x0000000000000009, 0xb15dd3fb87e836e8, 0x73c5533fb6f65290},{0x0000000000000000, 0x2000000000000000, 0xc5b5fe2e353f5c84, 0x27afaf53b0e0ade0},{0xb15dd3fb87e836e8, 0x7d7e1253e8354460, 0x4c542acc56531289, 0x769bc5f57cdac8ec},{0x1e1332caa4a094ba, 0xf2f01a9cb6567655, 0x4e7920b7978030f0, 0x2d675231c84f193b},{0xa4fa5fbc692ec298, 0x82142a5ae3967e2d, 0x000000001ba52cd7, 0x2840000000000000},{0x0000000000000000, 0x2000000000000001, 0x0b5b49ca72eb68a2, 0x0020000000000000},{0x5a43c7b46859ad7c, 0xbfa7410e1ec1c0e4, 0x2840000000000001, 0x6080829bb1931429},{0x0000000000004000, 0x000000000000001a, 0x27afaf53b0e0ade0, 0x000000000000001b},{0x0000000150cbafa8, 0x717d3099079d0c90, 0x769bc5f57cdac8ec, 0x3b1b7674b7bc868e},{0x1f02544cbcac1e56, 0x21c37917445a6528, 0xf8d796102abf5871, 0xbf344d908e0693ba},{0x5e52213980000000, 0xddba44ac00000001, 0xc6b4000000000000, 0x002535efe4881dfd},{0x0000040000000000, 0x8fbdcd1fff75f200, 0x4e7920b7978030f1, 0x002535efe4881dfd},{0x0000000000000002, 0x000000001ba52cd6, 0x82142a5ae3967e2c, 0x894e0a0e7f217d01},{0x21c37917445a6528, 0x00000000000002b7, 0xa157afa6d11541ae, 0x00000146e29735a5},{0x99eac1023c68cb8a, 0x000000001ba52cd6, 0x62864154fb4b63de, 0x1b449c108a351a34},{0x0000040000000000, 0x1e1332caa4a094ba, 0x00000146e29735a5, 0xa4fa5fbc692ec298},{0xbfb07ad21cbe0e7c, 0x0556f76a9cd0e933, 0x94d930d2cfab59d0, 0x4a8e9af27e58fa64}};

  visllint256(100, x, y);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
