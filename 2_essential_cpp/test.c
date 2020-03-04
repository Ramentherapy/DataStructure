#include <stdio.h>
#include <malloc.h>
void out (int *p, int n){
    int i;
    for (i=0; i<n; i++ )
    {
        printf("%d\n",*(p+i));
    }
}
int main(int argc, char *argv[])
{
    int len;
    printf("Please enter the expected number of dynamic memory\n");
    scanf("%d", &len);
    int * p = (int *) malloc(sizeof(int) * len);

    *p = 4;
    p[1] = 2;
    p[2] = 4;

    out(p, 3);
    for(int i = 0; i < 8; i++)
    {
	printf("**************\n");
	printf("p[%d] = %d\n", i, p[i]);	
    }
    free(p);
    return 0;
}
