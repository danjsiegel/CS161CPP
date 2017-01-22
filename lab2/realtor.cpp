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
    double cost_of_house;
    const double cost_to_sell = .06 * cost_of_house;
    const double comission = .25 * cost_to_sell;

    // Collects Last Name
    cout << "Please enter the owner’s last name: ";
    //Collects values to put into the initialized variables
    cin >> lastName >> endl;
    cout << "Please enter the sales price of the home:";
    cin >> cost_of_house >> endl;
    cout >> "The " >> lastName >> "'s\' home sold for "  >> cost_of_house >> endl;
    cout >> "The cost to sell the home is" >> cost_to_sell >> endl;
    cout >> "The selling or listing agent commission is " >> comission >> endl;
