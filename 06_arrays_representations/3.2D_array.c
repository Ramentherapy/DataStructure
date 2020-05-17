#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3][4] = {{1, 3, 5, 7},{2, 4, 6, 8},{2, 3, 4, 5}}; 
	int i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("a[%d][%d] = %d	", i, j, a[i][j]);
		}
		printf("\n");
	}
	
	printf("-------------------------------\n");
	
	int *b[3];
	b[0] = (int*)malloc(4*sizeof(int));
	b[1] = (int*)malloc(4*sizeof(int));
	b[2] = (int*)malloc(4*sizeof(int));
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("b[%d][%d] = %d	", i, j, b[i][j]);
		}
		printf("\n");
	}
	free(b[0]);
	free(b[1]);
	free(b[2]);
	printf("-------------------------------\n");
	
	int **c;
	c = (int**)malloc(3*sizeof(int*));
	c[0] = (int*)malloc(4*sizeof(int));
	c[1] = (int*)malloc(4*sizeof(int));
	c[2] = (int*)malloc(4*sizeof(int));
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("c[%d][%d] = %d	", i, j, c[i][j]);
		}
		printf("\n");
	}
	free(c);
	free(c[0]);
	free(c[1]);
	free(c[2]);
	return 0;
}