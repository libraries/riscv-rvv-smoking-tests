#include <stddef.h>
#include <stdint.h>

void vrgather_vv(size_t n, const uint32_t x[], const uint32_t y[], uint32_t z[]);

int main() {
  uint32_t x[4] = {0x01, 0x02, 0x03, 0x04};
  uint32_t y[4] = {0x01, 0x02, 0x03, 0x00};
  uint32_t z[4] = {};
  uint32_t e[4] = {0x02, 0x03, 0x04, 0x01};

  vrgather_vv(4, x, y, z);

  for (int i = 0; i < 4; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
