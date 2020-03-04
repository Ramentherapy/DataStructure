#include  <stdio.h>

#define CASE 2

struct Student
{
	int Tel;
	int Height;
	char* Name;
	char* Email;
};

#if(CASE == 2)
int main()
{
	struct Student class1[30] = { {313233, 176, "John", "Xbox@xxx.com"}, {214233, 178, "Mike", "Ps@xxx.com"}};
	printf("stu1 tel %d and name %s\n", class1[0].Tel, class1[0].Name);
	printf("stu2 tel %d and name %s\n", class1[1].Tel, class1[1].Name);
	printf("stu1 email address: %s\n", class1[0].Email);
	printf("stu2 email address: %s\n", class1[1].Email);
	
	return 0;
}
#endif

#if(CASE == 1)
int main()
{
	struct Student s1;
	
	printf("s1.Tel = %d\n", s1.Tel);
	printf("s1.Height = %d\n", s1.Height);
	printf("s1.Name = %s\n", s1.Name);
	printf("s1.Email = %s\n", s1.Email);
	
	return 0;
}
#endif


#if(CASE == 0)
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
#endif