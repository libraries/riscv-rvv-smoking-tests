#include <stddef.h>
#include <stdint.h>

void vxsubint256(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[2][4] = {{0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
                      {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  uint64_t y = 1;
  uint64_t z[2][4];
  uint64_t e[2][4] = {{0x0000000000000000, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
                      {0xfffffffffffffffd, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  vxsubint256(2, x, y, z);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
