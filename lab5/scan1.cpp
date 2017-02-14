#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  double priceOfItem;
  string nameofItem;

  ofstream out("invoice1.txt.");

  cout << "Please scan the name of the first item: ";
  cin >> nameofItem;
  cout << endl;

  cout << "Please scan the name of the first item: ";
  cin >> priceOfItem;
  cout << endl;

  out << nameofItem << "#" << priceOfItem << endl;
  do {
    cout << "Please scan the name of the next item: ";
    cin >> nameofItem;
    cout << endl;

    cout << "Please scan the name of the next item: ";
    cin >> priceOfItem;
    cout << endl;

    out << nameofItem << "#" << priceOfItem << endl;

  } while (nameofItem != "999" || priceOfItem != 999);

  return 0;
}
