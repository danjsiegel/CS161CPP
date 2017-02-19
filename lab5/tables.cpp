#include <iostream>

using namespace std;

	int main() {

    //declaring variables
	int column; 
	int row;
	int number = 1; 

	cout << "A table that has rows and colums with multiples " << endl; 
	cout << "   A\tB\tC\tD\tE " << endl; 


	for (row = 1; row <= 5; row++) {
	cout << number << "  " << number * 1 << "\t" << number * 2 << "\t" << number * 3 << "\t" << number * 4 << "\t" << number * 5 << endl;
	number = number + 1;
	}
	return 0;
	}


