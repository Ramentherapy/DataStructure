#include <iostream>
#define CASE 3

using namespace std;

#if(CASE == 3)
struct rectangle
{
	int length;
	int breadth;
};

void change_length(struct rectangle *r1, int l1)
{
	//two ways to access  struct member by pointer
	// (*r1).length = l1;
	r1 -> length = l1;
}

int main()
{
	struct rectangle r = {16, 17};
	cout << "r.length = " << r.length << endl;
	change_length(&r, 25);
	cout << "r.length = " << r.length << endl;
	
	return 0;
}
#endif
/*
CASE3 output:

r.length = 16
r.length = 25

*/

#if(CASE == 2)
struct rectangle
{
	int length;
	int breadth;
};

void change_length(struct rectangle &r1, int l1)
{
	r1.length = l1;
}

int main()
{
	struct rectangle r = {15, 17};
	cout << "r.length = " << r.length << endl;
	change_length(r, 25);
	cout << "r.length = " << r.length << endl;
	
	return 0;
}
#endif
/*
CASE2 output:

r.length = 15
r.length = 25

*/

#if(CASE == 1)
struct rectangle
{
	int a[5];
	int b;
};

void change_array_struct(struct rectangle r1)
{
	r1.a[0] = 1;
	r1.a[1] = 2;
	printf("r1.a[0] = %d, r1.a[1] = %d\n", r1.a[0], r1.a[1]);
}

int main()
{
	struct rectangle r = {{21, 12, 33, 45, 89}, 16};
	printf("r.a[0] = %d, r.a[1] = %d\n", r.a[0], r.a[1]);
	change_array_struct(r);
	printf("r.a[0] = %d, r.a[1] = %d\n", r.a[0], r.a[1]);
	
	return 0;
}
#endif
/*
CASE1 output:

r.a[0] = 21, r.a[1] = 12
r1.a[0] = 1, r1.a[1] = 2
r.a[0] = 21, r.a[1] = 12

*/

#if(CASE == 0)
struct rectangle
{
	int length;
	int breadth;
};	

void change_length(struct rectangle* r1, int a)
{
	r1 -> length = a;
}

int main()
{
	struct rectangle r = {25, 30};
	printf("r.length = %d, r.breadth = %d\n", r.length, r.breadth);
	change_length(&r, 20);
	printf("r.length = %d, r.breadth = %d\n", r.length, r.breadth);
	
	return 0;
}
#endif
/*
CASE0 output:

r.length = 25, r.breadth = 30
r.length = 20, r.breadth = 30

*/