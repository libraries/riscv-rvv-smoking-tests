#include <stddef.h>
#include <stdint.h>

void vadd_vv_32(size_t n, const uint32_t x[], const uint32_t y[], uint32_t z[]);

int main() {
  int x[100] = {};
  int y[100] = {};
  for (int i = 0; i < 100; i++) {
    x[i] = i;
    y[i] = 99 - i;
  }
  int z[100];

  vadd_vv_32(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != 99) {
      return 1;
    }
  }
  return 0;
}
