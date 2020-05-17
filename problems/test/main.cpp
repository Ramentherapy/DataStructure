#include <iostream>

using namespace std;

void print(void)
{
cout << "function print" << endl; 
}

int main(void)
{
char *a = "testing";
int tag = 50;
tag++;
a[0] = 'a';
print();
cout << "hello" << endl;
cout << "value of tag = " << tag << endl;
return 0;
}
