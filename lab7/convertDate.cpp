#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;
int conversion(string number);
enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December}; 
const char* monthName[] ={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(){

	string date, converter;
	int uMonth, uDate, uYear;

	cout << "Enter a date in the following format: MM/DD/YYYY: ";
	cin >> date;
	
	uMonth = conversion(date.substr(0,2));
	uDate = conversion(date.substr(3,2));
	uYear = conversion(date.substr(6,4));
 	
	if (uMonth > 0 && uMonth < 12 && uDate > 0 && uDate < 31 && uYear > 0){
	   for (int i = January; i <= December; i++){
	       if (uMonth == i){
	           cout << monthName[i] << " " << uDate << ", " << uYear << endl;
	           }
	   }
		
	    } else {
		cout << "bad date" << endl;	
	}

return 0;
}

int conversion(string number) {
int num;
istringstream(number) >> num;
return num;
}
