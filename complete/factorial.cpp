#include <iostream>
using namespace std;

int main () 
{
  int number, factorial;
  cout << "Enter a number" << endl;
  cin >> number;
  factorial = 1;
  for (int i = number; i >= 1; --i) {
    factorial *= i;
  }
    cout << number << "! equals " << factorial << endl;

    return 0;
}