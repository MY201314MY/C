#include <stdio.h>

int main()
{
	int*secarch(int(*p)[4],int n);

	int str[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int k,i;
	int*p;

	scanf("%d",&k);
	p=secarch(str,k);

	for(i=0;i<4;i++)
	{
		printf("%d  ",*p++);
	}

	putchar('\n');

	return 0;
}

int*secarch(int(*p)[4],int n)
{
	int *q;

	q=*(p+n);

	return q;
}
