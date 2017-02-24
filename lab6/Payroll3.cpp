
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

double grossPay(double payRate, int hoursWorked);
void netPay(double grossAmt, double taxRate, double& netUpdate);

int main()
{
	ifstream payrollFile("payroll.txt");
	string name, line;
	int hours;
	int count = 1;
	double rate, tax, net, gross;
	double grossTotal = 0;
	double netTotal = 0;
	
	cout << fixed << showpoint << setprecision(2);
	cout << left << setw(10) << "Emp No" setw(25) << "Employee Name" << setw(20) << left << "Hourly Rate of Pay" << left << setw(15) << "Hours Worked" << left << setw(20)<< "Tax Rate" << setw(20) << "Gross Pay" << setw(15) << "Net Pay" << endl;
	while (!payrollFile.eof()) {
		
		getline(payrollFile, name, '#');
		getline(payrollFile, line, '\n');
		istringstream iss(line);
		iss >> rate >> hours >> tax;
		gross = grossPay(rate, hours);
		//name = line.substr(0, line.find('#'));
		//delimiter = name.length() + 1;
		//rate = line.substr(delimiter, line.find(' '));
		//hours = line.substr(delimiter + 4, delimiter + 5);	
		//tax = line.substr(delimiter + 7, delimiter + 8);
		//delimiter = delimiter + hours.length() + 1;
		//tax = line.substr(9,line.find('\0')); 
		if (name.length() > 1){
		cout << left < setw(10) << count << setw(25) << name << setw(20) << left << rate << setw(15) << hours << setw(20) << tax << setw(20) << gross << setw(15);
		netPay(gross, tax, net);
		grossTotal = grossTotal + gross;
		netTotal = netTotal + net;
		count++;
		}
	} 
	cout << right << setw(60) << "Gross Total " << setw(10) <<  grossTotal << setw (20) << " Net Total " << setw(10) << netTotal << endl;
	payrollFile.close();
	return 0;
}

double grossPay (double payRate, int hoursWorked) {
	double total;
	total = payRate * hoursWorked;
	return total;
	
}
void netPay(double grossAmt, double taxRate, double& netUpdate) {
	double rate, total;
	
	rate = (100 - taxRate);
	rate = rate/100;
	total = grossAmt * rate;
	cout << fixed << showpoint;
	cout << setprecision(2) << total << endl;
	netUpdate = total;
	}
