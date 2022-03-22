#include <stddef.h>
#include <stdint.h>

void vs2r_v(uint8_t x[]);

int main() {
  uint8_t x[512] = {};

  vs2r_v(x);

  for (int i = 0; i < 256; i++) {
    if (x[i] != 2) {
      return 1;
    }
  }
  for (int i = 256; i < 512; i++) {
    if (x[i] != 3) {
      return 1;
    }
  }

  return 0;
}
