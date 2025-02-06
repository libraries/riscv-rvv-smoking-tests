#include <stddef.h>
#include <stdint.h>

void vmnor_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0x2c, 0x29, 0x62, 0x88, 0x76, 0xfd, 0xb9, 0xec, 0xa2, 0x18, 0x97, 0xfd};
  uint8_t y[12] = {0x6e, 0xa9, 0xef, 0x30, 0x60, 0x8f, 0xfd, 0x04, 0x9e, 0x38, 0xae, 0x1c};
  uint8_t z[12];

  vmnor_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    uint8_t e = ~(x[i] | y[i]);
    if (z[i] != e) {
      return 1;
    }
  }

  return 0;
}
