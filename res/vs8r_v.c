#include <stddef.h>
#include <stdint.h>

void vs8r_v(uint8_t x[]);

int main() {
  uint8_t x[2048] = {};

  vs8r_v(x);

  for (int i = 0; i < 256; i++) {
    if (x[i] != 8) {
      return 1;
    }
  }
  for (int i = 256; i < 512; i++) {
    if (x[i] != 9) {
      return 1;
    }
  }
  for (int i = 512; i < 768; i++) {
    if (x[i] != 10) {
      return 1;
    }
  }
  for (int i = 768; i < 1024; i++) {
    if (x[i] != 11) {
      return 1;
    }
  }
  for (int i = 1024; i < 1280; i++) {
    if (x[i] != 12) {
      return 1;
    }
  }
  for (int i = 1280; i < 1536; i++) {
    if (x[i] != 13) {
      return 1;
    }
  }
  for (int i = 1536; i < 1792; i++) {
    if (x[i] != 14) {
      return 1;
    }
  }
  for (int i = 1792; i < 2048; i++) {
    if (x[i] != 15) {
      return 1;
    }
  }

  return 0;
}
