#include <iostream>

#define VERSION 1

using namespace std;

#if(VERSION == 1)
class rectangle
{
private:
	int length;
	int breadth;
	
public:
	rectangle(int l1, int b1)
	{
		length = l1;
		breadth = b1;
	}

	int area()
	{
		return length * breadth;
	}

	void change_length(int l1)
	{
		length = l1;
	}
};

int main()
{
	rectangle r(10, 15);
	printf("area = %d\n", r.area());
	r.change_length(2);
	printf("area = %d\n", r.area());
	
	return 0;
}
#endif
//version1 output:
// area = 150
// area = 30

#if(VERSION == 0)
class rectangle
{
private:
	int length;
	int breadth;

public:
	void initialize(int l1, int b1)
	{
		length = l1;
		breadth = b1;
	}

	int area()
	{
		return length * breadth;
	}

	void change_length(int l1)
	{
		length = l1;
	}
};

int main()
{
	rectangle r;
	r.initialize(10, 15);
	printf("area = %d\n", r.area());
	r.change_length(2);
	printf("area = %d\n", r.area());
	
	return 0;
}
#endif
//version0 output:
// area = 150
// area = 30

