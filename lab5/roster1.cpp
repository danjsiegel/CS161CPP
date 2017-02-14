#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  int counter = 1;
  int numerOfStudents;
  string studentName;

  ofstream out("students.txt");

  cout << "How many students may register for this class? ";
  cin >> numerOfStudents;
  cout << endl;

  if (numerOfStudents > 0) {
    while (numerOfStudents >= counter) {
      cout << "Enter the student’s name: ";
      cin >> studentName;
      cout << endl;
      out << studentName;
      counter = counter + 1;
    }
  } else {
    cout << "You didn't enter a valid number of students" << endl;
  }
}
