#include<iostream>
#include<string>

using namespace std;

int main(){
  char firstIn, middleIn, lastIn; //initials
  string firstNm, middleNm, lastNm; //Whole Name
  cout << "Enter your first name, middle name or initial, and last name separated by spaces:" << '\n';
  //First Name
  firstIn = cin.peek(); //uses peak, which grabs the next character in sequence without extracting it from the stream
  cin >> firstNm;
  //Middle Name, because we are no longer using get, we do not need to include the white space exclusion
  middleIn = cin.peek();
  cin >> middleNm;
  // Last Name
  lastIn = cin.peek();
  cin >> lastNm;

  cout << "\n Your Full Name is " << firstNm << ' ' << middleNm << ' ' <<  lastNm << '\n';
  cout << "\n Your Initials are:" << firstIn << middleIn << lastIn << '\n'; //prints the initials
  return 0;
}
