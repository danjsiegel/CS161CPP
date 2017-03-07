#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	

	
	int playernumber = 1;
	//prints the array 
	cout << left << setw(10) << "Player" << setw(10) << "Hits" << setw(10) << "Walks" << setw(10) << "outs" << setw(10) << "At Bats" << endl;
	int stats[4][5] = {{0,4,4,4,0},{0,3,12,15,0},{0,6,8,10,0},{0,5,5,8,0}};
	int highScoresValue[4] = {0};
	string scoreTypes[4] = {"Hits", "Walks", "Outs", "At Bats"};
	for (int row = 0; row < 4; row++)
		{
		stats[row][0] = playernumber;
		stats[row][4] = stats[row][3] + stats[row][2] + stats[row][1];
		for (int column = 0; column < 5; column++)
			{
			cout << left << setw(10)  << stats[row][column] << " ";
			}
		playernumber++;
		cout << endl;
		} 
		cout << string(55, '_') << endl;
	//sums the columns
		for (int column = 0; column < 5; column++){
			int sum = 0;
			for (int row = 0; row < 4; row++){
			sum = sum + stats[row][column];		
			}		
		cout << setw(10) << sum << " ";	
		}
	cout << endl;
	//largest in the columns
	for (int column = 1; column < 5; column++){
			int index = 0;
			int largest = stats[0][column];
			int player = stats[0][column];
			for (int row = 0; row < 4; row++){
			if (stats[row][column] > largest){
				largest = stats[row][column];
				player = stats [row][0];		
				}
			highScoresValue[index] = player;
			index = index + 1;			
			} 
			
			
	}
	for (int index = 0; index < 4; index++){
		cout << "Player " << highScoresValue[index] << " had the most " << scoreTypes[index] << endl;
		}
return 0;
}

