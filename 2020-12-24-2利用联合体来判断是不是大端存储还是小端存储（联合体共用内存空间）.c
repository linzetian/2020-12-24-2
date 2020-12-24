//利用联合体来判断是不是大端存储还是小端存储（联合体共用内存空间）
#include<stdio.h>
int mem_type()
{
	union S
	{
		char i;
		int j;
	}s;
	s.j = 1;
	return s.i;
}
int main()
{
	int ret=mem_type();
	if (ret == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	return 0;
}