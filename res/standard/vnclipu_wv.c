#include <stddef.h>
#include <stdint.h>

void vnclipu_wv(size_t n, const uint64_t x[], const uint32_t y[], uint32_t z[]);

#define int_rounding_rdn(x, shamt) ((x) >> (shamt))
#define int_rounding_rnu(x, shamt) (((x) + ((uint64_t)1 << (shamt) >> 1)) >> (shamt))

int main() {
  uint64_t x[100] = {
      0x46bdafd6fd2ed0df, 0x8feb7d31d026268d, 0x4d7217ae837a01e8, 0x3c90eabec9370731, 0xbc875e3b350884a8,
      0x9d77c14810844229, 0x3af4b3e49ef33fb4, 0x470258e84d9c9c2a, 0xec6ba47f6dc135e5, 0xf0d3c9911495fc67,
      0x46dd34405191d5e4, 0xb4ae4c83a364685a, 0x404ded8eed030f31, 0x0148e7d2166eb70e, 0x9aa3823c43add118,
      0x60271b7397aab303, 0xf724cb262bfc8b85, 0xb2db626a32384af9, 0x5664bdf8928a4c95, 0xef574a9ebc870d58,
      0x709408a0074b4d53, 0xc11db8a89bf004d2, 0xbb41926b1a4a2b9d, 0x9f060b5acfde970e, 0x1cf91e61f2eb2437,
      0xae76803720e91d84, 0xb73917bbb3d2503b, 0xc5e4afa3e1303fe9, 0x019559e5303ddc30, 0x0c573bda6b1d4071,
      0x9f6e673099873949, 0x91e313ea8e1ee3c8, 0xa4ccc6e62bfe276c, 0x2593f65992ee0aaa, 0x359e401e78f69b49,
      0xace1e8660c5dbe20, 0xe98d499ab8787232, 0xf250c5ef37ac2a47, 0x6d32d3befa82aed6, 0xf043f5d9ca58d367,
      0xd1757b18edcf9c60, 0x86b1224af3a81be8, 0x9165bd25fdc88546, 0x4f64ec0da9e28419, 0xfc8e7fab83b6ab94,
      0x60ff91eccc4a7701, 0xd26374966f45dd87, 0xe35d123367bdafc7, 0x7633730c34490dff, 0x85115c76df487e51,
      0xdd01eccf1e51d00d, 0xda8d63f33e3d9477, 0xd49a2d2041eb87c2, 0x5a2440b748918040, 0x861aaf0c0f1809f7,
      0x24084ac3110334dc, 0xb415e05e97e6a280, 0x0323b7d120668577, 0xd453eb2a411e17d7, 0x0d24dd2e8b059b2b,
      0x92c9ab749b3e1395, 0x4157f42f4b25811f, 0xd9d40cb7cdc1cbd3, 0x4d3e02a3b3b88683, 0xc290fec6058984bd,
      0x3a63a2ade9eeab7f, 0xf66aed9ba391ac75, 0x58d4be850eede40d, 0x3ee251ed0b37ec51, 0x61eb9a68f72d1b02,
      0x4bd105c3e7cc86b9, 0x4167d012f865a9c8, 0x1e84ac090e687fb4, 0xe8e6cf5162ebbc03, 0xa796ad268b58ba9d,
      0x3bc8b1dc9aaf9462, 0xc4b40bdb4812ae9b, 0x52acd8bbdf72992e, 0x6e10a4547f21c0d3, 0x4e2e7c10a3b56f6b,
      0x1f7448f57f9b1584, 0xe8092f520c6814be, 0xd9fe71acd197c247, 0xf424584f36b5ca01, 0x6744dcce7705aa38,
      0xc1296dc785bb7540, 0xfd80fec785ad3e6f, 0x640239d268ac02d0, 0xd24ee2d739e606d9, 0x6e56e6da88a51c35,
      0xb82eb8b57f0ac349, 0x9cdf9a1c4255ac1f, 0x00575a964af4dde4, 0xf8882ad67e182476, 0x33b9fa0206e2a267,
      0xc9d6f03ad96ab581, 0xc1a664b8b89b8c88, 0x941b1dc6f3f40946, 0xf432dfee7deb32ed, 0x754d03def65dc0b8};
  uint32_t y[100] = {0xbafd5e87, 0xfaaa6f3a, 0x3e05a60c, 0xbca783cd, 0xbfef4415, 0xc1d903cb, 0x3760ca4e, 0x9f5cfb95,
                     0x3ab4f879, 0x3e5fda25, 0x57f4cb5c, 0xa3dc6126, 0xa17dc23a, 0xec2977ba, 0x381f009d, 0x9c3dbea2,
                     0xd78f5e42, 0x77920441, 0x21b2e1a6, 0xdf2d80bd, 0x882385d8, 0x5e597d39, 0x4517655c, 0x19e1f541,
                     0xd69d38ab, 0xa3d1b0ff, 0x1de010ef, 0x29b8144c, 0x16bb8538, 0x122d0dac, 0x926f5bbd, 0xc12e60d7,
                     0x07707c60, 0x0dc4d87b, 0x507f2742, 0x5c6da7cc, 0x5c5331cf, 0x30687019, 0x7fc3e5c7, 0x3b860cda,
                     0x9de6d653, 0xd4b45d16, 0x0ace27ff, 0x2307a38d, 0xcceef604, 0x02db3d31, 0xa257dd42, 0xc73584b7,
                     0xa291550f, 0xf90b8549, 0xbb372b13, 0xdc16b069, 0x1cdd18b6, 0xf725dbb1, 0xd553092d, 0xd8860a8b,
                     0xe50f0c21, 0x9613376d, 0x69fc5afd, 0x4b5e0420, 0x5b260f33, 0xb0777739, 0xbc62ea51, 0x98642edc,
                     0x8b622243, 0xf4d3c70a, 0xd20d6c71, 0x69af9195, 0x1276c248, 0x4e6b0470, 0xaf5fdc0f, 0xe10f1194,
                     0xf49e54cb, 0x37e484b2, 0xe14c9d0c, 0xabed6d5b, 0xb4dd6db0, 0x622372c5, 0xaf0615be, 0xb58427ed,
                     0x6ce1739f, 0x02b8c34a, 0xeaf29b85, 0x21dbe216, 0xccd9e490, 0xdbb9bbb4, 0xa06ae8c9, 0x82e80ca5,
                     0x6b1e41f2, 0xa0a183fc, 0x78cdaaa5, 0x9c5c81a1, 0x6664e10b, 0x42340260, 0x89b70352, 0xaef6473e,
                     0x61ee81d6, 0xdfd074b4, 0x1c85f608, 0x6cc200a4};
  uint32_t z[100];

  vnclipu_wv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    uint64_t ra = int_rounding_rdn(x[i], y[i] & 63);
    uint32_t r0 = ra > 0xffffffff ? 0xffffffff : (uint32_t)ra;
    uint64_t rb = int_rounding_rnu(x[i], y[i] & 63);
    uint32_t r1 = rb > 0xffffffff ? 0xffffffff : (uint32_t)rb;
    if ((z[i] != r0) && (z[i] != r1)) {
      return 1;
    }
  }

  return 0;
}
