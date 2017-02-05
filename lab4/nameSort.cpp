#include <iostream>
#include <string>
using namespace std;

int main(){
	string name1,name2,name3;
	string first, middle, last;

	cout << "enter 3 names separated by a space: ";
	cin >> name1 >> name2 >> name3;
	cout << endl;
	//First Names
	if (name1 < name2 && name1 < name3) {
		first = name1;
	} else if (name2 < name1 && name2 < name3) {
		first = name2;
	} else {
		first = name3;
	}
	if (name1 > name2 && name1 > name3) {
		last = name1;
	} else if (name2 > name1 && name2 > name3) {
		last = name2;
	} else {
		last = name3;
	}
	if (first < name1 && name1 < last) {
		middle = name1;
	} else if (first < name2 && name2 < last) {
		middle = name2;
	} else {
		middle = name3;
	}

	cout << first << '\n' << middle << '\n' << last << endl;
	return 0;
}
