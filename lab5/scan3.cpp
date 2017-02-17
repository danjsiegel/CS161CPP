#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string dataOfFile;
  double costOfItem, sumOfItems;
  ifstream invoiceFile("invoice1.txt");
  
	
	while(!invoiceFile.eof() {
		invoiceFile >> costOfItem;
		sumOfItems = sumOfItems + costOfItem;
		
	}
	invoiceFile.close();
	cout << f.rdbuf() << endl;
	cout << "total" << sumOfItems << endl;
  return 0;
}
