#include <iostream>
#include <string>

using namespace std;

int main (){
  int modelNumber;
  do {
    cout << "Enter the model number of your choice:" << endl;
    cout << "Model 100: Remote control, timer, and stereo for $1000" << endl;
    cout << "Model 200: The same as Model 100, plus picture-in-picture, for $1200" << endl;
    cout << "Model 300: The same as Model 200, plus HDTV, flat screen, and a 16 x 9 aspect ratio, for $2400" << endl;
    cout << "Enter 999 to exit" << endl;
    cout << "Enter the model number of your choice: ";
    cin >> modelNumber;

    switch (modelNumber) {
      case 100:
        cout << "You chose Model 100 TV with these features:" << '\n' << "remote control, timer, and stereo sound." << '\n' << "Your price will be $1000." << endl;
        break;
      case 200:
        cout << "You chose Model 200 TV with these features:" << '\n' << "picture-in-picture, remote control, timer, and stereo sound" << '\n' << "Your price will be $1200" << endl;
        break;
      case 300:
        cout << "You chose Model 300 TV with these features:" << '\n' << "HDTV, flat screen, 16 x 9 aspect ratio, picture-in-picture, remote control, timer, and stereo sound" << '\n' << "Your price will be $2400." << endl;
        break;
      case 999:
        cout << "Goodbye" << endl;
        break;
      default:
        cout << "Not a valid choice." << endl;
        break;
    }
  } while (modelNumber != 999);

  return 0;

}
