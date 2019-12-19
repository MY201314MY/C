#include <stdio.h>
int main()
{
	int str[3][4]={{1,67,3,4},{3,6,7,8},{9,4,1,12}};
	void search(int(*p)[4],int n);
	void average(int*p,int n);
	void aim(int*p,int n);

	search(str,2);
	average(*str,12);
	aim(*str,12);
	return 0;
}

void search(int(*p)[4],int n)
{
	int i;

	for(i=0;i<4;i++)
	{
		printf("%d  ",*(*(p+n)+i));
	}
	putchar('\n');
}
void average(int*p,int n)
{
	int i=0,sum=0,average=0;

    for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		sum+=*p;
		p++;
	}

	average=sum/12;
	printf("The average is:%d\n",average);
}

void aim(int*p,int n)
{
	int i,row,line;

	for(i=0;i<12;i++)
	{
		if(*p<6)
		{
			row=i/4+1;
			line=i%4+1;
			printf("The student ID number is %d,the project is %dth and the score is %d\n",row,line,*p);
		}
		p++;
	}
}
