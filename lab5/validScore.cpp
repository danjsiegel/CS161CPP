#include <iostream>
#include <string>

using namespace std;

int main() {
int score;
bool lessThan100;
bool greaterThan0;


	while (score != 999) {
		lessThan100 = false; //values false by default
		greaterThan0 = false; //values false by default

		cout << "Enter a score between 1 and 100. Enter 999 to exit: ";
		cin >> score;
		
		if (score < 101) {
		lessThan100 = true;
		} else {
		lessThan100 = false;
		}

		if (score > 0) {
		greaterThan0 = true;
		} else {
		greaterThan0 = false;
		}
		
		if (lessThan100 == true && greaterThan0 == true) {
		do {
		cout << "The score entered is " << score << endl;
		lessThan100 = false; //resets value to false
		greaterThan0 = false; //rests value to false
		} while (lessThan100 == true && greaterThan0 == true);
		}
	}
  return 0;
}
