#include <stddef.h>
#include <stdint.h>

void vmandnot_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0x7e, 0x66, 0xad, 0x1f, 0xff, 0xbd, 0xc8, 0xe5, 0xe1, 0x0c, 0x8f, 0x14};
  uint8_t y[12] = {0x82, 0xd7, 0xd1, 0xb3, 0x13, 0x3b, 0x26, 0x04, 0xe5, 0x87, 0x26, 0x85};
  uint8_t z[12];

  vmandnot_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    if (z[i] != (x[i] & (~y[i]))) {
      return 1;
    }
  }

  return 0;
}
