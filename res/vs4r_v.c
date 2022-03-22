#include <stddef.h>
#include <stdint.h>

void vs4r_v(uint8_t x[]);

int main() {
  uint8_t x[1024] = {};

  vs4r_v(x);

  for (int i = 0; i < 256; i++) {
    if (x[i] != 4) {
      return 1;
    }
  }
  for (int i = 256; i < 512; i++) {
    if (x[i] != 5) {
      return 1;
    }
  }
  for (int i = 512; i < 768; i++) {
    if (x[i] != 6) {
      return 1;
    }
  }
  for (int i = 768; i < 1024; i++) {
    if (x[i] != 7) {
      return 1;
    }
  }

  return 0;
}
