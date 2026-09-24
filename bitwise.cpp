#include <iostream>

// take an int as input and print binary representation of num

void printBinary(int n) {
	for (int k = 8; k >= 0; --k) {
		std::cout << ((n >> k) & 1) << std::endl;
      	}
      		
}

int main() {
      for (int n = 1; n < 64; ++n) {
            if (!(n & 1)) {
                  std::cout << n << std::endl;
            }
      }
      return 0;
}
