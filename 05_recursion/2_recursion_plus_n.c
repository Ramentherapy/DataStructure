#include <stdio.h>

int func(int n)
{
	if(n > 0)
	{
		return func(n-1)+n;
	}
	return 0;
}

int main()
{
	int a = 10, b = 20;
	printf("func(%d) = %d\n", a, func(a));
	printf("func(%d) = %d\n", b, func(b));
	return 0;
}

// output:
// func(10) = 55
// func(20) = 210

