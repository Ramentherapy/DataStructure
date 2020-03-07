#include <stdio.h>

void func(int n)
{
	if(n > 0)
	{
		printf("%d\n", n);
		func(n-1);
		printf("%d\n", n);
	}
}

int main()
{
	int x = 3;
	func(3);
	
	return 0;
}