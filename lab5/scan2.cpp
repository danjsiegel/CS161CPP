#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string nameofItem, lineitem, line;
  ifstream invoiceFile("invoice1.txt");
  
    cout << "Enter an Item: ";
	cin >> nameofItem;
	
	while(invoiceFile) {
    invoiceFile >> lineitem;
		if(nameofItem == lineitem){
			getline(invoiceFile, line);
			cout << line << endl;
		} else {
			cout << "item not found" << endl;
		}
	}
  return 0;
}
