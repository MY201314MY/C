#include <stdio.h>

enum color{red,yellow,blue,white,black};
enum color i,j,k,pri;
int loop,n=0;

int main()
{
	for(i=red;i<=black;i++)
	{
		for(j=red;j<=black;j++)
		{
			for(k=red;k<=black;k++)
			{
				if(k!=i&&k!=j&&i!=j)
				{
					n=n+1;
					printf("%2d:",n);
					for(loop=1;loop<=3;loop++)
					{
						switch(loop)
						{
						    case 1:pri=i;break;
						    case 2:pri=j;break;
							case 3:pri=k;break;
						}

						switch(pri)
						{
						    case 0:printf("%8s\t","Zhao");break;
							case 1:printf("%8s\t","Qian");break;
							case 2:printf("%8s\t","Zhou");break;
							case 3:printf("%8s\t","Wang");break;
							case 4:printf("%8s\t","Feng");break;
						}
					}
					printf("\n");
				}
			}
		}
	}
	printf("You may have:%d choices.\n",n);
}
