#include <iostream>
  using namespace std;
int main() {
  long long data = 600851475143; //data
  for (long long i = 3; i <= data; i += 2) { //loop starts at 2
    if (data % i == 0) {
      if (data / i >= i) {
        data /= i;
        i -= 2;
      }
    }
  }
  cout << data << endl;
}
