#include <stddef.h>
#include <stdint.h>

void virsubint256(size_t n, const uint64_t x[][4], uint64_t y[][4]);

int main() {
  uint64_t x[1][4] = {{0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};
  uint64_t y[1][4];
  uint64_t e[1][4] = {{0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  virsubint256(1, x, y);

  for (int i = 0; i < 1; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }
  return 0;
}
