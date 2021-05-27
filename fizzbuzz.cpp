#include <iostream>

using namespace std;

string checkFizzBuzz(int numToTest) {
  string fbValue;
  if (numToTest == 0) {
    fbValue = "N/A\n";
  }
  else if (numToTest % 3 == 0 && numToTest % 5 == 0)
  {
    fbValue = "fizzbuzz\n";
  }
  else if (numToTest % 3 == 0)
  {
    fbValue = "fizz\n";
  }
  else if (numToTest % 5 == 0)
  {
    fbValue = "buzz\n";
  } else {
    fbValue = "N/A\n";
  }
  return fbValue;
}

int main () 
{
  for (int i = 0; i <= 100; i++) {
    cout << i << " - " << checkFizzBuzz(i);
  }
  cout << endl
       << "https://youtu.be/dQw4w9WgXcQ" << endl;
  return 0;
}