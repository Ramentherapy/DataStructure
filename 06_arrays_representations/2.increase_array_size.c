#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1, *p2;
	p1 = (int*)malloc(5*sizeof(int));
	p1[0] = 2, p1[1] = 5, p1[2] = 8, p1[3] = 11, p1[4] = 14;
	
	p2 = (int*)malloc(7*sizeof(int));
	
	for(int i = 0; i < 5; i++)
	{
		printf("p1[%d] = %d\n", i, p1[i]);
		p2[i] = p1[i];
	}
	
	free(p1);
	p1 = p2;
	p2 = NULL;
	
	printf("\n");
	for(int i = 0; i < 5; i++)
	{
		printf("p2[%d] = %d\n", i, p2[i]);
	}
	
	return 0;
}