#include <iostream>

using namespace std;

void fiveByFive () {
  for (int row = 1; row <= 5; ++row) {
    for(int col = 1; col <= 5; ++col) {
      cout << "*";
    }
    cout << endl;
  }
}

void pyramid () {
  for (int row = 1; row <= 5; ++row) {
    for (int col = 1; col <= row; ++col)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void timesTables () {
  int product = 0;
  for (int row = 1; row <= 12; ++row)
  {
    for (int col = 1; col <= 12; ++col) {
      product = row * col;
      // use 4 spaces, justify right
      printf("%4d", product);
    }
    cout << endl;
  }
}

void timesTablesTab () {
  int product = 0;
  for (int row = 1; row <= 5; ++row)
  {
    for (int col = 1; col <= 5; ++col) {
      cout << row << " * " << col << " = "
           << row * col << "\t";
    }
    cout << endl;
  }
}

int main() {
  fiveByFive();
  pyramid();
  timesTables();
  timesTablesTab();
  return 0;
}