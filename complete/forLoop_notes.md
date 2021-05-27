# For Loops

Always count-controlled

### Heading of for loop

```c+++
for(loop-control-var-init, rel exp, loop-control-var modification)
```

### Example

```c++
for (int i = 1; i < 11; ++i) {
  cout << i << " ";
}
```

# Nested For Loops

Tabular data organized in rows and columns

```c++
  for (int row = 1; row <= 5; ++row) {
    for(int col = 1; col <= 5; ++col) {
      cout << "*";
    }
    cout << endl;
  }
```

output:

```
*****
*****
*****
*****
*****
```

# Times Tables

```c++
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

```

### Result

```

   1   2   3   4   5   6   7   8   9  10  11  12
   2   4   6   8  10  12  14  16  18  20  22  24
   3   6   9  12  15  18  21  24  27  30  33  36
   4   8  12  16  20  24  28  32  36  40  44  48
   5  10  15  20  25  30  35  40  45  50  55  60
   6  12  18  24  30  36  42  48  54  60  66  72
   7  14  21  28  35  42  49  56  63  70  77  84
   8  16  24  32  40  48  56  64  72  80  88  96
   9  18  27  36  45  54  63  72  81  90  99 108
  10  20  30  40  50  60  70  80  90 100 110 120
  11  22  33  44  55  66  77  88  99 110 121 132
  12  24  36  48  60  72  84  96 108 120 132 144

1 * 1 = 1       1 * 2 = 2       1 * 3 = 3       1 * 4 = 4       1 * 5 = 5
2 * 1 = 2       2 * 2 = 4       2 * 3 = 6       2 * 4 = 8       2 * 5 = 10
3 * 1 = 3       3 * 2 = 6       3 * 3 = 9       3 * 4 = 12      3 * 5 = 15
4 * 1 = 4       4 * 2 = 8       4 * 3 = 12      4 * 4 = 16      4 * 5 = 20
5 * 1 = 5       5 * 2 = 10      5 * 3 = 15      5 * 4 = 20      5 * 5 = 25

```
