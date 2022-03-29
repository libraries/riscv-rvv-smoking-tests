#include <stddef.h>
#include <stdint.h>

void vwredsum_vs(const uint64_t size, const uint32_t x[], const uint64_t y[], uint64_t z[]);

int main() {
  uint32_t x[8] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, -111};
  uint64_t y[8] = {0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
  uint64_t z[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

  vwredsum_vs(8, x, y, z);

  int64_t a = y[0];
  for (int i = 0; i < 8; i++) {
    a += (int64_t)(int32_t)x[i];
  };
  if (z[0] != (uint64_t)a) {
    return 1;
  }
  for (int i = 1; i < 8; i++) {
    if (z[i] != 0xff) {
      return 1;
    }
  }
  return 0;
}
