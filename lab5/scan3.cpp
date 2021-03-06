#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
  string nameofItem, lineitem, price;
  int count = 0;
  double totalPrice = 0;
  double tempPrice;
    	
	cout << "Invoice:" << endl;
	ifstream invoiceFile("invoice1.txt");
	while (!invoiceFile.eof()) {  //reads the file until the end of file
	getline(invoiceFile, lineitem, '#');
	getline(invoiceFile, price);
	
	istringstream iss(price);  //turns the variable back into an input stream
	iss >> tempPrice;   //now that the variable is an input stream, reassign it to a double variable instead of an int. 
	totalPrice = totalPrice + tempPrice;
		
	count = count + 1; 
	cout << setw (10);
	cout << lineitem << " " << price << endl;
	}
	cout << fixed << setprecision(2);
	cout << "The total of " << count << " items is: " << totalPrice << endl;
	
  return 0;
}
