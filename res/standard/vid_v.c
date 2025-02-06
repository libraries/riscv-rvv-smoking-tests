#include <stddef.h>
#include <stdint.h>

void vid_v(size_t n, uint8_t m, uint8_t x[]);

int main() {
  uint8_t x[8] = {};

  vid_v(8, 0x55, x);

  for (int i = 0; i < 8; i++) {
    if (i % 2 == 0) {
      if (x[i] != i) {
        return 1;
      }
    } else {
      if (x[i] != 0) {
        return 1;
      }
    }
  }

  return 0;
}
