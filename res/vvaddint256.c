#include <stddef.h>
#include <stdint.h>

void vvaddint256(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[1][4] = {{0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004}};
  uint64_t y[1][4] = {{0xfffffffffffffffe, 0xfffffffffffffffd, 0xfffffffffffffffc, 0xfffffffffffffffb}};
  uint64_t z[1][4];
  vvaddint256(1, x, y, z);

  if (z[0][0] != 0xffffffffffffffff) {
    return 1;
  }
  if (z[0][1] != 0xffffffffffffffff) {
    return 1;
  }
  if (z[0][2] != 0xffffffffffffffff) {
    return 1;
  }
  if (z[0][3] != 0xffffffffffffffff) {
    return 1;
  }
  return 0;
}
