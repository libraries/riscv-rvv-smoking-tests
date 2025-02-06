#include <stddef.h>
#include <stdint.h>

void vmnand_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0xfe, 0x4e, 0xf9, 0x2a, 0x99, 0x64, 0xe3, 0xca, 0xbc, 0x51, 0xc8, 0x34};
  uint8_t y[12] = {0x15, 0xef, 0xc2, 0xb3, 0x80, 0xb1, 0x0e, 0x39, 0x75, 0x14, 0xc8, 0xe9};
  uint8_t z[12];

  vmnand_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    uint8_t e = ~(x[i] & y[i]);
    if (z[i] != e) {
      return 1;
    }
  }

  return 0;
}
