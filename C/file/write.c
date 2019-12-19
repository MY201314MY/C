#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE*fp;
    char ch,filename[20];

	printf("Please input the name of the file:\n");
	scanf("%s",filename);
	if(fp=fopen(filename,"w")==NULL)
	{
		printf("date error,the can't be opented\n");
		exit(0);
	}

	ch=getchar();
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		getchar();
	}

	fclose(fp);
	putchar(10);

    return 0;
}
