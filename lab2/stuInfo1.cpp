//Dan Siegel
//stuInfo1.cpp
//CS161 Winter 2017

// Purpose of program
// Expected Input
// Expected Output

//header files
  #include <iostream>
  #include <string>
  using namespace std;

  int main()
  {
    // Declaration of Variables:
    string firstName, lastName, classification, major;
    double gpa;

    // Explains to users the expected input data for the program to work, in this case it is first and last name
    cout << "Please enter your first name and last name separated by a space.\n" << "Limit your input to 2 names. ";
    //Collects values to put into the initialized variables
    cin >> firstName >> lastName;
    // Explains to users the expected input data for the program to work, in this case it is the educational status
    cout << "Please enter your classification:\n" << "freshman, sophomore, junior, senior, special, or graduate: ";
    //Collects the value in puts it into the initialized variable
    cin >> classification;

    //Explains to users the expected input data for the program to work, in this case it is major
    cout << "Please enter your major (one word only): ";
    //Collects the value in puts it into the initialized variable
    cin >> major;

    //Explains to users the expected input data for the program to work, in this case it is gpa
    cout << "Please enter your grade point average: ";
    //Collects the value in puts it into the initialized variable
    cin >> gpa;

    //Prints out the collected Variables
    cout << "\n You have entered the following information:\n" << "\n Classification:\t" << classification << "\n Major:\t\t" << major << "\n Gpa:\t\t" << gpa << endl;

    return 0;
  }
