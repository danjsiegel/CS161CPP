#include <iostream>
using namespace std;

int main(){
  int age;
  double price = 8.00;
  char coupon;

  cout << "What is your age: ";
  cin >> age;
  cout << "Do you have a coupon? [Y/N]: ";
  cin >> coupon;

  if (age <= 17) {
    price = 6.00;
  }
  if (coupon == 'Y' || coupon == 'y'){
    price = price * .75;
  }

  cout << "Your Ticket price is: " << price << endl;

	return 0;
}
