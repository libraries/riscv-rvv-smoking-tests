#include <stddef.h>
#include <stdint.h>

void viota_m(size_t n, const uint8_t x, const uint8_t m, uint8_t y[]);

int main() {
  uint8_t x = 0b10101010;
  uint8_t m = 0x0f;
  uint8_t y[8] = {};
  uint8_t e[8] = {0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00};

  viota_m(8, x, m, y);

  for (int i = 0; i < 8; i++) {
    if (y[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
