#include <iostream>

using namespace std;

double multiply (double num1, double num2) {
  double product = 0;
  while (num2 > 0)
  {
    product += num1;
    num2--;
    cout << "num2 " << num2 << endl;
  }

    return product;
}


int main() {
  cout << multiply(2.5, 2.5);
  return 0;
}

