#include <stdio.h>
#include <string.h>
int main()
{
	void fun(char*s);

	char a[]="abcdefghi";

	fun(a);
	puts(a);

    return 0;
}

void fun(char*s)
{
	int x,y;
	char c;
	for(x=0,y=strlen(s)-1;x<y;x++,y--)
	{
		c=s[x];
		s[x]=s[y];
		s[y]=c;
	}
}
