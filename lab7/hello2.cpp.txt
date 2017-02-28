#include <iostream>
using namespace std; 
namespace message {
	string greeting = "Hello World";

}


int main() {
	
	cout << message::greeting << endl;
	return 0;
}
