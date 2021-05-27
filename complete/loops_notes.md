# While Loop

```c++

  while (relational expression)
  {
    statement1
    statement2
    statementn
    // one statement must cause relational exp to become false
  }
```

## Example

```c++
  int count = 1;
  // Count is the "Loop Control Variable"
  // Inside of parenthesis is called relational expression
    while (count <= 10) {
      cout << "Hello, World!" << endl;
      ++count;
    }
    return 0;

```
