#include <iostream>
#include <string>

using namespace std;

int main() {
  int userNumb = 0;
  int originalNumb;
  int tempTotal = 0;
  int total = 0;

	cout << "Enter A Number greater than 0: ";
	cin >> userNumb;
	originalNumb = userNumb;
	
	if (userNumb > 0){
		for (userNumb; userNumb > 0; userNumb = userNumb - 1) {
		tempTotal = userNumb -1;
			if (total == 0 && tempTotal > 0){
			total = userNumb * tempTotal;
			} else if (tempTotal > 0) {
			total = total * tempTotal;
			}
			
		}
		cout << "The factorial of " << originalNumb << " is " << total << endl;  
	} else {
	cout << "Not a valid number" << endl;
	}
	
  return 0;
}
