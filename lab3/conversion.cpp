#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string date;
  double highTemp, lowTemp, averageTemp;

  ofstream in("temps.txt"); //declaration of the input file
  ofstream out("celsius.txt"); //declaration of the output file

  in >> date >> highTemp >> lowTemp >> averageTemp;

  cout << date << '\t' << highTemp << '\t' << lowTemp << '\t' << averageTemp << end;
  return 0;
}
