
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{
	ifstream payrollFile("payroll.txt");
	string name, line;
	int hours;	
	double rate, tax;

	cout << "Employee Name" << "\t" << "Hourly Rate of Pay" << "\t" << "Hours Worked" << "\t" << "Tax Rate" << "\t" << "Gross Pay" << "\t" << "Net Pay" << endl;
	while (!payrollFile.eof()) {
		
		getline(payrollFile, name, '#');
		getline(payrollFile, line, '\n');
		istringstream iss(line);
		iss >> rate >> hours >> tax;
		//name = line.substr(0, line.find('#'));
		//delimiter = name.length() + 1;
		//rate = line.substr(delimiter, line.find(' '));
		//hours = line.substr(delimiter + 4, delimiter + 5);	
		//tax = line.substr(delimiter + 7, delimiter + 8);
		//delimiter = delimiter + hours.length() + 1;
		//tax = line.substr(9,line.find('\0')); 
		if (name.length() > 1){
		cout << name << "\t" << rate << "\t" << hours << "\t" << tax << endl;
		}
	} 
	payrollFile.close();
	return 0;
}

