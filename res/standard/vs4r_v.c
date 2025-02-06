#include <stddef.h>
#include <stdint.h>

void vs4r_v(uint64_t size, uint8_t x[]);

int main() {
  uint8_t x[1024] = {};

  vs4r_v(1024, x);

  for (int i = 0; i < 1024; i++) {
    if (x[i] != 1) {
      return 1;
    }
  }

  return 0;
}
