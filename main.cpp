#include <iostream>

int main() {

     if ((0xb0000000 & 0xb0000000) == 0xb0000000) {
         std::cout << "FAIL" << std::endl;
    }
}