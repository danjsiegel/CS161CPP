// Dan Siegel
// Program assignment Age.cpp

#include <iostream>
#include <string>

using namespace std;

// user-defined function prototypes
int getValue(string message);
char getLetter(string message);   

int main()
{
	// declare variables
	int thisYear, thisMonth, birthYear, birthMonth, ageYears, ageMonths;
	char again = 'y';
	
	// display program instructions
	cout << "This program asks you to enter today's year in 4 digits,\n" << "and today's month number.\n\n" << "Then you will be asked to enter your birth in 4 digits,\n" << "and your birth month in 2 digits.\n\n" << "The program will calculate and display your age in years and months.\n";
	
	// assign to thisYear the value returned from a call to getValue	
	thisYear = getValue("Current Year? ");
	// assign to thisMonth the value returned from a call to getValue
	thisMonth = getValue("Current Month? ");

	// loop until the user indicates to end
	while (again == 'y')
	{
		birthYear = getValue("Birth Year? ");
		// assign to year the value returned from a call to getValue
		birthMonth = getValue("Birth Month? ");
		// assign to month the value returned from a call to getValue
		

		// assign age the value of thisYear - year
		ageYears = thisYear - birthYear;
		ageMonths = thisMonth - birthMonth;
		
		/* test to see is thisMonth is less than month
		if true
			subtract 1 from age and add 12 to month
		*/
		if (thisMonth < birthMonth)
		{
			ageYears--;
			ageMonths += 12;
		}

		// display the age in years and months
		cout << "\nYou are " << ageYears << " years and " << ageMonths << " months old.\n";

		// assign to again the value returned from getLetter
		again = getLetter("Run this again? ");
		// convert the value of again to lowercase
		again = tolower(again);
	
	}

return 0;
}

/* the function getValue returns an integer value
   entered by the user in response to the prompt 
   in the string message */
int getValue(string message) 
{
	// declare variables
	// declare an integer value to enter a value
	int value;

	// prompt the user with the message passed to the function
	cout << message;
	// read in the value entered
	cin >> value;
	// return the value 
	return value;
}

/* the function getLetter returns a character value
   entered by the user in response to the prompt
   in the string message */
char getLetter(string message)
{
	// declare variables
	// declare a character value to enter a value
	char letter;

	// prompt the user with the message passed to the function
	cout << message;
	// read in the value entered
	cin >> letter;
	// return the value
	return letter;
}


optionscompilationexecution
This program asks you to enter today's year in 4 digits,
and today's month number.

Then you will be asked to enter your birth in 4 digits,
and your birth month in 2 digits.

The program will calculate and display your age in years and months.
Current Year? 2017
Current Month? 2
Birth Year? 1987
Birth Month? 1

You are 30 years and 1 months old.
Run this again? y
Birth Year? 1987
Birth Month? 2

You are 30 years and 0 months old.
Run this again? n
 