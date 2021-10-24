#include <stddef.h>
#include <stdint.h>

void vvaddint256(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[1][4] = {{0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};
  uint64_t y[1][4] = {{0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  uint64_t z[1][4];
  vvaddint256(1, x, y, z);

  uint64_t s = 0;
  for (int i = 0; i < 4; i++) {
    s += z[0][i];
  }
  if (s != 0) {
    return 1;
  }
  return 0;
}
