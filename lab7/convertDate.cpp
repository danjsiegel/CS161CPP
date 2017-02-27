#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;
int conversion(string number);
enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};

int main(){

	string date, converter;
	int uMonth, uDate, uYear;

	cout << "Enter a date in the following format: MM/DD/YYYY: ";
	cin >> date;
	
	uMonth = conversion(date.substr(0,2));
	uDate = conversion(date.substr(3,2));
	uYear = conversion(date.substr(6,4));
 	
	if (uMonth > 0 && uMonth < 12 && uDate > 0 && uDate < 31){
		switch (uMonth) {
		case 1:
			cout << "January" << " " << uDate << ", " << uYear << endl;
			break;
		case 2:
			cout << "February" << " " << uDate << ", " << uYear << endl;
			break;
		case 3:
			cout << "March" << " " << uDate << ", " << uYear << endl;
			break;
		case 4:
			cout << "April" << " " << uDate << ", " << uYear << endl;
			break;
		case 5:
			cout << "May" << " " << uDate << ", " << uYear << endl;
			break;
		case 6:
			cout << "June" << " " << uDate << ", " << uYear << endl;
			break;
		case 7:
			cout << "July" << " " << uDate << ", " << uYear << endl;
			break;
		case 8:
			cout << "August" << " " << uDate << ", " << uYear << endl;
			break;
		case 9:
			cout << "September" << " " << uDate << ", " << uYear << endl;
			break;
		case 10:
			cout << "October" << " " << uDate << ", " << uYear << endl;
			break;
		case 11:
			cout << "November" << " " << uDate << ", " << uYear << endl;
			break;
		case 12:
			cout << "December" << " " << uDate << ", " << uYear << endl;
			break;
		default:
			cout << "bad year dawg" << endl;
			break;
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
