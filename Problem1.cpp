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

/*
233168
Process returned 0 (0x0)   execution time : 0.012 s
Press any key to continue.
*/
