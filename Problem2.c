#include <stdio.h>
int main(void)
{
  int s = 0;
  int n0 = 1, n1 =1, n2 = 2;
  while (n2 < 4000000) {
    n2 = n1 + n0;
    s += n2 * !(n2%2);
      n0 = n1;
      n1 = n2;
    }
printf("%u\n", s);
return 0;
}
