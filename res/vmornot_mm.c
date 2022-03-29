#include <stddef.h>
#include <stdint.h>

void vmornot_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0xcd, 0x27, 0xd9, 0xfc, 0xd2, 0xc4, 0x64, 0x97, 0x9b, 0xb6, 0x34, 0x49};
  uint8_t y[12] = {0xe6, 0x85, 0x48, 0x59, 0xd6, 0x64, 0xe3, 0x32, 0x8d, 0x7a, 0xb4, 0xb0};
  uint8_t z[12];

  vmornot_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    uint8_t e = x[i] | (~y[i]);
    if (z[i] != e) {
      return 1;
    }
  }

  return 0;
}
