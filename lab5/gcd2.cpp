#include <iostream>

using namespace std;

	int main() {
	int number1, number2;
	int gcd;

	cout << "Enter a first number " << endl;
	cin >> number1;

	cout << "Enter a second number: " <<  endl;
	cin >> number2;

	for (int i = 1; i<=number1 && i<=number2; i++){
		if(number1 % i == 0 && number2 % i == 0){
		gcd = i;
		}	
	
	}
			
	cout << "gcd(" << number2 << ", " << number1 << ") is: " << gcd << endl;

	return 0;
	}


