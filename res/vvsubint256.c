#include <stddef.h>
#include <stdint.h>

void vvsubint256(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[1][4] = {{0x1234567812345678, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}};
  uint64_t y[1][4] = {{0x1234567812345670, 0xffffffffffffffff, 0xffffffffffffffff, 0x0000000000000000}};
  uint64_t z[1][4];
  vvsubint256(1, x, y, z);

  if (z[0][0] != 0x0000000000000008) {
    return 1;
  }
  if (z[0][1] != 0x0000000000000000) {
    return 1;
  }
  if (z[0][2] != 0x0000000000000000) {
    return 1;
  }
  if (z[0][3] != 0xffffffffffffffff) {
    return 1;
  }
  return 0;
}
