
bool getBit(unsigned int x, int n) { return ((x >> n) & 1); }

unsigned int setBit(unsigned int x, int n) { return ((1u << n) | x); }

unsigned int clearBit(unsigned int x, int n) { return (~(1u << n) & x); }

unsigned int toggleBit(unsigned int x, int n) { return ((1u << n) ^ x); }

int countOnes(unsigned int x) {
  int total = 0;
  for (int i = 0; i <= 31; ++i) {
    if ((x >> i) & 1) {
      ++total;
    }
  }
  return total;
}

bool isPowerOfTwo(unsigned int x) {
  if (countOnes(x) == 1) {
    return true;
  }
  return false;
}
