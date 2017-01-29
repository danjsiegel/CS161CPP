#include<iostream>
using namespace std;

int main(){
  string first, middle, last;
  cout << "Enter your first name, middle name or initial, and last name separated by spaces: Jane Ann Do" << '\n';
  first = cin.get(); //cin.get grabs the first character of the input
    cin.ignore(15, ' '); //tell's the input to ignore until either 15 characters or until a white space character.
  middle = cin.get(); //grabs the first character of the input
   cin.ignore(15,' '); //ignores the first 15 characters or until a white space character.
  last = cin.get();
   cout << '\n' << first << middle << last << '\n'; //prints the initials
  return 0;
}
