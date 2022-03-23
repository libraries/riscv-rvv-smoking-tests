#include <stddef.h>
#include <stdint.h>

void vnsra_wv(size_t n, const uint64_t x[], const uint32_t y[], uint32_t z[]);

int main() {
  uint64_t x[100] = {
      0x98b5bebdc4846305, 0xbeb88777eab37f39, 0x7402695c0cde8556, 0x312ff8195636bf5a, 0xc03e5a0edd142fca,
      0xb64e507a6dbd4e36, 0x850327931c080f90, 0xa606a818de8c3d1b, 0x9cdd9281fd30d2cc, 0xfa7bbc7726569cb8,
      0x22fcca88f4888d3c, 0x2c763d9c5af73672, 0x59f600c1de8ed1e6, 0xb6ab087bf15a27fd, 0xc5293caadd247384,
      0x7e704f366217d252, 0x0f9597a0a8e7072a, 0xd70b5d13aef42ac7, 0xb633b644dc685928, 0x97d49a1cf30fb95c,
      0x4573d52ab1f0f82d, 0x869fe058a3e558c4, 0x594594a6f0aca39d, 0x06f86bf066da9eea, 0x063be377843f399e,
      0x29cf4975167fb67d, 0xcec7c4c8885eb53a, 0xbd3469c83004709b, 0x594cee8d77a54c54, 0xb6a02abd8fe5187f,
      0xdadbec0065b9c1cc, 0x750dca7cd3f79b85, 0x3b32ae7056f79fbb, 0x03dd1dbfedba3171, 0xa36493c8318bda78,
      0xe6fb2b321a1cabd9, 0x82cd1f0acaa1066c, 0x8d654d68087e00f0, 0x4cc25431c60f11bf, 0x37953685bf1de3ce,
      0xbc0aa3a85fccb413, 0x427d596078e08246, 0xe18689d9c3545e70, 0xbc1bece36e1c7454, 0x377f8ae91198d5ff,
      0x94a97b8beb8d12d6, 0x56198090e989dfc2, 0x48591113038f9a4c, 0xfac7f8679aaa8511, 0x54153fdc255b3d56,
      0x482dea1edfb0b4a9, 0x2cad1e30c5f699fb, 0xcf85d670fc663fc6, 0x34ceb28e4e7d0c7e, 0x0aa2f8d93aa835f5,
      0xfdde6c150f0b2b66, 0x8920c894a153f7d1, 0x05e5381ebc13caff, 0xfa808f5ae2238152, 0x8d3069e72f8f009a,
      0x2d74693e43df3112, 0x2491c0cfe777f62e, 0x5b5aeee87268920b, 0x30560044dcf207c6, 0x58b2808378b03719,
      0x9799264082e2808c, 0x7ce978cf6064709f, 0xd1abe6b51a9145c3, 0x69804f57697b2d72, 0xd8b13f419c7600e2,
      0x45be67c69eff4f04, 0x15e5ca2598478361, 0x209265d0342bb2a8, 0x7f091eff9bcacf49, 0x703e457435cfbb05,
      0xda033addca7a46f1, 0xae4ffbca14625847, 0x4b46e409ec37b9cd, 0x3e52df82044ed44c, 0x80db6502f65f9b44,
      0x6d65c231317e821c, 0x3c4ff0608364c5c6, 0x4537b1e921657c5b, 0xe8587c5be86a35a5, 0x0057239bbc84d7d9,
      0x5acea70242e6d4ab, 0x6bd1165cb081f10e, 0x17a1978d279e1adf, 0x6f2045f630995230, 0xc078c341bbb52a16,
      0x8daf723ca9efac4f, 0x5d3222af6b862870, 0x0d0c49c1d8b03a92, 0x55160252817be2df, 0x7dd74670d6b8e711,
      0xe83de8a35d05fd7e, 0x7702901c604a7eb2, 0xfe46f31cda4585b6, 0x41509403c700e7ed, 0xaae8211e93e7943c};
  uint32_t y[100] = {0xf339d0c9, 0x28d16769, 0x3bc9ec7a, 0x97e1779d, 0xcc0f934a, 0x4778448a, 0x9a9ae938, 0x00d399d6,
                     0x6216c227, 0x4fd079cb, 0xb8afcc6e, 0x463100cc, 0x491cbecc, 0xbd65f23b, 0x8e4853df, 0x3d31e5d0,
                     0x7cfd931b, 0x61f1199a, 0x03ea27ea, 0x828f2155, 0x2f4af6dd, 0x822964ac, 0x8f316041, 0x728a751d,
                     0xd375a98d, 0x47a8bb58, 0x3aa6c909, 0xf83f8d89, 0x65fbe1fb, 0xbb235433, 0xf4205e56, 0x91a9047c,
                     0xa7c97d9c, 0xf4d54c56, 0xd857e0ed, 0x86b0b0b2, 0x18e9c966, 0x5c1750ac, 0x3279fc92, 0x6cd031fa,
                     0xf4cd3f7a, 0x5769b317, 0xa011ee10, 0xd5727dc4, 0x5b7a16ed, 0x6e56eee5, 0x7c112a49, 0xaf26f4c4,
                     0x08d0bee3, 0x7d111291, 0x4955d64c, 0x43d8f818, 0xab038074, 0x12cdcee0, 0x1b3a4700, 0x23ea3fac,
                     0x2602d13d, 0x2c402d7b, 0xc9a3de1f, 0x38c846ae, 0xe60d8941, 0x277dd5f4, 0x7f2e3dd9, 0x33beb87c,
                     0xc56dd897, 0xb75983ea, 0x7ddfb933, 0x9ad86388, 0x70401117, 0x28e177e1, 0x201e2829, 0x5d8971ee,
                     0x4b6b0e88, 0x9e7a1b9b, 0x79f90350, 0x9771fa69, 0xc755bb86, 0x9e788b0a, 0xb64149d8, 0x78a5628e,
                     0x31b1632b, 0xfe70fcdd, 0xbe9bd0d0, 0xebd7f365, 0x25491053, 0x9751170a, 0xe6f5853e, 0x1db38a8f,
                     0x8e3d1e13, 0xdf7dbf7c, 0x1ed338da, 0x713f8353, 0x9e3f1e98, 0xad24de6c, 0xc168c96d, 0xbf0140cd,
                     0x088a2ea2, 0x7e20a25d, 0xb42e7e73, 0xa29dc4a6};
  uint32_t z[100];

  vnsra_wv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != (uint32_t)(uint64_t)((int64_t)x[i] >> (y[i] & 0x3f))) {
      return 100 + i;
    }
  }

  return 0;
}
