#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December} userMonth;

int main(){

	string date, uMonth, uDate, uYear;
	date = "01/01/2017";
	
	uMonth = date.substr(0,2);
	uDate = date.substr(4,5);
	uYear = date.substr(6,9);
	//cin >> date;
	//userMonth = 1;
 	cout << uMonth << endl;
	cout << uDate << endl;
	cout << uYear << endl;

	//getch();

return 0;
}
 
