#include <stdio.h>
#define N 4

int main()
{
	int function(int a,int b,int(*p)(int a,int b));
	int max(int a,int b);
	int min(int a,int b);
	int plu(int a,int b);

	int i,x,a,b;

	printf("Please input two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("input your choices:\n");
	for(i=0;i<N;i++)
	{
	  scanf("%d",&x);

	  if(x==0)
	      function(a,b,max);
	  else if(x==1)
		  function(a,b,min);
	  else if(x==2)
		  function(a,b,plu);
      else
		  printf("date error!\n");
	}

	printf("\n");

	return 0;
} 

int function(int a,int b,int(*p)(int a,int b))
{
	int result;

	result=(*p)(a,b);

	printf("%d",result);

	return 0;
	
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int plu(int a,int b)
{
	return (a+b);
}
