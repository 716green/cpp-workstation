// While Loops

#include <iostream>

using namespace std;

int main()
{
  double balance, rate;
  int years, count;
  cout << "What is the starting balance? ";
  cin >> balance;
  cout << "What is the interest rate? (enter percentage as a whole number, ie. 2 = 2%) ";
  cin >> rate;
  cout << "How many years to calculate interest? ";
  cin >> years;

  // count = 1;
  // while (count <= years) {
  //   balance *= (1 + (rate / 100));
  //   ++count;
  // }

  int origYears = years;
  while (years > 0)
  {
    balance *= (1 + (rate / 100));
    --years;
  }
  cout << "After " << origYears << " years, your balance will be $" << balance << "." << endl;

  return 0;
}