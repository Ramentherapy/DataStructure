#include <stdio.h>
#include <stdlib.h>

#define case 2

struct my_array
{
	int *p;
	int length;
	int size;
};

#if(case == 2)
	
void show(struct my_array a)
{
	int i;
	printf("array elements as you can see show below:\n");
	for(i = 0; i < a.size; i++)
	{
		printf("%d ", a.p[i]);
	}
	printf("\n");
}

int main(void)
{
	struct my_array arr;
	int i;
	
	printf("please enter a number to set the size of array\n");
	scanf("%d", &arr.size);
	
	arr.p = (int*)malloc(sizeof(int)*arr.size);
	
	printf("please enter a nunber to set the length of array\n");
	scanf("%d", &arr.length);
	
	printf("please enter the %d elements of array\n", arr.length);
	for(i = 0; i < arr.length; i++)
	{
		scanf("%d", &arr.p[i]);
	}
	show(arr);

	free(arr.p);
	
	return 0;
}
#endif

#if(case == 1)
int main(void)
{
	struct my_array arr;
	int i;
	
	printf("please enter a number to set the size of array\n");
	scanf("%d", &arr.size);
	
	arr.p = (int*)malloc(sizeof(int)*arr.size);
	
	printf("please enter a nunber to set the length of array\n");
	scanf("%d", &arr.length);
	
	printf("please enter the %d elements of array\n", arr.length);
	for(i = 0; i < arr.length; i++)
	{
		scanf("%d", &arr.p[i]);
	}
	
	printf("array elements as you can see show below:\n");
	for(i = 0; i < arr.size; i++)
	{
		printf("%d ", arr.p[i]);
	}
	printf("\n");
	free(arr.p);
	
	return 0;
}
#endif

#if(case == 0)
int main(void)
{
	struct my_array arr;
	int i;
	
	printf("please enter a number to set the size of array\n");
	scanf("%d", &arr.size);
	
	arr.p = (int*)malloc(sizeof(int)*arr.size);
	
	printf("please enter a nunber to set the length of array\n");
	scanf("%d", &arr.length);
	
	printf("please enter the %d elements of array\n", arr.length);
	for(i = 0; i < arr.length; i++)
	{
		scanf("%d", (arr.p+i));
	}
	
	printf("array elements as you can see show below:\n");
	for(i = 0; i < arr.size; i++)
	{
		printf("%d ", *(arr.p+i));
	}
	printf("\n");
	free(arr.p);
	
	return 0;
}
#endif