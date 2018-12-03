#include <iostream>
using namespace std;
int sum;
bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3; (i*i)<=n; i+=2){
        if(n % i == 0 ) return false;
    }
    return true;
}
int main()
{
	unsigned long long sum = 0;
	for (int i = 3; i < 2000000; i += 2)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	cout << sum + 2;
	return 0;
}
