#include <stdio.h>

#define CASE 2

#if(CASE == 2)
void swap(int &a, int &b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int x = 0, y = 2;
	printf("a = %d, b = %d\n", x, y);
	swap(x, y);
	printf("a = %d, b = %d\n", x, y);
	
	return 0;
}
#endif

#if(CASE == 1)
void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int x = 0, y = 2;
	printf("a = %d, b = %d\n", x, y);
	swap(&x, &y);
	printf("a = %d, b = %d\n", x, y);
	
	return 0;
}
#endif

#if(CASE == 0)
void swap(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int x = 0, y = 2;
	printf("a = %d, b = %d\n", x, y);
	swap(x, y);
	printf("a = %d, b = %d\n", x, y);
	
	return 0;
}
#endif