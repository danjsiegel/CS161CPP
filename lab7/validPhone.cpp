#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;


int main(){

	string phoneNumber, hyphen;
	string firstThree, lastFour;

	cout << "Enter a phone number in the format \"000-0000\": ";
	cin >> phoneNumber;
	
	firstThree = phoneNumber.substr(0,3);
	hyphen = phoneNumber.substr(3,1);
	lastFour = phoneNumber.substr(4,4);	

	if (firstThree.length() == 3 && hyphen == "-" && lastFour.length() == 4) {
	cout << "The Number is in the Proper Format" << endl;
} else {
	cout << "The Number is not in the proper format " << endl;
	}

 
return 0;
}

int conversion(string number) {
int num;
istringstream(number) >> num;
return num;
}
