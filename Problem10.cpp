#include <iostream>
using namespace std;
  int main() {
    int number = 2000000;
    int counter; 
    int x; 
    int y; 
    long sum = 0;
    counter = 0;
    for (x = 2; x <= number ; x++) {
      for (y = 2; y < number; y++)
        if (x % y == 0)
          break;
      if (x == y) {
        counter++;
        //std::cout << x << " ";
        sum += x;
        if (counter == number)
          break;
      }
    }
    cout << endl;
    std::cout << "Sum : " << sum << endl;
            
  }
