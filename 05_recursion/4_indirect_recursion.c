#include <stdio.h>

void func_b(int n);

void func_a(int n)
{
	if(n > 0)
	{
		printf("%d ", n);
		func_b(n-1);
	}
}

void func_b(int n)
{
	if(n > 1)
	{
		printf("%d ", n);
		func_a(n/2);
	}
}

int main()
{
	int a = 20;
	func_a(a);
	printf("\n");
	
	return 0;
}