#include <iostream>
int main()
{
    long sumsq = 0, sqsum, sum = 0;
    for (int x =1; x <= 100; x++){
        sumsq += x*x;
        sum += x;
        sqsum = (sum * sum);
    }
    std::cout << (sqsum - sumsq);
    return 0;
}
