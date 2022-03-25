#include <stddef.h>
#include <stdint.h>

void vdivu_vx(size_t n, const uint64_t x[], const uint64_t y, uint64_t z[]);

uint64_t divu(uint64_t x, uint64_t y) {
  if (y == 0) {
    return 0xffffffffffffffff;
  } else {
    return x / y;
  }
}

int main() {
  uint64_t x[100] = {
      0x8000000000000000, 0x88a5cc24f6d04418, 0xfc937333e4dbc2bb, 0x99e246c0bbfd8257, 0x1f7a076bfaf4fd32,
      0x9107bd4ceb7bd77a, 0x069675da70cfbb4b, 0xcbc5f94d02b00a6f, 0x7464bfcae724ea44, 0x8bd6ee431ebc2b25,
      0x9607892c245fbcc0, 0x3bf36fcdae1fd537, 0x0166606bd0cd19c6, 0x476b2b28b4a3ca3c, 0xd1461ad4e091a996,
      0x0c96438aaf9017a6, 0xee72674a526ac125, 0xeec20591875e5c94, 0x82aade981765278b, 0x01de61801830780e,
      0xd953bfcfade45c34, 0x9680c5fe93c49206, 0x115c827f4d92e573, 0x0f2c0b21b696f223, 0x77fb8799fcbda804,
      0xd53747813e84c011, 0x17be203c39982c27, 0x856a163427f964af, 0x4dfcd79aad0abffe, 0x4ceac26fa4ed7a29,
      0x969f9617e0c9e6c7, 0x7a7d3f41f434b7d9, 0xb043fb09d616608b, 0x03986f2ff4016f02, 0x23049c1ba8ac155a,
      0x4dd13e26649de8fc, 0x934b0684aab842fe, 0x02d65de8b186b84b, 0x27e98304d0f68d19, 0xc282781157d3e057,
      0x4c7441e144743394, 0xdd33bcf03f4c74be, 0x0f3f80b8e9247f70, 0x87bf97068ae347e4, 0x670211b86c17d715,
      0x55b2aa44327281ab, 0x95ba686a00b4501c, 0x013c4e8b0cb76aad, 0x2613a64e45d159ca, 0x3b995b1011e38507,
      0x9a9d41165f75cdd8, 0xd4fcb4a8acc8b41f, 0x58d536b5ccb81cfb, 0x793b823767a9694a, 0x15f2dbb2c52bbacd,
      0xef53457a8cc152dd, 0x7e1a3e08508b541e, 0xadc524da022e857a, 0x9062e08e23d1aa29, 0x4e6366e96d8fd3f5,
      0x1a2fd9e59c7ac514, 0x0990743b028921b5, 0xe0baf43db0ff332b, 0x53e53b8de1267a17, 0x3b62e90d5d22368c,
      0xc0a8f4a9605bc915, 0x865db580c7871b65, 0x3e7f2f33b0de376c, 0xcdc9a1e7f622cd8b, 0x4539f2dddeb019ad,
      0x32fc93f0cce71a71, 0xf22ce045f74dbe36, 0xd6b49a0aceb4de4b, 0x52eece8c375ffe9d, 0x051d8e3c130e2382,
      0xda18690c581dd4c8, 0xbfca9810a35a264a, 0x41a483be6fcfabbd, 0x038d08ceb7d17f7a, 0xecf14c2ad2cd528b,
      0xb5129465e5dbd086, 0x6d91a7867d609906, 0x59d1273313927b29, 0x73c82f43af110760, 0x5f48e62a0d845854,
      0x4a752ba9c984a7f2, 0x5aad756cfcdcaa47, 0x5c1d6159af2150ec, 0xfbe31066aefa8b63, 0x7cfda29ff5800feb,
      0x6f40d18aecb37d3f, 0x08f7b8ea8c11ca8b, 0xdf49f98207e7c298, 0x60ccb0221eda0838, 0x36e22f1bbae3e2bc,
      0x3db0221070008a22, 0xc378081931c68140, 0x6b03d5364f98931c, 0x4c7af700c8a5183c, 0xa37d28220ec89236};
  uint64_t y = 3;
  uint64_t z[100];

  vdivu_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != divu(x[i], y)) {
      return 1;
    }
  }

  return 0;
}
