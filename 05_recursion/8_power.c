#include <stdio.h>

int pow1(int m, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return pow1(m, n-1)*m;
	}
}

int pow2(int m, int n)
{
	if(n == 0)
	{
		return 1;
	}
	if(n%2 == 0)
	{
		return pow2(m*m, n/2);
	}
	else
	{
		return m*pow2(m*m, (n-1)/2);
	}
}


int main()
{
	int a = 3, b = 4;
	printf("pow1(3, 4) = %d\n", pow1(a, b));
	printf("pow2(3, 4) = %d\n", pow1(a, b));
	
	return 0;
}

// output:

// pow1(3, 4) = 81
// pow2(3, 4) = 81
