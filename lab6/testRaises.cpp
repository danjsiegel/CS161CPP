// Enter your name as a comment for program identification
// Program assignment Buggy.cpp
// Enter your class section, and time

/* The program Buggy.cpp calculates the cost to a 
   company for a proposed raise.  The program prompts 
   for the number of employees and each employee's salary
   then calculates the individual raise and the total cost
   of raises. Employees earning $25,000 or less
   will receive a 5 per cent raise.  Employees earning
   between $25,001 and $35,000 will receive a 4 per cent
   raise.  Employees earning $35,001 or greater will receive
   a 3 per cent raise. Display each employee's raise and
   the total raises. */
/* Input the number of employees and each employee's salary. */
/* Display each employee's raise and the total cost of raises. */

//header files
/* use the correct preprocessor directives for input/output */
#include <iostream>
#include <iomanip>
using namespace std; //changed

// user-defined function prototypes
/* the function getNumber returns an integer value
   entered by the user giving the number of employees */
int getNumber();
/* the function getSalary returns a float value
   entered by the user giving the employee's salary */
double getSalary(int empNumber);
/* the function calcRaise returns the raise 
   calculated for the salary passed */
double calcRaise(double salary);
/* the function totalRaises returns the new
   total of raises using the current total and
   current raise being processed */
double totalRaises(double raise, double total);


int main()
{
	// declare variables
	/* declare an integer variable number to enter the 
	   number of employees, a float variable salary to
	   enter the current employee's salary, a float variable
	   raise to calculate raise amount, a float variable
	    total to accumulate the total of employee raises */
	int number;
	double salary, raise, total;

	// set the formatting for output
	cout << fixed << showpoint << setprecision(2);
	
	// instruct the user regarding use of the program
	//changed direction
	cout << "This program asks the user to enter the number "
		 << "of employees and\nthe individual salary for each "
		 << "employee.  \nThe individual employee's raise and " 
		 << "the total raises are displayed.\n"; 
	
	// assign to number the value returned from getNumber
	number = getNumber();

	// loop until all employees are processed
	for (int count = 1; count <= number; count++) //added <= instead of <
	{
		// assign to raise the value returned from getSalary
		salary = getSalary(count);
		cout << salary << endl; //testing each function's output
		// assign to raise the value returned from calcRaise
		raise = calcRaise(salary);
		cout << raise << endl; //testing each function's output
		// assign to total the accumulated raises
		total = totalRaises(total, raise);
		cout << total << endl; //testing each function's output
		// display current employee raise
		cout << "Employee " << count << " receives a raise of $" 
			 << raise << endl; //testing each function's output
	}

	// display total raises
	cout << "\n\nThe total cost of raises: $" << total << endl;


return 0;
}

/* the function getNumber returns an integer value
   entered by the user giving the number of employees */
int getNumber()
{
	// declare variables
	/* declare an integer variable number to enter the 
	   number of employees */
	int number;
	// prompt the user for the number of employees
	cout << "\nEnter the number of employees: ";
	// read in the number of employees
	cin >> number;
	// return the number of employees
	return number;

}

/* the function getSalary returns a float value
   entered by the user giving the employee's salary */
double getSalary(int empNumber)
{
	// declare variables
	/* declare an double variable salary to enter the 
	   individual employee's raise */
	double salary;
	// prompt the user for the employee salary
	cout << "\nEnter the salary for employee " 
		 << empNumber << ": ";
	// read in the employee salary
	cin >> salary;
	// return the employee salary
	return salary;
		
}

/* the function calcRaise returns the raise 
   calculated for the salary passed */
double calcRaise(double salary)  //fixed data type
{
	double raiseamt;
		/* test salary value to calculate raise and
	   return salary times percentage applicable */
	if (salary <= 25000) {
		raiseamt = salary * .05;
	} else if (salary <= 35000) {
		raiseamt = salary * .04;
	}else {
		raiseamt = salary * .03;
	}
	return raiseamt;
	//cout << raiseamt << endl;
}

/* the function totalRaises returns the new
   total of raises using the current total and
   current raise being processed */
double totalRaises(double raise, double total) //removed ; before the {}
{
	double finalamt;	
	finalamt = total + raise;
	//cout << finalamt << endl;
	return finalamt;

}
