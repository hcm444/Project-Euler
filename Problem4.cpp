#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int palindrome(int num) {
  int rev = 0;
  int original = num;
  if (num < 10) return 1;
  if (num % 10 == 0) return 0;
  while (num >= 1) {
    rev = (rev * 10) + (num % 10);
    num = num / 10;
  }
  if (original == rev)
    return 1;
  else
    return 0;
}
int main() {
  unsigned int a = 0;
  for (auto n1 = 999u; n1 >= 100; n1--) {
    for (auto n2 = n1; n2 >= 100; n2--) {
      auto prod = n1 * n2;
      if (prod < a)
        break;
      if (palindrome(prod)) {
        a = prod;
      }
    }
  }
  cout << a << endl;
  return 0;
}
