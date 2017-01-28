#include<iostream>
using namespace std;

int main(){
  string first, middle, last;
  cout << "Enter your first name, middle name or initial, and last name separated by spaces: Jane Ann Do" << '\n';
  first = cin.get();
    cin.ignore(256, ' ');
  middle = cin.get();
   cin.ignore(256,' ');
  last = cin.get();
   cout << '\n' << first << middle << last << '\n';
  return 0;
}
