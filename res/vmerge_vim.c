#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void vmerge_vim(size_t n, const uint64_t x[], const uint8_t m[], uint64_t z[]);

bool get_bit(const uint8_t m[], uint64_t i) {
  uint64_t off = i / 8;
  uint64_t bit = i - off * 8;
  return m[off] & (1 << bit);
}

int main() {
  uint64_t x[100] = {
      0xad0a300c30f75f92, 0xdaaa35e70fd353da, 0x2093d85984e4f6fa, 0x756342a4d03ee63f, 0xfda192ec34d61079,
      0x81174179bf583bc1, 0x474bb3647057e601, 0xa05cd76ade1c9228, 0x4e0df46a3e713eb3, 0xb25c5f0b14753d3d,
      0xedf0326c55c2ff0f, 0x834184baa0afef14, 0x81f7b739984e769f, 0x53cd1d0a14ce8d9b, 0x9521f8818847da5c,
      0x6e9eaba56e433055, 0xd7a3402a5e4bab3c, 0x767627e777672159, 0xce1fcc27330029d4, 0x71c6e38cf9422278,
      0x29aee0d520e5e429, 0x1f32ea2378293b61, 0xe446ef123be5bd3d, 0xfa7dbdb794bc9ed3, 0xd618a588fa0b0673,
      0xdb204cf9f595ea9c, 0xa6074ba806cf9cbd, 0x6643afdfd4175a21, 0xb5c2971388167e07, 0x8c5bcc95f0582d3e,
      0x399da486ec653582, 0x592e2335c412c9b5, 0x06a65cf5156517f6, 0x4995f757954cc220, 0x57a6d645334c222f,
      0x44b4bdd84b6765b9, 0x642f4d8c7bb43e6c, 0x409326f98531c813, 0x698e7b07a27b84fe, 0xc4ab00765191b99f,
      0xf27e5f049ccca7c8, 0x63920fca6f617d58, 0x19ed6952e0526190, 0xd264d45863a51978, 0xfec8543056257db0,
      0xc7ae8d5cf29dd5b1, 0x3e9ee5b9fb78ec41, 0x0cc16e762d7c2bed, 0x1a86e77f324d0e41, 0xaf9862c6e861aca8,
      0x91a9436e81c0bc9f, 0x14abfa46dead7c90, 0xeb29489b557c4163, 0x7f574d667ff2b2f9, 0xf3544d6d54c8eadc,
      0xd2459c12ab898764, 0x24d95949288022f5, 0x81465737ab2b1d51, 0x30e9e49400979c81, 0x859d6ed426ac910a,
      0x1350db5ac74842ca, 0x9db3c884379c8e97, 0x17facf88c2000e97, 0xae5ebb329dd2d9b3, 0x81a473df956f248f,
      0xae0b848dc0817bae, 0xf961f5bf08a5f0d3, 0xcb55a3c03aa4c037, 0xf083541e45138896, 0x7f491fe5e4dc8656,
      0x6552d5813fde2c9d, 0x3e86478508cb7889, 0x7ccb146e66b128dc, 0xb733711837af85e5, 0xa205286e4d0b10a5,
      0xeae8d6dc04122436, 0x9904e7fa20af667f, 0x66d2fa59fc56f5e4, 0xf96eb2916add0f8d, 0xcae412afc70a5435,
      0x2d0fa99d31c16eae, 0x570c059fef8dbe2d, 0xcbbcfa94b8411410, 0x84ba05eecb3ba9f0, 0xed6191adc4c9aa13,
      0x1c41ae2800bfa6de, 0x3871d301ec0cec74, 0x71aeb215128f7e00, 0x046e0c7f7067b7a7, 0x370c042934fa9a20,
      0x428991ee3077cd1c, 0x4cbc2d2aa0bebdfc, 0xc39e41af3854f49e, 0x760ff44a83bcdd2c, 0x62e50db58db3985d,
      0xd49c273296e1195d, 0x139c7371f99996e7, 0x79a61dff7a895c3c, 0xb6ac1361307226d4, 0x8c5ee5e5227bc703};
  uint8_t m[13] = {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55};
  uint64_t y[100];

  vmerge_vim(100, x, m, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != (get_bit(m, i) == 0 ? x[i] : 1)) {
      return 1;
    }
  }

  return 0;
}
