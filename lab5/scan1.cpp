#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  double priceOfItem;
  string nameofItem;

  ofstream out("invoice1.txt");

  while (priceOfItem != 999){
    cout << "Please scan the name of the next item: ";
    cin >> nameofItem;
    cout << endl;

    cout << "Please scan the name of the next item: ";
    cin >> priceOfItem;
    cout << endl;

    if (priceOfItem != 999) {
        out << nameofItem << "#" << priceOfItem << endl;
	} else {
    }

  };

  return 0;
}
