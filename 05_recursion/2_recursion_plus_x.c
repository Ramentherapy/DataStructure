#include <stdio.h>

#define CASE 0

#if(CASE == 1)
int x = 0;

int func(int n)
{
	if(n > 0)
	{
		x++;
		return func(n-1)+x;
	}
	return 0;
}

int main()
{
	int a = 5;
	printf("func(%d) = %d, x = %d\n", a, func(a), x);
	printf("x = %d\n", x);
	printf("func(%d) = %d, x = %d\n", a, func(a), x);
	printf("x = %d\n", x);
	printf("func(%d) = %d, x = %d\n", a, func(a), x);
	printf("x = %d\n", x);
	return 0;
}
#endif
// output:
// func(5) = 25, x = 0
// x = 5
// func(5) = 50, x = 5
// x = 10
// func(5) = 75, x = 10
// x = 15

#if(CASE == 0)
int func(int n)
{
	static int x = 0;
	if(n > 0)
	{
		x++;
		printf("x = %d\n", x);
		return func(n-1)+x;
	}
	return 0;
}

int main()
{
	int a = 5;
	printf("func(%d) = %d\n", a, func(a));
	printf("func(%d) = %d\n", a, func(a));
	return 0;
}
#endif
// output:
// x = 1
// x = 2
// x = 3
// x = 4
// x = 5
// func(5) = 25
// x = 6
// x = 7
// x = 8
// x = 9
// x = 10
// func(5) = 50

