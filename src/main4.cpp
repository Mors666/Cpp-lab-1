 
#include "task4.h"
 
#include <iostream>
 

using namespace std;

 

int main()
{
	char* a = new char[21]{ "99999999999999999999" };
	char* b = new char[22] { "100000000000000000000" };
	 
	char* result = sum(a, b);
	cout << result;


	 
    return 0;
}

