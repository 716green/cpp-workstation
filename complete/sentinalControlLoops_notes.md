# Sentinal Controlled Loops

Sentinel-controlled loop

Looks for a special value to end the loop (like the end of a program)

An example would be -1

```c++
  int grade, gradeTotal, numGrades;
  double average;
  // Set both to 0 while initializing
  numGrades = gradeTotal = 0;
  cout << "Enter a grade: ";
  cin >> grade;
  while (grade != -1) {
    gradeTotal += grade;
    ++numGrades;
    cout << "Enter a grade: ";
    cin >> grade;
  }
  average = gradeTotal / numGrades;
  cout << "The average grade is: " << average << endl;
  return 0;

```
