#include <stddef.h>
#include <stdint.h>

void vslide1down_vx(size_t n, const uint32_t x[], const uint64_t y, uint32_t z[]);

int main() {
  uint32_t x[4] = {0x01, 0x02, 0x03, 0x04};
  uint32_t y[4] = {};
  uint32_t e[4] = {0x02, 0x03, 0x04, 0x05};

  vslide1down_vx(4, x, 5, y);

  for (int i = 0; i < 4; i++) {
    if (y[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
