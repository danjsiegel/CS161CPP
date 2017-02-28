#include <iostream>
#include <string.h>
#include <string>
#include <sstream>

using namespace std;

typedef char shortint;
typedef short integer;
typedef long longint;

int main(){

	cout << "The size of shortint on this computer is " <<  sizeof(shortint) << endl;
	cout << "The size of integer on this computer is " << sizeof(integer) << endl;
	cout << "The size of longint on this computer is " << sizeof(longint) << endl;

return 0;
}

