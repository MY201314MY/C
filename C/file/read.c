#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE*fp;
	char ch,filename[40];

	printf("Please input the filename:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("File error!");
		exit(0);
	}
    
	while(!feof(fp))
	{
		ch=fgetc(fp);
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);

	return 0;
}
