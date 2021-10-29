#include <stddef.h>
#include <stdint.h>

void viaddint256(size_t n, const uint64_t x[][4], uint64_t y[][4]);

int main() {
  uint64_t x[2][4] = {
    {0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
    {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}
  };
  uint64_t y[2][4];
  viaddint256(2, x, y);

  if (y[0][0] != 0x0000000000000000) {
    return 1;
  }
  if (y[0][1] != 0x0000000000000002) {
    return 1;
  }
  if (y[0][2] != 0x0000000000000003) {
    return 1;
  }
  if (y[0][3] != 0x0000000000000004) {
    return 1;
  }
  if (y[1][0] != 0xfffffffffffffffd) {
    return 1;
  }
  if (y[1][1] != 0xffffffffffffffff) {
    return 1;
  }
  if (y[1][2] != 0xffffffffffffffff) {
    return 1;
  }
  if (y[1][3] != 0xffffffffffffffff) {
    return 1;
  }
  return 0;
}
