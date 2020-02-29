#include  <stdio.h>

struct Student
{
	int Tel;
	int Height;
	char* Name;
	char* Email;
};

int main()
{
	struct Student s1;
	
	s1.Tel = 123456;
	s1.Height = 177;
	s1.Name = "Liu";
	s1.Email = "Benq@xx.com";
	
	printf("s1.Tel = %d\n", s1.Tel);
	printf("s1.Height = %d\n", s1.Height);
	printf("s1.Name = %s\n", s1.Name);
	printf("s1.Email = %s\n", s1.Email);
	
	return 0;
}