#include <iostream>
#include <cassert>

using namespace std;

int main(){
  double numerator, denominator, answer;

  cout << "Enter a numberator and a denominator: ";
  cin >> numerator >> denominator;
  cout << endl;

  answer = numerator / denominator;

  cout << "The decimal value of the numerator " << numerator << " divided by the denominator " << denominator << " is " << answer << endl;

  return 0;
}
