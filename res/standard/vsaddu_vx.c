#include <stddef.h>
#include <stdint.h>

void vsaddu_vx(size_t n, const uint64_t x[], const uint64_t y, uint64_t z[]);

int main() {
  uint64_t x[100] = {
      0x469d3c80de8b821f, 0x0d602c1216296777, 0x1f7028f04d672fcd, 0x80c3b7747030f90c, 0x956457677baa20c2,
      0x2af774e5cce84e84, 0x57d37e2a8a225b2a, 0xb52228528bcc2366, 0xa739f2bcf2535f1b, 0x815f17953eda56cd,
      0x5174c68aac30b6eb, 0xf0aded0543494b41, 0x27e8f4af8b8aa293, 0xf51e765fa2c38500, 0x0117c09d7f8812a6,
      0x3b6f948efa095b9c, 0x9880707b4cfba0d8, 0x1796454e05c61f75, 0x800a8c7ae71b1012, 0x885928c4ffa491aa,
      0xd8d30d77e59255c9, 0x534ecfca98f5bcaa, 0x7b3db5ed629137af, 0xe4741fecc5cbdecc, 0xa86ddbe72279069f,
      0xe02d55215cfa668a, 0x2a2a78c220aa97ea, 0x733225dcd4c222fb, 0x23be3ee252c5c9a5, 0x98cd91ebdf910b42,
      0xa31129e2c0b4f090, 0x52b19d76d65fb457, 0xb6c104f8f0052152, 0xbbcad8bcede5275b, 0xa346741076c6d1f6,
      0xac07453eae2e0142, 0x2e52fba194bc2f2f, 0xb8386555b7135b2d, 0xe353d3e3bec6bc9f, 0xf1887a5f2a849309,
      0xc69a89cc51141766, 0xae7993c7fb4d489c, 0x8da7277654b1f5b5, 0x3b9f8f6e7a4371a6, 0x89e6e30d5151b91b,
      0xc2508dd6ffab5ff5, 0x76e0594cf0086a8b, 0x72c7e87ba41c8056, 0xd6ecfa0536bcef1e, 0x618e0fa9471a9e3e,
      0x085e029be03d9cf9, 0xce661ebaafc64ef7, 0x9839dfe06ca7ccc6, 0x531de6c1c7d26fde, 0xcfdc3ac70cac185f,
      0x66e87158221f0242, 0xa7a2979e475e0765, 0xd6bb8efeedd843f0, 0x39fcc35ad66b2978, 0xacff983c5dba2f14,
      0x12ab8e82196c2922, 0x4b415723ccaafa46, 0xbc07ff0550167f33, 0x5f7360806e75c742, 0x7b5227eac0db669c,
      0x137edaba688fbdbf, 0x853befbacca04072, 0x69a62402aacdfcad, 0x33cae9749c8a8859, 0x17fde6ccca7647e1,
      0x1da916cdda7c56b6, 0x1e5eb59ed118b832, 0x594ab70efa775006, 0x7df958791fc937e3, 0x7f8654c02ae1c43d,
      0x6c42c2397b7da816, 0xc65115aaf917571a, 0x4c8070b837bbf2b1, 0x63ab095a9569513c, 0xd2de79d7b7e6d515,
      0xe45c54be984106bb, 0x06ccbed8d52e598a, 0xc7af8b7f1aac43d1, 0x31d8a7f2e9a24f33, 0x5c1f698cf307f217,
      0xf766fb2f1972ffac, 0xe6a49cd1a6c20d4c, 0xc601a53e10f9d275, 0x533cb3ebbac04b57, 0x8298a41bb08b4809,
      0xc38120088dbcf2c9, 0x3d2e21d5f9ec34f0, 0x64e89c5eb479138b, 0x95058dfe723a50a8, 0x4682462ad9f9c303,
      0xec0d5058d8ba0035, 0x5c62e9c452fdafa6, 0x7c11d971e8c3e9f6, 0x0f4d942037112748, 0xac8beff1dd0dc5df};
  uint64_t y = 0x68323fe289df33d2;
  uint64_t z[100];

  vsaddu_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    uint64_t r = x[i] + y;
    if (z[i] != (r >= x[i] ? r : 0xffffffffffffffff)) {
      return 1;
    }
  }

  return 0;
}
