#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>


using namespace std;

enum ticketStatus {AVAILABLE, SOLD};
enum ticketFloor {FLOOR, BALCONY, UPPER_BALCONY};
enum ticketDate {THURSDAY, FRIDAY, SATURDAY};
string displayFloor[3] = {"Floor", "Balcony", "Upper Balcony"};
string displayDay[3] = {"Thursday", "Friday", "Saturday"};
int ticketSoldPerDay[3];
int ticketCashAmountPerDay[3];
int priceArray[3] = {30, 20, 10};
int MAX_SEATS = 20;
int validDay (string dayinput);
int validFloor (string floorinput);

int main(){
	int ticket[UPPER_BALCONY+1][SATURDAY+1][MAX_SEATS];
	for(int section = FLOOR; section <= UPPER_BALCONY; section++){
	for(int day = THURSDAY; day <=SATURDAY; day++){
		for(int seat = 0; seat < MAX_SEATS; seat++){
			ticket[section][day][seat] = AVAILABLE;
			}
		}
	}
	string seatInput;
	int userDay, userFloor;

	while (seatInput != "x"){
	
	cout << "Enter a day, (T)hursday, (F)riday, (S)aturday, (x)exit" << endl;
	cout << "Enter a level, (F)loor, (B)alcony, (U)pper floor" << endl; 
	cin >> seatInput; 
	//turns the input into lowercase so that there is less logic to build into the program
	transform(seatInput.begin(), seatInput.end(), seatInput.begin(), ::tolower);			
	userDay = validDay(seatInput.substr(0,1));
	userFloor = validFloor(seatInput.substr(1,1));
	//cycles through the 20 seats per day/floor. If it finds an unsold ticket, it updates the value and breaks then stops
		if (userDay != 99 && userFloor != 99){
			for (int i = 0; i < MAX_SEATS; i++){
				if (ticket[userFloor][userDay][i] == 0){
					ticket[userFloor][userDay][i] = 1;
					break;			
				}		
			} 
			
		}

	}
//

for (int day = THURSDAY; day <=SATURDAY; day++){
	cout << displayDay[day] << endl;
	int daySold = 0;
	int daytotal = 0;
	for(int section = FLOOR; section <= UPPER_BALCONY; section++){	
			int sum = 0;
			for(int seat = 0; seat < MAX_SEATS; seat++){		
				sum = sum + ticket[section][THURSDAY][seat];
		
				} 
				daySold = daySold + sum;
				int floorTotal = sum * priceArray[section];
				daytotal = daytotal + floorTotal;
				cout <<  displayFloor[section] << " Tickets sold: " << sum << " $" << floorTotal << endl;
				//ticketSoldPerDay[day] =+ daySold;
				//ticketCashAmountPerDay[day] =+ daytotal;
		} 
	
		//daySold = 0;
	}
	//totals per day
	//for (int i = 0; i < 3; i++){
	//cout << displayDay[i] << " Total tickets sold " << ticketSoldPerDay[i] << " $" << ticketCashAmountPerDay[i] << endl;
	
	}
	return 0;
	
}
//takes the first letter of the string as an argument. If it's a valid input, return a value within the range of the ticket array, else it will return 99
int validDay (string dayinput){
	int day = 99;
	if (dayinput == "t"){
		day = 0;
	} else if (dayinput == "f"){
		day = 1;	
	} else if (dayinput == "s"){
		day = 2;
	}
	return day; 
}

//Takes the 2nd letter of the user string as an argument. If it's a valid input, will return a value within the range of the ticket array, else it will return 99
int validFloor (string floorinput){
	int floor = 99;
	if (floorinput == "f"){
		floor = 0;
	} else if (floorinput == "b"){
		floor = 1;	
	} else if (floorinput == "u"){
		floor = 2;
	}
	return floor; 
}

