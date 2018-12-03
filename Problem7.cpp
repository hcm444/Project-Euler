#include <iostream>
  int main() {
    int number, counter, x, y;
    number = 10001;
    counter = 0;
    for (x = 2;; x++) {
      for (y = 2; y < x; y++)
        if (x % y == 0)
          break;
      if (x == y) {
        counter++;
        if (counter == number)
          break;
      }
    }
    std::cout << x;
  }
