#include <iostream>
#include <fstream>

int main() {
  string date;
  double highTemp, lowTemp, averageTemp;
  ofstream out("temps.txt");
  cout << "Enter the day with dashes ex: 11-12-16" << endl;
  cin >> date;
  cout << "Enter a hight and a low temperature separated by a space" << endl;
  cin >> highTemp >> lowTemp;
  averageTemp = (highTemp + lowTemp) / 2;
  cout << date << highTemp << lowTemp << averageTemp;
  return 0;
}
