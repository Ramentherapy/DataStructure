#include <stdio.h>

#define CASE 1

#if(CASE == 1)
void func(int* array, int num)
{
	int i;
	for(i = 0; i < num; i++)
	{
		printf("a[%d] = %d\n", i, array[i]);
	}
}
#endif

#if(CASE == 0)
void func(int array[], int num)
{
	int i;
	for(i = 0; i < num; i++)
	{
		printf("a[%d] = %d\n", i, array[i]);
	}
}
#endif

int main()
{
	int origin_array[5] = {1, 2, 3, 4, 5};
	printf("sizeof(origin_array[5]) = %ld\n", sizeof(origin_array[5]));
	printf("sizeof(origin_array) = %ld\n", sizeof(origin_array));
	func(origin_array, 5);
}

// output:

// sizeof(origin_array[5]) = 4
// sizeof(origin_array) = 20
// a[0] = 1
// a[1] = 2
// a[2] = 3
// a[3] = 4
// a[4] = 5

// two ways to pass parameter by address:
// general method:			void func(int* array, int num)
// point to array only:	void func(int array[], int num)