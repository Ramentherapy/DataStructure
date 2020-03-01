#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int &b = a;
	cout << b << endl;
	b++;
	cout << a << endl;
	a++;
	cout << b << endl;
	
	return 0;
}


// 2
// 3
// 4