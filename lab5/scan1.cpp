#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  double priceOfItem;
  string nameofItem;

  ofstream out("invoice1.txt.");

  while (nameofItem != "999" || priceOfItem != 999){
    cout << "Please scan the name of the next item: ";
    cin >> nameofItem;
    cout << endl;

    cout << "Please scan the name of the next item: ";
    cin >> priceOfItem;
    cout << endl;

    out << nameofItem << "#" << priceOfItem << endl;

  };

  return 0;
}
