#include <stddef.h>
#include <stdint.h>

void vrgather_vi(size_t n, const uint32_t x[], uint32_t y[]);

int main() {
  uint32_t x[4] = {0x01, 0x02, 0x03, 0x04};
  uint32_t y[4] = {};

  vrgather_vi(4, x, y);

  for (int i = 0; i < 4; i++) {
    if (y[i] != 0x02) {
      return 1;
    }
  }

  return 0;
}
