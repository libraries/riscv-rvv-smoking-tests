#include <stdio.h>

void vvaddint32(size_t n, const int*x, const int*y, int*z);

int main() {
  int x[100] = {};
  int y[100] = {};
  for (int i = 0; i < 100; i++) {
    x[i] = i;
    y[i] = 99 - i;
  }
  int z[100];
  vvaddint32(100, x, y, z);

  int s = 0;
  for (int i = 0; i < 100; i++) {
    s += z[i];
  }
  if (s != 9900) {
    return 1;
  }
  return 0;
}
