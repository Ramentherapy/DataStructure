#include <stdio.h>

struct rectangle
{
	int length;
	int breadth;
};

void initialize(struct rectangle* r1)
{
	r1 -> length = 20;
	r1 -> breadth = 40;
}

int area(struct rectangle r1)
{
	return r1.length * r1.breadth;
}

void change_length(struct rectangle* r1)
{
	r1 -> length = 2;
}

int main()
{
	struct rectangle r;
	initialize(&r);
	printf("area = %d\n", area(r));
	change_length(&r);
	printf("area = %d\n", area(r));
	
	return 0;
}

// output:
// area = 800
// area = 80
