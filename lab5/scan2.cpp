#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string nameofItem, lineitem, price;
  string itemMatches;
    
    	do {
    		cout << "Enter an Item: ";
    		cin >> nameofItem;
	
		itemMatches = "item not found";
		ifstream invoiceFile("invoice1.txt");
		while (!invoiceFile.eof()) {
		getline(invoiceFile, lineitem, '#');
		getline(invoiceFile, price);
		if (lineitem == nameofItem) {
		itemMatches = price;} 
		
		}
		if (nameofItem != "exit") {
		cout << "The cost of: " << nameofItem << " is "  << itemMatches << endl;}
		invoiceFile.close();
	} while (nameofItem != "exit");
	
  return 0;
}
