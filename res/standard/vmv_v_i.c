#include <stddef.h>
#include <stdint.h>

void vmv_v_i(size_t n, uint64_t x[]);

int main() {
  uint64_t x[100];

  vmv_v_i(100, x);

  for (int i = 0; i < 100; i++) {
    if (x[i] != 1) {
      return 1;
    }
  }

  return 0;
}
