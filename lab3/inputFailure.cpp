//Input Failure Program
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;

  cout << "line 5: cin = " << cin << endl;

  cout << "Line 6: Enter four integers: ";
  cin >> a >> b >> c >> d;
  cout << endl;
  cout << "Line 9: the numbers you entered are: " << endl;
  cout << "line 10: a = " << a << ", b = " << b << ", c= " << c << ", d= " << d << endl;
  cout << "line 11 cin= " << cin << endl;
  cout << "line 12 cin.fail() returns " << cin.fail() << endl;
  cout << "line 13: Now we will use cin.clear()" << endl;

  cin.clear();
  cout << "line 15 cin = " << cin << endl;
  cout << "line 16 cin.fail returns " << cin.fail();
   
  return 0;
}
