// Dan Siegel
// Program assignment Buggy.cpp
// Enter your class section, and time

#include <iostream>
#include <iomanip>

using namespace std;

int getNumber();
double getSalary(int empNumber);
double calcRaise(double salary);
double totalRaises(double raise, double total);

int main() {

	int number;
	double salary, raise, total;

	// set the formatting for output
	cout << fixed << showpoint << setprecision(2);
	
	// instruct the user regarding use of the program
	cout << "This program asks the user to enter the number " << "of employees and\nthe individual salary for each " << "employee.  \nThe individual employee's raise and " << "the total raises are displayed.\n"; 
	
	// assign to number the value returned from getNumber
	number = getNumber();

	// loop until all employees are processed
	for (int count = 1; count < number; count++)
	{
		// assign to raise the value returned from getSalary
		salary = getSalary(count);
		// assign to raise the value returned from calcRaise
		raise = calcRaise(salary);
		// assign to total the accumulated raises
		total = totalRaises(total, raise);

		// display current employee raise
		cout << "Employee " << count << " receives a raise of $" 
			 << salary << endl;
	}

	// display total raises
	cout << "\n\nThe total cost of raises: $" << raise << endl;


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
	return number;

}

/* the function getSalary returns a float value
   entered by the user giving the employee's salary */
double getSalary(int empNumber) {
	double salary;
	// prompt the user for the employee salary
	cout << "\nEnter the salary for employee " << empNumber << ": ";
	cin >> salary;
	return salary;
}

/* the function calcRaise returns the raise 
   calculated for the salary passed */
double calcRaise(double salary) {
	/* test salary value to calculate raise and
	   return salary times percentage applicable */
	if (salary <= 25000)
		return salary * .05;
	else if (salary <= 35000)
		return salary * .04;
	else
		return salary * .03;

}

/* the function totalRaises returns the new
   total of raises using the current total and
   current raise being processed */
double totalRaises(double raise, double total) {
	return total + raise;
}
