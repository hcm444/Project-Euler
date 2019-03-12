#include <iostream>
  int main() { //simple func
    int a, b, c, x = 1000; //one Pythagorean triplet for which a + b + c = 1000.
    for (a = 1; a < x; a++) { //a < b < c
      for (b = a; b < x / 2; b++) {
        c = x - a - b; //c is x minus a minus b
        if (a * a + b * b == c * c) { //a^2+b^2=c^2
          std::cout << a * b * c; //multiply em
        }
      }
    }
  }
