#include <stdio.h>

char* my_strcpy(char* des, const char* rsc)
{
	if(des == NULL)
	{
		return NULL;
	}
	char*rt = des;
	while(*rsc != '\0')
	{
		*des = *rsc;
		des++;
		rsc++;
	}
	*des = '\0';
	return rt;
}

char* my_strcpy2(char* des, const char* rsc)
{
	if(des == NULL)
	{
		return NULL;
	}
	char*rt = des;
	while((*des++ = *rsc++) != '\0');
	
	return rt;
}

int main(void)
{
	char a[] = "Winter";
	char b[30];
	char* s1 = my_strcpy2(b, a);
	printf("s1 = %s\n", s1);
	
	return 0;
}