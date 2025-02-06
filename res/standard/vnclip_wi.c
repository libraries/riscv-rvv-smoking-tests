#include <limits.h>
#include <stddef.h>
#include <stdint.h>

void vnclip_wi(size_t n, const uint64_t x[], uint32_t y[]);

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
  uint32_t y[100];

  vnclip_wi(100, x, y);

  for (int i = 0; i < 100; i++) {
    int64_t ra = int_rounding_rdn((__int128)(int64_t)x[i], 15);
    int64_t r0 = ra > INT_MAX ? INT_MAX : ra < INT_MIN ? INT_MIN : ra;
    int64_t rb = int_rounding_rnu((__int128)(int64_t)x[i], 15);
    int64_t r1 = rb > INT_MAX ? INT_MAX : rb < INT_MIN ? INT_MIN : rb;
    if ((y[i] != (uint32_t)r0) && (y[i] != (uint32_t)r1)) {
      return 1;
    }
  }

  return 0;
}
