#include <stdio.h>
#include <stdlib.h>

#define case 0

struct my_array
{
	int *p;
	int length;
	int size;
};

#if(case == 0)
	
void display(struct my_array a)
{
	int i;
	printf("array elements as you can see show below:\n");
	for(i = 0; i < a.length; i++)
	{
		printf("%d ", a.p[i]);
	}
	printf("\n");
}

void insert(struct my_array *a, int b, int index)
{
	if(a->size > a->length && a->size > index)
	{
		int i;
		for(i = a->length; i > index; i--)
		{
			a->p[i] = a->p[i - 1];
		}
		a->p[index] = b;
		a->length++;
		
		printf("number 550 has been inserted to the array[3]\n");
		display(*a);
	}
}

void append(struct my_array *a, int b)
{
	if(a->size > a->length)
	{
		a->p[a->length] = b;
		a->length++;
	
		printf("number 555 has been appended to the array\n");
		display(*a);
	}
}

int delete(struct my_array *a, int index)
{
	
	if(index >= 0 && index < a->length)
	{
		int i;
		for(i = index; i < a->length-1; i++)
		{
			a->p[i] = a->p[i+1];
		}
		a->length--;
		return a->p[index];
	}
	return 0;
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
	display(arr);
	
	printf("now length is  %d \n", arr.length);
	append(&arr, 555);

	insert(&arr, 550, 3);

	printf("delete the value of index 2, now this value is %d\n", delete(&arr, 2));
	display(arr);
	printf("now length is  %d \n", arr.length);
	free(arr.p);
	
	return 0;
}
#endif



