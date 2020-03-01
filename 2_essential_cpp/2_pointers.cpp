#include <iostream>

using namespace std;

int main()
{
	int* p;
	p = new int [5];
	cout << sizeof(p) << endl;
	
	return 0;
}

// output: 8
// feature of 'new' is the same as 'malloc', 'new'  can only be used in C++