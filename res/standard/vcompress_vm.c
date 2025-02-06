#include <stddef.h>
#include <stdint.h>

void vcompress_vm(size_t n, const uint32_t x[], const uint32_t y, uint32_t z[]);

int main() {
  uint32_t x[4] = {0x01, 0x02, 0x03, 0x04};
  uint32_t y = 0b1110;
  uint32_t z[4] = {0x05, 0x06, 0x07, 0x08};
  uint32_t e[4] = {0x02, 0x03, 0x04, 0x08};

  vcompress_vm(4, x, y, z);

  for (int i = 0; i < 4; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
