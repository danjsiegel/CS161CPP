#include <iostream>
using namespace std;

int main () {
   int i;
   for(i = 1; i <= 100; i = i + 1 ) {
        if (i % 15 == 0) {
        cout << "fizbuzz" << endl;
    } else if (i % 3 == 0) {
        cout << "fizz" << endl;
    } else if (i % 5 == 0) {
        cout << "buzz" << endl;
    } else {
        cout << i << endl;
        }
   }

   return 0;
}
