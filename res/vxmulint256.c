#include <stddef.h>
#include <stdint.h>

void vxmulint256(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[1][4] = {{0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004}};
  uint64_t y = 2;
  uint64_t z[1][4];
  uint64_t e[1][4] = {{0x0000000000000002, 0x0000000000000004, 0x0000000000000006, 0x0000000000000008}};
  vxmulint256(2, x, y, z);

  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
