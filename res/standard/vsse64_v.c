#include <stddef.h>
#include <stdint.h>

void vsse64_v(size_t n, const uint64_t x[], uint64_t *y, uint64_t z);

int main() {
  uint64_t x[100] = {
      0x5b764e8cf4b360b3, 0xbf898a0f7e0983f8, 0x5b97ee5e4a0e4b5b, 0x90d3c62f92206c9e, 0xfe7ecd587f9accd1,
      0xe9e04144435bee12, 0xe3e1893c1a23876f, 0x44e7883ceabeaf27, 0xddbfd430444fb64e, 0xf93156d0d9672296,
      0x71c81b47103c7151, 0x0b38fb727675eb12, 0x1eac30e558658a8b, 0x62ac7be015046396, 0xae3c49209897fed6,
      0xa97023e986690938, 0xa88890d2c7740ad0, 0xa12bb074a581df70, 0x1b6fc444942fc12f, 0xf09e4c406d361b73,
      0xf23351bb98302f6c, 0xba17e63c70103aa7, 0xccdf8eb114085307, 0x32701bff100418a5, 0xaf9b6383073ac9be,
      0xd3d4076752ea58e5, 0x62fd4ceb8ec213be, 0x5d11a3d3735be930, 0xa18fff6a0e8df374, 0x4cbbd48931247079,
      0xa026dac2a5d4032a, 0x8dc3f00b617f3f19, 0x1743f66c967d8819, 0x46a814e8ddf46a19, 0x85b1fc3d96b9bbc2,
      0xe0be43c3ac7a635c, 0x2fa100ce74451251, 0xaa5bcd44ce2904f6, 0xf48ab73bef5267a2, 0x091bff481b18cfa0,
      0x3e0250b23a74c921, 0xa239831da7a7edb3, 0xf836f4bf8cd52edc, 0xfe85c4e75b7cb0fc, 0xf5d1e77f62acc143,
      0x70acc6792a951c76, 0x891cd10df683217a, 0x2d5c1e9a0c2a6c79, 0xfa1a1d23a22a1d00, 0xea4e5e347aa354e4,
      0xa0663b621de80d21, 0x91aa6cf9caf4dbf2, 0x73432a1ac4465716, 0xb173e742a17c35a8, 0x48e21629865c22df,
      0xe808d8e82ea5675b, 0x80056b389e04bccb, 0xa3cff8d106bd6317, 0xd7a930a718da9381, 0xbdbddbf681982293,
      0x0ece7e12dc04aee7, 0xabb5ae3326490ab3, 0xd7118d886679e3ee, 0xeeb2ba23ca838dd8, 0x740e0b4cbd62094a,
      0xa34d88e987fe5711, 0xfbe1ecb8827e970f, 0xd74219c588969c89, 0xf666b84de9342f3c, 0x4d4e8059c9086b5a,
      0xe7544c15a43860e6, 0xdc6d5f6255b8a50d, 0xc182c250b35e9318, 0xf83203f871ad79e8, 0x57291ede53de82e0,
      0xea86c3c02449be5c, 0xe888d68cc84a5f0e, 0x64e27200b0d44112, 0x9cf6fb364e00ac85, 0xfa1c67628ab4c391,
      0x6d526130e67c312e, 0x348e608ac25b4cf2, 0x98be4c686097135f, 0x24e1579b739facff, 0x79d6dd17e65e6ff6,
      0x91b8302b18794782, 0x5727bdeda7a490d6, 0x71f5ae8bd4ff6595, 0x6ccfd4b873f1f2a7, 0xa5d09e3b5743ec80,
      0xdb7840ece855c6f7, 0x563a6fc718ff894e, 0x6428c757e654e42b, 0xa7e53da760717220, 0x4d9b9403417e9311,
      0x40f2150568e84849, 0x497809c11a57768c, 0x852a5ad2591ab50f, 0x4b1cbf146bc69a6a, 0xd0c1d4bf74ef7eeb};
  uint64_t y[400] = {};

  vsse64_v(100, x, y, 32);

  for (int i = 0; i < 400; i++) {
    if (i % 4 != 0) {
      continue;
    }
    if (y[i] != x[i / 4]) {
      return 1;
    }
  }

  vsse64_v(100, x, &y[396], -32);

  for (int i = 0; i < 400; i++) {
    if (i % 4 != 0) {
      continue;
    }
    if (y[i] != x[99 - i / 4]) {
      return 1;
    }
  }

  return 0;
}
