#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void vmsle_vv(size_t n, const uint64_t x[], const uint64_t y[], uint8_t z[]);

bool get_bit(const uint8_t m[], uint64_t i) {
  uint64_t off = i / 8;
  uint64_t bit = i - off * 8;
  return m[off] & (1 << bit);
}

int main() {
  uint64_t x[100] = {
      0xb0f0a4af09ebfa7b, 0xe9a0c530646b7c0c, 0x201962e52119a2e3, 0xb3607d8d9eaa0aa0, 0x0070e5e36d3353d3,
      0x0886f9f8e63cecb0, 0x995184c4b907f721, 0xb8461f2c415de3f7, 0x7554148c6488c839, 0x61aaf113897a59cb,
      0x191e4b7d88b0c650, 0x22a193eebb8d4faa, 0xb9fd0cf786f80331, 0x2a41fcc47cbaa216, 0xe0e99f032a8ed25e,
      0xd7e0e2bbdda071fe, 0x640b5840b92ad0e2, 0x43caaa9dbf18799b, 0x3914d50f710ce7ab, 0x2e2e58a68051247f,
      0x86ee3592d0ff3a63, 0x6270276204f41200, 0x7dceaae0a96abb1d, 0xfac1d68045d3c725, 0xb8ca7eb28a307da1,
      0xeee6592b723aed9c, 0x68c184d3c7ae27e7, 0xfaa4b16c6f9b93ab, 0x0ece80adc91b1e7c, 0x4f4afb0918393d31,
      0xba09a399dfcbfd97, 0x29684de389a01d68, 0xa08c9bb406dfa1f5, 0xb4eddea391470b14, 0x34f4a35c711c93e4,
      0x219d584d6f936ac8, 0x2e0ddbc66fde1d3e, 0x110ea91bce0529a2, 0x16a933a6d1b6f39c, 0xb0764f1eff9fabb9,
      0x203ff281e2347eab, 0xf96575f2a0881fa4, 0xca121ff9f07d1d69, 0xe1d28073b7c25f52, 0xe905f5351de1a3ce,
      0xec03466dadb6d0b2, 0xe840bcb2ebca1fd0, 0xfd0b398ba843336c, 0xdbe4328af2e865ff, 0xbfe249adfbbb1d10,
      0x44185be2b670f978, 0xb9fbb4e4ebabbd01, 0x813adf80836069c8, 0xe650ef1374551f35, 0x572f73f52cfecc06,
      0x89fabd0f67c529d0, 0xf9622c0b7ee5fa67, 0x0d8f2bbd0a512491, 0xc0b0c58f5143f6a6, 0xf668280367ae5d8f,
      0x812decace2735d9f, 0xd1fcf54434990c6e, 0x37412cba9e9c8d45, 0x84be744be331aaca, 0xed01168d18b11ffd,
      0xa404bc3557fe89eb, 0x02680b608b796aa3, 0xebc1de9d3f0d3e43, 0xcd51bfe609110633, 0x62d6979558ceec0d,
      0x08fc2f2877512bb4, 0x74e9759a4b433025, 0x816e41637a712775, 0xe0d43e7000a0da40, 0xd33c2998fb4d6f4e,
      0x6543fb7b92c54798, 0x6566a6aa68923e2a, 0x0a4bbe5dcd14a07a, 0x0244547b08dfff34, 0x230f2faa96834264,
      0xcab68cfc8498a70b, 0x4e6148747f86fcea, 0xb4cb7ee225be8d5f, 0xa99f48b1dd98cc3b, 0x97ea29a834183939,
      0x373d54cbb5d5fffe, 0xc4a18fdbf4e18afd, 0x1a7c5e93d72daee9, 0x9350608f8c95f61e, 0xc5073aeb1733071e,
      0x9523fd90b09b79bb, 0x5ce74efc169d3269, 0x9ea561b4045ea72d, 0x2433c074ca407dd9, 0x1379b5c7c7990849,
      0x3a4227bc38030dcd, 0xabaa272a55ff41cb, 0x89c7773ae19195c6, 0x39f756db03091fe9, 0xd0eb371b3bbeb9e3};
  uint64_t y[100] = {
      0x0cd6c27bb8c0a18b, 0xce51bdcb939b9d98, 0xa5e5f16d0f7096a4, 0xfbdf9636627c8028, 0xfc9561c918fc0db6,
      0x406348f6c4d476cd, 0x569fa52298a32d5b, 0xa7e9861671d281a1, 0xa5e19428fa7d3886, 0x30503d1f89931fbf,
      0xf8d39263d86fe98d, 0xbf0b7d133874d998, 0x022fcd1394127850, 0x2ee9e001d4464d23, 0x3f23f12b22d7a698,
      0xc017a88531c7f6b9, 0x1bfcdef56841397f, 0x8218e99e10882c84, 0x51d3e01e38f31c65, 0x70917cd83786c0b0,
      0x6f26317a006f29dd, 0xa61774ad58f4f5ac, 0x939b4adaf1313688, 0x86b7f422579b9404, 0xc5ab0b61d7fd4154,
      0x8b1736a19396125f, 0x4cbc1a576da82fee, 0x0eb70e40120a7447, 0x20c3875dad301dfe, 0x52e1a1a4c0bae8db,
      0x8da37e592168b0a1, 0xf49f543096a7a54a, 0xedb3b174300a93ae, 0x3c6361b237be8d3e, 0x10d49ebc410db0aa,
      0x969b615db78004a3, 0xff3cb1adc2710878, 0x97816ae037d8c8b3, 0xd012c19af67b91d0, 0xf1c9c8fbc43c823f,
      0x4a506d7b36d5ef55, 0xd096e0b972959998, 0xab68309de9e6c02a, 0x1ca58f9c3b6d73e7, 0xe964025ae216d23d,
      0xd17dd2541522dd6d, 0xd79d08f14b3b2340, 0xfac5be9f0bcfcf13, 0x1c2f8ddf033558cc, 0x5dc28263283fbe07,
      0xdf138f014d6c6b52, 0xf5279d399d56a1b0, 0xc7f3f4e929050b28, 0x2afc1d45095aabce, 0xf31bf7b6d35865c4,
      0x6a640597b39a99ef, 0x4e6b46c1bb7189c6, 0xe327b8448e66af85, 0xfd636314a589b890, 0x272383de2ad74d7d,
      0xd75e04301bbf08f8, 0xdd22c2252f081bda, 0x8b4131ff4f7b9abe, 0x35189d0d7a858eda, 0x1eec874c42719eb4,
      0xeb5cc17231feaac7, 0xcedc01bc230f1a9f, 0xf1a50c3b63d8fcc7, 0x04ae2cd8978107f9, 0x820eb476813697b0,
      0xb8b1b94a23a7f075, 0x6cee425836b3d849, 0x946309c664062784, 0x973770e4f2284d23, 0xa3fe7eb970832952,
      0xc4894eb320a7f3a7, 0x6db0d2e1a0848ad6, 0x9b8bab4f96669fad, 0xbd937146f2c9fb3c, 0x39d97442b8d0edaf,
      0xc174e059c73b0b67, 0x87ff1173d9f75fdc, 0xa5b46d45f36036cb, 0xcc9d7d3705816113, 0x3a17be7492914245,
      0x258072a72e3d5012, 0x3fd41b60e302d056, 0xc001d1780e358660, 0x9c7ebb2d424cc258, 0xd2e3b3f484c63300,
      0x341dab22f17c7bf8, 0xe8611a4fae2f2974, 0x43d1f0e40cdc00e4, 0x2433c074ca407dd9, 0xe0835fd4e5185577,
      0x47177816653185fb, 0x2f660cf95ca61d31, 0x78eb7d1053f73d2a, 0x916298e1a4bc788d, 0xb0b6ef4db6780c97};
  uint8_t z[13];

  vmsle_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (get_bit(z, i) != ((int64_t)x[i] <= (int64_t)y[i])) {
      return 1;
    }
  }

  return 0;
}
