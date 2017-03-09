#include <iostream>
#include <string>


using namespace std;

enum {AVAILABLE, SOLD};
enum {FLOOR, BALCONY, UPPER_BALCONY};
enum {THURSDAY, FRIDAY, SATURDAY};
int MAX_SEATS = 20;
char indicator[2] = {'*','S'};

char ticket[UPPER_BALCONY+1][SATURDAY+1][MAX_SEATS];

for(int section = FLOOR; section <= UPPER_BALCONY; section++){
	for(int day = THURSDAY; day <=SATURDAY; day++){
		for(seat = 0; seat < MAX_SEATS; seat++){
			ticket[section][day][seat] = indicator[AVAILABLE];
		}
	}
}





int main(){
	
	
	return 0;
}