#include <stddef.h>
#include <stdint.h>

void vvaddint256(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[2][4] = {{0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004}, {0x1234567812345678, 0x1234567812345678, 0x1234567812345678, 0x1234567812345678}};
  uint64_t y[2][4] = {{0xfffffffffffffffe, 0xfffffffffffffffd, 0xfffffffffffffffc, 0xfffffffffffffffb}, {0x8765432187654321, 0x8765432187654321, 0x8765432187654321, 0x8765432187654321}};
  uint64_t z[2][4];
  vvaddint256(2, x, y, z);

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
  if (z[1][0] != 0x9999999999999999) {
    return 1;
  }
  if (z[1][1] != 0x9999999999999999) {
    return 1;
  }
  if (z[1][2] != 0x9999999999999999) {
    return 1;
  }
  if (z[1][3] != 0x9999999999999999) {
    return 1;
  }
  return 0;
}
