#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main (){
  char mI;
  int age;

  cout << "Enter your age and your middle initial: ";
  cin >> age >> mI;

  if (!age) {
    cout << "your age is bad" << endl;
  } else {
  cout << "your age is: " << age;
  } 
  if (!isalpha(mI)){
  cout << " your initial was bad" << endl;
  } else { 
  cout << " Your middle initial is: " << mI << endl;
  }
}
