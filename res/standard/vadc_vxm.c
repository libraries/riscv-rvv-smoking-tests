#include <stddef.h>
#include <stdint.h>

void vadc_vxm(size_t n, const uint64_t x[], const uint64_t y, const uint8_t m[], uint64_t z[]);

int main() {
  uint64_t x[100] = {
      0xd5e63ac30434cff8, 0xa2fed055679381ad, 0xd030cdc84da793a9, 0xf36b32e92f53950c, 0x2ed2be8ccc45bc68,
      0xd19050520cc9a590, 0x631d10c3d09e9ccd, 0x5f9e2f5ef787a0ed, 0xb52e6734b7ea4a92, 0xfca23e3eba67f8ce,
      0x5fdbfec6c05b7927, 0x1ec3f4d71e5d500c, 0x2aae20ae488d3fb6, 0x6eaf828cd286f8ef, 0x8fefac077e687915,
      0x3afc5e30cea475a1, 0x8fff1ce1aeff4989, 0x1a11535fd32e7a1a, 0xd862b92d6dd9d2a3, 0xf11367ce9e829290,
      0x9ef0888529f1c910, 0x805ae8c3585dbd3a, 0x004df3d05fbca1b8, 0x6e604e42e333aba3, 0x1b4227a9ce57ea98,
      0x6c2be79aada32052, 0xb6ee68c74be2e280, 0xc1fa001260205505, 0xf4005511d1a8b66f, 0x137a15de6fbbd89d,
      0x12e47a6a6dc6f1bf, 0x384312960760edea, 0xf9fb69a7757adc2a, 0x8e189ef1fef23818, 0x32f1ebf167baffc4,
      0x39fe2acd005f6080, 0x705f56f7e50e1455, 0xdb0973b1f529498c, 0x936ab15f4e764111, 0x7a8326a2c3040a25,
      0xbb675a9ce0dddeff, 0xa600d01b438fc2c9, 0x444b6cf853d73b68, 0x5435d5f981a0c8c1, 0xab7602b7cdd0b0cf,
      0x2242c55440f30eb6, 0x434d73124693f616, 0x5cf386c10dbfdec6, 0x12b22b8a016c8e81, 0xaf47cb7795d72c6d,
      0x5211def04ae31b2a, 0xedbe743630637545, 0x2f1f30477d6b25fa, 0xd9fa84c0e49f6350, 0x6e365c86b1c4dbad,
      0xcfeb53e03abeeb2b, 0x7006890ba17fe9e0, 0xe931304f9965e377, 0xf5d39b6426482a22, 0x81a25e8c48192712,
      0x9ef1a26084141231, 0x788cb1e30f075c81, 0x140958807061c535, 0x5db067391a0ea74e, 0xf083adcdbacc0d28,
      0xec1a7c05b21dacf8, 0xfbfe64d1ae79821c, 0x3a22d3cfd3221158, 0x66d1c89dc01faa3c, 0xfae78d9276d4c788,
      0xb653fd075880ced5, 0x4a312c6397cb7941, 0x2668c92dd6dec8a2, 0xee106ec1bee4c90c, 0x24336a34586cfa51,
      0xb9e9e27e75595677, 0xedf6e2dbfdf0674b, 0x3502ce5aff92b726, 0xa0ac2d0dff2c1c14, 0x9b8c8d5dfdd41938,
      0xbeca49b3140253a4, 0x8749e1934ffc1a0d, 0x8f205edf07c2c908, 0x3b2bb1a2f86c07da, 0x548e59c82298d2fd,
      0x5a7b1d43d8b6dbbd, 0x7c9ad25c0b41ba3a, 0xbfe8838e7ca3e312, 0xfc33783b6ae9f662, 0x0e6455a22842847b,
      0x2a7df199a3515ba6, 0x85ec0eabaca7f40e, 0x34e73ca7ab8dfebc, 0x02dee5200c5c0f87, 0xa6c34381ff962cc7,
      0x1021ffa4b38f8049, 0x6fd47bf89fabe822, 0xb4cd2729d164371c, 0xa0f1adb6caac7ffc, 0xa4e4595bbee88a11};
  uint8_t m[13] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
  uint64_t z[100];

  vadc_vxm(100, x, 15, m, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != x[i] + 16) {
      return 1;
    }
  }

  return 0;
}
