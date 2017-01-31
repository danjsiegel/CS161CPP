//Input Failure Program
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;

  cout << "line 5: cin = " << cin << endl; //values of cin are blank 

  cout << "Line 6: Enter four integers: ";
  cin >> a >> b >> c >> d; //values to be entered are 34 K 67 28
  cout << endl;
  cout << "Line 9: the numbers you entered are: " << endl;
  cout << "line 10: a = " << a << ", b = " << b << ", c= " << c << ", d= " << d << endl; //returns a = 34, b = 0, c = 30, d = 40
  cout << "line 11 cin= " << cin << endl;
  cout << "line 12 cin.fail() returns " << cin.fail() << endl; //returns values of cin.fail, since there was a failure, value will be 1
  cout << "line 13: Now we will use cin.clear()" << endl;

  cin.clear();
  cout << "line 15 cin = " << cin << endl;  //cleared values of of input and back to the originals
  cout << "line 16 cin.fail returns " << cin.fail(); //value of cin fail is 0 because all the values are valid
   
  return 0;
}
