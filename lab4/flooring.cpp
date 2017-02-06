#include <iostream>
#include <string>

using namespace std;

int main (){
  int floorNumber;
  do {
    cout << "Enter the number that matches your flooring choice:" << endl;
    cout << "Option 1: Scored concrete for $3000" << endl;
    cout << "Option 2: Carpeting for $5000" << endl;
    cout << "Option 3: Wood floors in the living areas, carpeting in the bedrooms, and tile in the bath areas for $10,000" << endl;
    cout << "Enter 999 to exit" << endl;
    cin >> floorNumber;

    switch (floorNumber) {
      case 1:
        cout << string(50, '\n');
        cout << "You chose Option " << floorNumber << ": Scored concrete for $3000." << endl;
        break;
      case 2:
        cout << string(50, '\n');
        cout << "You chose Option " << floorNumber << ": Carpeting for $5000." << endl;
        break;
      case 3:
        cout << string(50, '\n');
        cout << "You chose Option " << floorNumber << ":  Wood floors in the living areas, carpeting in the bedrooms, and tile in the bath areas for $10,000." << endl;
        break;
      case 999:
        cout << "Goodbye" << endl;
        break;
      default:
        cout << string(50, '\n');
        cout << "You chose Option " << floorNumber << ":  Your selection is not available." << endl;
        break;
    }
  } while (floorNumber != 999);

  return 0;

}
