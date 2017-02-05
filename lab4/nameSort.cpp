#include <iostream>
#include <string>
using namespace std;

int main(){
	string name1,name2,name3;
	cout << "enter 3 names separated by a space: ";
	cin >> name1 >> name2 >> name3;

	if (name1 < name2 && name1 < name3) {
		cout << name1 << endl;
	} else if (name2 < name1 && name2 < name3) {
		cout << name2 << endl;
	} else {
		cout << name3 << endl;
	}
	if (name1 > name2 && name1 > name3) {
		cout << name1 << endl;
	} else if (name2 > name1 && name2 > name3) {
		cout << name2 << endl;
	} else {
		cout << name3 << endl;
	}
	if (first != name1 && last != name1) {
		cout << name1 << endl;
	} else if (first != name2 && last != name2) {
		cout << name2 << endl;
	} else {
		cout << name3 << endl;
	}

	return 0;
}
