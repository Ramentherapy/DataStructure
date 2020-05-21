#include <stdio.h>
#include <stdlib.h>
struct arr
{
	int p[30];
	int length;
	int size;
};

void display(struct arr a)
{
	int i;
	for(i = 0; i < a.length; i++)
	{
		printf("%d ", a.p[i]);
	}
	printf("\n");
}

int get(struct arr a, int index)
{
	if(index >= 0 && index < a.length)
	{
		return a.p[index];
	}
	return -1;
}

void set(struct arr *a, int index, int x)
{
	if(index >= 0 && index < a->length)
	{
		a->p[index] = x;
	}
}

int max(struct arr a)
{
	int i;
	int max = a.p[0];
	for(i = 1; i < a.length; i++)
	{
		if(a.p[i] > max)
		{
			max = a.p[i];
		}
	}
	return max;	
}

int min(struct arr a)
{
	int i;
	int min = a.p[0];
	for(i = 1; i < a.length; i++)
	{
		if(a.p[i] < min)
		{
			min = a.p[i];
		}
	}
	return min;	
}

int sum(struct arr a)
{
	int i;
	int sum = 0;
	for(i = 0; i < a.length; i++)
	{
		sum += a.p[i];
	}
	return sum;
}

int recursive_sum(struct arr a, int sum)
{
	if(a.length == 0)
	{
		return sum;
	}
	else
	{
		a.length--;
		sum += a.p[a.length];
		return recursive_sum(a, sum);
	}
}

int recursive_sum2(struct arr a, int n)
{
	if(n < 0)
	{
		return 0;
	}
	else
	{
		return recursive_sum2(a, n-1)+a.p[n];
	}
}

float average(struct arr a)
{
	int i;
	int sum = 0;
	for(i = 0; i < a.length; i++)
	{
		sum += a.p[i];
	}
	
	float aver = (float)sum/(a.length);
	return aver;
}

void my_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(struct arr *a)
{
	int i, j;
	int *p = (int*)malloc(sizeof(int)*(a->length));
	for(i = 0, j = a->length-1; i < a->length; i++, j--)
	{
		p[i] = a->p[j];
	}
	for(i = 0; i < a->length; i++)
	{
		a->p[i] = p[i]; 
	}
}

void reverse2(struct arr *a)
{
	int i, j;
	for(i = 0, j = a->length-1; i > j; i++, j--)
	{
		my_swap(&a->p[i], &a->p[j]);
	}
}

int main(void)
{
	struct arr a1 = {{0, 2, 3, 4, 7, 9}, 6, 7};
	struct arr a2 = {{5, 7, 8, 6, 1, 2, 5}, 7, 8};
	
	display(a1);
	reverse(&a1);
	display(a1);
	
	display(a2);
	reverse(&a2);
	display(a2);
	
	int rt0 = recursive_sum(a2, 0);
	printf("recursive_sum(a2, 0) = %d\n", rt0);
	int rt1 = recursive_sum2(a1, 5);
	printf("recursive_sum2(a1, 0) = %d\n", rt1);
	return 0;
}