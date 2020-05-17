#include <stdio.h>

//iterative
int sum1(int n)
{
	int i = 1;
	int sum = 0;
	
	for(i; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

//recursive
int sum2(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return sum2(n - 1) + n;
	}
}


int main()
{
	int a = 5;
	printf("s1 = %d\n", sum1(a));
	printf("s2 = %d\n", sum2(a));
	return 0;
}