#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  string nameofStudent, score, namefromFile;
  string nameMatches;
    
    	do {
    		cout << "Enter a name: ";
    		cin >> nameofStudent;
		nameMatches = " is not found";
		ifstream studentsFile("students.txt");
		while (!studentsFile.eof()) {
		getline(studentsFile, namefromFile, ' ');
		getline(studentsFile, score);
		if (nameofStudent == namefromFile) {
		nameMatches = score;} 
		
		}
		if (nameofStudent != "exit") {
		cout << nameofStudent << " " << nameMatches << endl;}
		studentsFile.close();
	} while (nameofStudent != "exit");
	
  return 0;
}
