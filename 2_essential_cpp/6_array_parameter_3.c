#include <stdio.h>
#include <stdlib.h>

#define CASE 1

#if(CASE == 1)
int* func(int n)
{
	int *buffer = (int*)malloc(n*sizeof(int));
	return buffer;
}
#endif

#if(CASE == 0)
int [] func(int n)
{
	int *buffer = (int*)malloc(n*sizeof(int));
	return buffer;
}
#endif

int main()
{
	int* p;
	func(5);
	p = func(5);
}

// when CASE == 0 , it will be error
// because almost all compiler will not support the return value type "int []"