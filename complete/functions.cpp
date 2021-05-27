#include <iostream>
#include <string>

using namespace std;

void maximum(int num1, int num2, int num3) {
  int largest, smallest, middle;
  largest = num1;
  if (num2 > largest) {
    largest = num2;
  }
  if (num3 > largest) {
    largest = num3;
  }
  if (num1 < num2) {
    smallest = num1;
  } else {
    smallest = num2;
  }
  if (num3 < smallest) {
    smallest = num3;
  }
  if (num1 != smallest && num1 != largest) {
    middle = num1;
  } else if (num2 != smallest && num2 != largest) {
    middle = num2;
  } else {
    middle = num3;
  }
  cout << "Largest: " << largest << "\nMiddle: " << middle << "\nSmallest: " << smallest << endl;
}

double ftoc(double temp) {
  return ((temp - 32.0) * (5.0 / 9.0));
}

int main () {
  maximum(5,8,20);
  cout << "90f is " << ftoc(90) << "c" << endl;
  return 0;
}