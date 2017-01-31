#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string date;
  double highTemp, lowTemp, averageTemp, celHigh, celLow, celAverage;

  ifstream in("temps.txt"); //declaration of the input file
  ofstream out("celsius.txt"); //declaration of the output file

  in >> date  >> highTemp >> lowTemp >> averageTemp; //Declares Variables coming in from our text file

  //Temperature Conversion Block
  celHigh = (highTemp -32.0) * (5.0/9.0);
  celLow = (lowTemp - 32.0) * (5.0/9.0);
  celAverage = (averageTemp - 32.0) * (5.0/9.0);

  //output of the code
  out << date << '\t' << celHigh << '\t' << celLow << '\t' << celAverage << endl;
  //closing of the documents  
  in.close();
  out.close();
  return 0;
}
