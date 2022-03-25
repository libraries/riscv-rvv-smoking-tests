#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void vmsne_vx(size_t n, const uint64_t x[], const uint64_t y, uint8_t z[]);

bool get_bit(const uint8_t m[], uint64_t i) {
  uint64_t off = i / 8;
  uint64_t bit = i - off * 8;
  return m[off] & (1 << bit);
}

int main() {
  uint64_t x[100] = {
      0x39f756db03091fe9, 0xe9a0c530646b7c0c, 0x201962e52119a2e3, 0xb3607d8d9eaa0aa0, 0x39f756db03091fe9,
      0x0886f9f8e63cecb0, 0x995184c4b907f721, 0xb8461f2c415de3f7, 0x39f756db03091fe9, 0x61aaf113897a59cb,
      0x191e4b7d88b0c650, 0x22a193eebb8d4faa, 0x39f756db03091fe9, 0x2a41fcc47cbaa216, 0xe0e99f032a8ed25e,
      0x39f756db03091fe9, 0x640b5840b92ad0e2, 0x43caaa9dbf18799b, 0x3914d50f710ce7ab, 0x2e2e58a68051247f,
      0x86ee3592d0ff3a63, 0x39f756db03091fe9, 0x7dceaae0a96abb1d, 0xfac1d68045d3c725, 0xb8ca7eb28a307da1,
      0xeee6592b723aed9c, 0x68c184d3c7ae27e7, 0x39f756db03091fe9, 0x0ece80adc91b1e7c, 0x4f4afb0918393d31,
      0xba09a399dfcbfd97, 0x29684de389a01d68, 0x39f756db03091fe9, 0xb4eddea391470b14, 0x34f4a35c711c93e4,
      0x219d584d6f936ac8, 0x39f756db03091fe9, 0x110ea91bce0529a2, 0x16a933a6d1b6f39c, 0xb0764f1eff9fabb9,
      0x203ff281e2347eab, 0x39f756db03091fe9, 0xca121ff9f07d1d69, 0xe1d28073b7c25f52, 0xe905f5351de1a3ce,
      0xec03466dadb6d0b2, 0xe840bcb2ebca1fd0, 0x39f756db03091fe9, 0xdbe4328af2e865ff, 0xbfe249adfbbb1d10,
      0x44185be2b670f978, 0xb9fbb4e4ebabbd01, 0x813adf80836069c8, 0x39f756db03091fe9, 0x572f73f52cfecc06,
      0x89fabd0f67c529d0, 0xf9622c0b7ee5fa67, 0x0d8f2bbd0a512491, 0xc0b0c58f5143f6a6, 0x39f756db03091fe9,
      0x812decace2735d9f, 0xd1fcf54434990c6e, 0x37412cba9e9c8d45, 0x39f756db03091fe9, 0xed01168d18b11ffd,
      0xa404bc3557fe89eb, 0x02680b608b796aa3, 0x39f756db03091fe9, 0xcd51bfe609110633, 0x62d6979558ceec0d,
      0x08fc2f2877512bb4, 0x39f756db03091fe9, 0x816e41637a712775, 0xe0d43e7000a0da40, 0xd33c2998fb4d6f4e,
      0x39f756db03091fe9, 0x6566a6aa68923e2a, 0x0a4bbe5dcd14a07a, 0x0244547b08dfff34, 0x230f2faa96834264,
      0xcab68cfc8498a70b, 0x39f756db03091fe9, 0xb4cb7ee225be8d5f, 0xa99f48b1dd98cc3b, 0x97ea29a834183939,
      0x373d54cbb5d5fffe, 0xc4a18fdbf4e18afd, 0x39f756db03091fe9, 0x9350608f8c95f61e, 0xc5073aeb1733071e,
      0x9523fd90b09b79bb, 0x5ce74efc169d3269, 0x9ea561b4045ea72d, 0x39f756db03091fe9, 0x1379b5c7c7990849,
      0x3a4227bc38030dcd, 0xabaa272a55ff41cb, 0x89c7773ae19195c6, 0x39f756db03091fe9, 0x39f756db03091fe9};
  uint64_t y = 0x39f756db03091fe9;
  uint8_t z[13];

  vmsne_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (get_bit(z, i) != (x[i] != y)) {
      return 1;
    }
  }

  return 0;
}
