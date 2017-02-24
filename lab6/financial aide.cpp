
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

double aidCalc (double validgpa, double validtuition);

int main()
{
	double gpa, tuition, aidamt;
	
	cout << "Enter A GPA: ";
	cin >> gpa;
	cout << endl;
	
	cout << "Enter a tuiton amount less than 2000: ";
	cin >> tuition;
	cout << endl;
	
	if (gpa >= 2.0 && tuition <= 2000) 
	{
		aidamt = aidCalc(gpa, tuition);
	}
	else if (gpa < 2.0)
		
		cout << "your gpa is too low for aide";
	else {
		cout << "too high";
	}
	cout << aidamt << endl; 
	return 0;
}

double aidCalc (double validgpa, double validtuition) {
	double total, tuitionforths; 
	tuitionforths = validtuition / 4;
	total = tuitionforths * validgpa;
	if (3.0 > validgpa )
		{
		if ((validtuition / 2) < total ) {
			total = (validtuition / 2);
			}
		}
	return total; 
	}
	
