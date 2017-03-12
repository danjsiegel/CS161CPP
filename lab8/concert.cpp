#include <iostream>
#include <string>
#include <ctype>


using namespace std;

enum ticketStatus {AVAILABLE, SOLD};
enum ticketFloor {FLOOR, BALCONY, UPPER_BALCONY};
enum ticketDate {THURSDAY, FRIDAY, SATURDAY};
int MAX_SEATS = 20;
void ticketfunct();

int main(){
	//ticketfunct();
	string seatInput;
	int userSeat, userFloor;

	while (seatInput != "x"){
	seatInput = "TEST";
	seatInput = tolower(seatInput);
	cout << seatInput << endl;
	
	}

	return 0;
}


void ticketfunct() {int ticket[UPPER_BALCONY+1][SATURDAY+1][MAX_SEATS];
	for(int section = FLOOR; section <= UPPER_BALCONY; section++){
	for(int day = THURSDAY; day <=SATURDAY; day++){
		for(int seat = 0; seat < MAX_SEATS; seat++){
			ticket[section][day][seat] = AVAILABLE;
			cout << ticket[section][day][seat] << " ";
			}
		}
	}
}
