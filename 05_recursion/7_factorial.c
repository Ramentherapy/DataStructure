#include <stdio.h>

//recursive
int fact1(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return fact1(n-1)*n;
	}
}
//iterative
int fact2(int n)
{
	int i = 1, f = 1;
	for(i; i <= n; i++)
	{
		f = f*i;
	}
	return f;
}

int main()
{
	int a = 0;
	printf("0:f1 = %d\n", fact1(a));
	printf("0:f2 = %d\n", fact2(a));
	
	int a1 = 4;
	printf("4:f1 = %d\n", fact1(a1));
	printf("4:f2 = %d\n", fact2(a1));
	
	int a2 = 5;
	printf("5:f1 = %d\n", fact1(a2));
	printf("5:f2 = %d\n", fact2(a2));
	
	return 0;
}