#include <stddef.h>
#include <stdint.h>

void vxsubint256(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[2][4] = {
    {0x0000000000000001, 0x0000000000000002, 0x0000000000000003, 0x0000000000000004},
    {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff}
  };
  uint64_t y = 1;
  uint64_t z[2][4];
  vxsubint256(2, x, y, z);

  if (z[0][0] != 0x0000000000000000) {
    return 1;
  }
  if (z[0][1] != 0x0000000000000002) {
    return 1;
  }
  if (z[0][2] != 0x0000000000000003) {
    return 1;
  }
  if (z[0][3] != 0x0000000000000004) {
    return 1;
  }
  if (z[1][0] != 0xfffffffffffffffd) {
    return 1;
  }
  if (z[1][1] != 0xffffffffffffffff) {
    return 1;
  }
  if (z[1][2] != 0xffffffffffffffff) {
    return 1;
  }
  if (z[1][3] != 0xffffffffffffffff) {
    return 1;
  }
  return 0;
}
