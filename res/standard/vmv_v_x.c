#include <stddef.h>
#include <stdint.h>

void vmv_v_x(size_t n, const uint64_t x, uint64_t y[]);

int main() {
  uint64_t x = 0xf2bb496f10257875;
  uint64_t y[100];

  vmv_v_x(100, x, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != x) {
      return 1;
    }
  }

  return 0;
}
