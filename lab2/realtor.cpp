//Dan Siegel
//realtor.cpp
//CS161 Winter 2017

// Collects  last name and cost of house and calculates the cost to sell the home and the comissions
// Expected Input:  Last Name, Cost of House
// Expected Output: Cost of house, cost to sell, comission

//header files
  #include <iostream>
  #include <string>
  using namespace std;

  int main()
  {
    // Declaration of Variables:
    string lastName;
    double cost_of_house, price_of_sale, price_of_comission;
    const double cost_to_sell = 0.06;
    const double comission = 0.25;

    cout.precision(2);

    // Collects Last Name
    cout << "Please enter the owner’s last name: ";
    //Collects values to put into the initialized variables
    cin >> lastName;
    cout << "Please enter the sales price of the home:";
    cin >> cost_of_house;
    //fills in variables for price and comission based on percentages laid out in the assignment. Constants used so that if cost or comission percentage change, they can be updated when they are initialized
    price_of_sale = cost_to_sell * cost_of_house;
    price_of_comission =  price_of_sale * comission;
    cout << fixed << "The " << lastName << "\'s home sold for "  << cost_of_house  << endl;
    cout << fixed << "The cost to sell the home is " << price_of_sale << endl;
    cout << fixed << "The selling or listing agent commission is " << price_of_comission << endl;

    return 0;
  }
