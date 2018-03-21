#include <stdio.h>
int main(void)
{
  int sum1 = 0, sum2 = 0, sum3 = 0, i;
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
  printf("%d\n", sum1 + sum2 - sum3);
  return 0;
}
