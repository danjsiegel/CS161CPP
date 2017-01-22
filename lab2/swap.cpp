//Dan Siegel
//swap.cpp
//CS161 Winter 2017

// Collects first and last names and swaps the variables
// Expected Input: First Name and Last Name
// Expected Output: Last Name and First namespace

//header files
  #include <iostream>
  #include <string>
  using namespace std;

  int main()
  {
    // Declaration of Variables:
    string firstName, lastName, swapFn, swapLn;

    // Explains to users the expected input data for the program to work, in this case it is first and last name
    cout << "Enter two names separated by a space: ";
    //Collects values to put into the initialized variables
    cin >> firstName >> lastName;

    //prints the initial values of first and last names
    cout << "First name is: " << firstName << endl;
    cout << "Last name is: " << lastName << endl;

    //Set the variables to temporary variables so that you can swap the values
    firstName = swapFn;
    lastName = swapLn;
    cout << swapFn << swapLn << endl;
    //firstName = swapLn;
    //lastName = swapFn;

    //Prints the swapped varaibles
    //cout << "First name is: " << firstName << swapFn << endl;
    //cout << "Last name is: " << lastName << swapLn << endl;

    return 0;
  }
