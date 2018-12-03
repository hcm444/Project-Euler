#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)

{
  int sum1 = 0, sum2 = 0, sum3 = 0, i, answer;
  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      sum1 += i;
    }
    if (i % 5 == 0) {
      sum2 += i;
    }
    if (i % 15 == 0) {
      sum3 += i;
    }
  }
  answer = sum1 + sum2 - sum3;
  cout << answer << endl;
  return 0;
}
