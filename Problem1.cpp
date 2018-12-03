#include <iostream>
  int main(void) {
    int sum = 0, i, answer;
    for (i = 0; i < 1000; i++) {
      if ((i % 3 == 0) || (i % 5 == 0) || (i % 15 == 0)) {
        sum += i;
      }
    }
    answer = sum;
    std::cout << answer;
    return 0;
  }
