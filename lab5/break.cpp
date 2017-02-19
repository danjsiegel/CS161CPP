#include <iostream>
#include <string>

using namespace std;

	int main() {
	int number;
	int total = 0;
	
	for (int i=1; i <= 20; i++){
		cout << "Enter a list of 20 numbers number: ";
		cin >> number;
			if (number > 0){
			total = total + number;			
			} else {
			break;			
			}	
		}
	cout << total << endl;
	return 0;
	}
