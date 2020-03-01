#include <stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle r = {10, 15};
	r.length = 12;
	struct Rectangle *p = &r;
	
	p -> length = 13;
	printf("%d\n", r.length);
	(*p).length = 15;
	printf("%d\n", r.length);
	
	return 0;
}

// output:
// 13
// 15


// an existing variable to the pointer was pointing there

// two ways to access the member using pointer
// using (*p). to access member of structure is equal to using ->
// these two method can be used in C