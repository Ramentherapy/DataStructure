#include <stdio.h>

#define CASE 1

#if(CASE == 1)
void func(int* array, int num)
{
	array[0] = 15;
}
#endif

int main()
{
	int origin_array[5] = {1, 2, 3, 4, 5};
	printf("a[0] = %d\n", origin_array[0]);
	func(origin_array, 5);
	printf("a[0] = %d\n", origin_array[0]);
}

// output:

// a[0] = 1
// a[0] = 15
