#include<iostream>
#include<string>

using namespace std;

int main(){
  char firstIn, middleIn, lastIn; //initials
  string firstNm, middleNm, lastNm; //Whole Name
  cout << "Enter your first name, middle name or initial, and last name separated by spaces:" << '\n';
  //First Name
  firstIn = cin.get(); //cin.get grabs the first character of the input
  cin.putback(firstIn); //Put's back the value grabbed in first variable
  cin >> firstNm;
  //Middle Name
  cin.ignore(3, ' '); //tell's the input to ignore white space character.
  middleIn = cin.get(); //grabs the first character of the input
  cin.putback(middleIn);
  cin >> middleNm;
  // Last Name
  cin.ignore(3, ' '); //ignores the first 15 characters or until a white space character.
  lastIn = cin.get();
  cin.putback(lastIn);
  cin >> lastNm;

  cout << "\n Your Full Name is " << firstNm << ' ' << middleNm << ' ' <<  lastNm << '\n';
  cout << "\n Your Initials are:" << firstIn << middleIn << lastIn << '\n'; //prints the initials
  return 0;
}
