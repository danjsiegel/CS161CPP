#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

int main() {
  string date;
  double highTemp, lowTemp, averageTemp;
  
  ofstream out("temps.txt"); //declaration of the output file 
  
  cout << "Enter the day with dashes ex: 11-12-16" << endl;
  cin >> date;
  cout << "Enter a hight and a low temperature separated by a space" << endl;
  cin >> highTemp >> lowTemp;
  averageTemp = (highTemp + lowTemp)/2;
  
  out << date << '\t' << highTemp << '\t' << lowTemp << '\t' << averageTemp << endl; //instead of cout, out is used which writes to the declared file. If non exists, it creates it. 
  out.close(); //closes the file it creates 
  return 0;
}
