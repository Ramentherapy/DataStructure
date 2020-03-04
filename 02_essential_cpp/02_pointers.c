#include <stdio.h>
#include <stdlib.h>

struct measure
{
	int* p;
};

int main()
{
	struct measure m1;

	m1.p = (int*)malloc(5*sizeof(int));
	printf("sizeof(*m1.p) = %ld\n", sizeof(*m1.p));
	printf("sizeof(m1.p) = %ld\n", sizeof(m1.p));

	return 0;
}

// output: 
// sizeof(*m1.p) = 4, similar to: sizeof(int) = 4
// sizeof(m1.p) = 8

// priority in C/C++: '.' > '*'


// 在定义 int *p 时，p占有内存空间是系统分配，
// 但是位于栈区（栈区变量空间的存在依赖于变量的生命周期，如一个子函数的结束，
// 该子函数里声明定义的变量也会随之结束）。
// 存放系统随机给的一个值(实际上就是一个地址) ，这个值对应着的一处空间，并非为空。
// 而程序员动态分配内存空间，申请出来的是堆区上的空间。即p指向堆区的一块空间，
// 本身自己的空间还是在栈区。一般动态分配了堆上的内存空间就要释放。
// 不然会内存泄漏（堆空间也会随着整个程序的结束而被释放）。
// 对于栈区的内存空间不需要你来管理，系统自动管理（包括分配空间，释放空间）。
// 所以*p = &a，再改变为&b，他们都是位于栈区，所以不存在内存泄漏。


// 如果将指针变量指向一个已开辟过的（static），即已有的空间，就不需要重新开辟内存空间了，
// 只有需要开辟的时候（dynamic）才开辟内存空间（动态分配内存空间，申请出来的是堆区上的空间）