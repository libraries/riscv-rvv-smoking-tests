#include <stddef.h>
#include <stdint.h>

void vs1r_v(uint8_t x[]);

int main() {
  uint8_t x[256] = {};

  vs1r_v(x);

  for (int i = 0; i < 256; i++) {
    if (x[i] != 1) {
      return 1;
    }
  }

  return 0;
}
