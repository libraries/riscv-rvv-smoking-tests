#include <stddef.h>
#include <stdint.h>

void vs8r_v(uint64_t size, uint8_t x[]);

int main() {
  uint8_t x[2048] = {};

  vs8r_v(2048, x);

  for (int i = 0; i < 2048; i++) {
    if (x[i] != 1) {
      return 1;
    }
  }

  return 0;
}
