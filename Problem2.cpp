#include <iostream>
  int main() {
    int s, x, y, z;
    s = 0;
    x = 1;
    y = x;
    z = 2;
    while (z < 4000000) {
      z = x + y;
      s += z * !(z % 2);
      x = y;
      y = z;
    }
    std::cout << s;
    return 0;
  }
