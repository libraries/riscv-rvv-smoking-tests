#include <stddef.h>
#include <stdint.h>

void vslidedown_vi(size_t n, const uint32_t x[], uint32_t z[]);

int main() {
  uint32_t x[4] = {0x01, 0x02, 0x03, 0x04};
  uint32_t y[4] = {};
  uint32_t e[4] = {0x02, 0x03, 0x04, 0x00};

  vslidedown_vi(4, x, y);

  for (int i = 0; i < 4; i++) {
    if (y[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
