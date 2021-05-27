// Topic: printf

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  double pi = 3.14159265;

  // Prints default number of decimal places
  printf("%f", pi);

  // Right justify using number of spaces specified
  printf("%10f", pi);

  // Tell how many decimal places to use
  printf("%10.8f\n", pi);

  // Specify d for decimal
  int number = 100;
  printf("%d\n", number);

  // Right justify using number of spaces specified
  printf("%15d\n", number);

  // Display + sign
  printf("%+10d\n", number);
  printf("%10d\n", number);

  // Display Strings
  // Built for C, C doesn't have type string
  printf("%s\n", "Hello World!");
  string hello = "Hello World";
  // // printf("%s\n", hello); // THIS WON'T WORK
  // In C, strings are arrays of chars
  
  return 0;
}