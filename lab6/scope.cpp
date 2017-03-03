#include <iostream>
#include <iomanip>
using namespace std; 
int num1 = 10;
int num2 = -5;

void parameters(int firstNum, int secondNum);
void useGlobal (); 

int main(){
	{
		cout << "block1 " << endl;
		int num1 = 20;
		int num2 = 13;
		parameters(num1, num2);
		parameters(num2, num1);
		useGlobal ();
	}
	
	{
		cout << "block2 " << endl;
		int num1 = 94;
		int num2 = 50;
		parameters(num1, num2);
		parameters(num2, num1);
		useGlobal ();
	}
	{
		cout << "block3 " << endl;
		parameters(num1, num2);
		parameters(num2, num1);
		useGlobal ();
	}

return 0;
}

void parameters(int firstNum, int secondNum){
	int num1 = firstNum;
	int num2 = secondNum;
	cout << "Parameters Num 1: " << num1 << endl;
	cout << "Parameters Num 2: " << num2 << endl;
}
void useGlobal (){
	cout << "Global Num 1: " << num1 << endl;
	cout << "Global Num 2: " << num2 << endl;
}
