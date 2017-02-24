
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

double grossPay(double payRate, int hoursWorked);
void netPay(double grossAmt, double taxRate);

int main()
{
	ifstream payrollFile("payroll.txt");
	string name, line;
	int hours;	
	double rate, tax, net, gross;
	
	cout << left << setw(25) << "Employee Name" << setw(20) << left << "Hourly Rate of Pay" << left << setw(12) << "Hours Worked" << left << setw(10)<< "Tax Rate" << setw(9) << "Gross Pay" << setw(10) << "Net Pay" << endl;
	while (!payrollFile.eof()) {
		
		getline(payrollFile, name, '#');
		getline(payrollFile, line, '\n');
		istringstream iss(line);
		iss >> rate >> hours >> tax;
		gross = grossPay(rate, hours);
		//net = netPay(gross, tax); 
		name = line.substr(0, line.find('#'));
		//delimiter = name.length() + 1;
		//rate = line.substr(delimiter, line.find(' '));
		//hours = line.substr(delimiter + 4, delimiter + 5);	
		//tax = line.substr(delimiter + 7, delimiter + 8);
		//delimiter = delimiter + hours.length() + 1;
		//tax = line.substr(9,line.find('\0')); 
		if (name.length() > 1){
		cout << left << setw(25) << name << setw(20) << left << rate << setw(10) << hours << setw(10) << tax << setw(10) << gross  << setw(10);
		netPay(gross, tax);
		}
	} 
	payrollFile.close();
	return 0;
}

double grossPay (double payRate, int hoursWorked) {
	double total;
	total = payRate * hoursWorked;
	return total;
	
}
void netPay(double grossAmt, double taxRate) {
	double rate, total;
	
	rate = (100 - taxRate);
	rate = rate/100;
	total = grossAmt * rate;
	cout << fixed << showpoint;
	cout << setprecision(2) << total << endl;;
	}
