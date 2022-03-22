#include <stddef.h>
#include <stdint.h>

void vl1re32_v(const uint64_t x[], uint64_t y[]);

int main() {
  uint64_t x[32] = {0x783c0a46f5072132, 0xc47449026927167a, 0xde2031c49d3b0407, 0xa0bf58c2bb7dc131, 0xf6b54641bc2fc7a0,
                    0x3d9edcf0c884961f, 0x8224b8e5832a9411, 0xbae147f1253c7366, 0x56757e5ef757f94c, 0xdf9a15d2392ba165,
                    0xdbf4243edcdfea10, 0xb53463f52d8ba5b8, 0x71d4f657c5c90347, 0x52a00909dcd72294, 0xe93d3220cff3742c,
                    0x1beda1d0cc64e4d8, 0xc44031c8135a245d, 0xa32137c512a47d75, 0xabfd58628c4256f4, 0xc4e2287fa8f5d752,
                    0x7d88d36434b9348a, 0xaca6cc8627d50f41, 0xb917fba61c52fb53, 0xb787dab4c78fe30c, 0x7ff6c5be209832de,
                    0xa2f451e2fea63b8d, 0x2ce8b2315e8baac0, 0xdd2d1da2e1a605a1, 0xd7c896af6c562940, 0x4482e1241f4f5e0f,
                    0x28975b36be96c0ed, 0xa601fc7ee7cc2b03};
  uint64_t y[32];

  vl1re32_v(x, y);

  for (int i = 0; i < 8; i++) {
    if (y[i] != x[i]) {
      return 1;
    }
  }
  for (int i = 8; i < 32; i++) {
    if (y[i] != 0) {
      return 1;
    }
  }

  return 0;
}
