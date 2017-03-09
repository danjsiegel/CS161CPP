#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;
enum {AVAILABLE, SOLD};
char indicator[2] = {'*','S'};
char ticket[3][3][20];


int main(){
	for(int section = 0; section < 3; section++){
		for(int day = 0; day < 3; day++){
			for(int seat = 0; seat < 20; seat++){
				ticket[section][day][seat] = indicator[0];
			}
		}
	}

	


	string seatInput;
	int userSeat, userFloor;
	while (seatInput != "x") {
		cout << "Enter a Day, (T)hursday, (F)riday, (S)aturday, (x)exit" << endl;
		cout << "Enter a level, (F)loor, (B)alcony, (U)pper floor" << endl;
		cout << "Bad input will default to Saturday on the upper floor. Enjoy the nosebleeds: " << endl; 
		cin >> seatInput;
		// converts user input into array indexes
		if (seatInput.substr(0,1) == "T" || seatInput.substr(0,1) == "t" || seatInput.substr(0,1) == "F" || seatInput.substr(0,1) == "f" || seatInput.substr(0,1) == "S" || seatInput.substr(0,1) == "S"){
		if (seatInput.substr(0,1) == "T" || seatInput.substr(0,1) == "t" ){
			userSeat = 0;
			} else if (seatInput.substr(0,1) == "F" || seatInput.substr(0,1) == "f"){
			userSeat = 1;
			} else {
			userSeat = 2;			
			} 
		}
		if (seatInput.substr(1,1) == "F" || seatInput.substr(1,1) == "f" || seatInput.substr(1,1) == "B" || seatInput.substr(1,1) == "b" || seatInput.substr(1,1) == "U" || seatInput.substr(1,1) == "u"){
			if (seatInput.substr(1,1) == "F" || seatInput.substr(1,1) == "f" ){
				userFloor = 0;
			} else if (seatInput.substr(1,1) == "B" || seatInput.substr(1,1) == "b"){
				userFloor = 1;		
			} else {
				userFloor = 2;
			}
		}}
		
		for (int seat = 0; seat < 20; seat++){
			if (ticket[userSeat][userFloor][seat] == '*'){
				ticket[userSeat][userFloor][seat] = 'S';
				break;		
			}
		}


return 0;
}


