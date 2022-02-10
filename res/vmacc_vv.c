#include <stddef.h>
#include <stdint.h>

void vmacc_vv(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[1][4] = {{0x0000000000000040, 0x0000000000000080, 0x0000000000002000, 0x0000000000010000}};
  uint64_t y[1][4] = {{0x0000000000000001, 0xffffffffffffffff, 0x8000000000000000, 0x0000000000000004}};
  uint64_t z[1][4] = {{0x0000000000400000, 0x0000000001000000, 0x0000000100000000, 0x0000008000000000}};
  uint64_t e[1][4] = {{0x0000000000400040, 0x0000000001000040, 0x0000000100001fc0, 0x000000800000e1a0}};

  vmacc_vv(1, x, y, z);

  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
