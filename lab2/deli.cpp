//Dan Siegel
//Deli.cpp
//CS161 Winter 2017

// program that prompts the user to select a lunch from several sandwich choices
// Expected Input
// Expected Output

//header files
  #include <iostream>
  #include <string>
  using namespace std;

  int main()
  {
    // Declaration of Variables:
    string sandwichChoices, breadChoice, condimentChoice, drinkChoice;
    double sandwichSize;

    // Explains to the user the purpose of the program
    cout << "Welcome to the Sandwich Corral.\n" << "You will be given choices for building your sandwich." << endl;

    //Explains choices of sandwich and adds to the initialized varaiable sandwichChoices
    cout << "Please enter your sandwich choice\n" << "Ham, Beef, Reuben, PBJ, Cheese, or Vegetarian: ";
    cin >> sandwichChoices;

    cout << "Please enter your bread choice\n" << "Rye, Wheat, White, Sourdough, or Pumpernickel:";
    cin >> breadChoice;

    cout << "Please enter your choice of condiment (one only)\n" << "Mayo, Mustard, Ketchup, or none: ";
    cin >> condimentChoice;

    cout << "Please enter your drink choice\n" << "Coke, Diet, Tea, Coffee, or Water: ";
    cin >> drinkChoice;

    cout << "Please enter 3.99 for a half sandwich or 5.99 for a whole sandwich: ";
    cin sandwichSize;

    //Prints out the collected Variables
    cout << "\n You have entered the following information:\n" << "\n Sandwich:\t" << sandwichChoices << "\n Bread:\t" << breadChoice << "\n Condiment:\t" << condimentChoice << "\n Drink: " << drinkChoice << "\n Tab:\t" << sandwichSize << endl
    return 0;
  }
