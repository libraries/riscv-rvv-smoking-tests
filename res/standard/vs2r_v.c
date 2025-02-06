#include <stddef.h>
#include <stdint.h>

void vs2r_v(uint64_t size, uint8_t x[]);

int main() {
  uint8_t x[512] = {};

  vs2r_v(512, x);

  for (int i = 0; i < 512; i++) {
    if (x[i] != 1) {
      return 1;
    }
  }

  return 0;
}
