//Dan Siegel
//realtor.cpp
//CS161 Winter 2017

// Collects  last name and cost of house and calculates the cost to sell the home and the comissions
// Expected Input:  Last Name, Cost of House
// Expected Output: Cost of house, cost to sell, comission

//header files
  #include <iostream>
  #include <string>
  #include <iomanip>
  using namespace std;

  int main()
  {
    // Declaration of Variables:
    string lastName;
    double cost_of_house, price_of_sale, price_of_comission;
    const double cost_to_sell = 0.06;
    const double comission = 0.25;

    // Collects Last Name
    cout << "Please enter the owner’s last name: ";
    cin >> lastName;
    cout << "Please enter the sales price of the home:";
    cin >> cost_of_house;
    //fills in variables for price and comission based on percentages laid out in the assignment. Constants used so that if cost or comission percentage change, they can be updated when they are initialized
    price_of_sale = cost_to_sell * cost_of_house;
    price_of_comission =  price_of_sale * comission;
    cout << "Home Owner\t Price of Home\t Seller's Cost\t Agent's Commission" << endl;
    cout << setw(10) << right << name;
    cout << setw(15) << right << cost_of_house;
    cout << setw(14) << right << price_of_sale;
    cout << setw(20) << right << price_of_comission;

    return 0;
  }
