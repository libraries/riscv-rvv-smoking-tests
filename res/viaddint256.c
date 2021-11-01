#include <stddef.h>
#include <stdint.h>

void viaddint256(size_t n, const uint64_t x[][4], uint64_t y[][4]);

int main() {
  uint64_t x[2][4] = {
    {0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
    {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}
  };
  uint64_t y[2][4];
  uint64_t e[2][4] = {
    {0x0000000000000002, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
    {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}
  };
  viaddint256(2, x, y);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
