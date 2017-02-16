#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string nameofItem, line;
  ifstream invoiceFile("invoice1.txt");

  if (invoiceFile,is_open()){
    cout << "Enter an Item: ";
    getline(cin, nameofItem);
    ofin << "Item is: " << nameofItem << endl;
  }

  return 0;
}
