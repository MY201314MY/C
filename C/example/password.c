#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h> 
#define N 3

int main()
{
	char code[]="123456ZM";                            

	char password[20],c;                                   
	int i=0;
	char finish=0;

	printf("Glad to service for you!\n");
    printf("Please input the password:\n");
    while((c=getch())!=13)
	{
		password[i++]=c;
		putchar('*');
	}
	password[i]='\0';
    printf("\n");

	if(strcmp(password,code)==0)
	{
		printf("Welcome to enter!\n");
		finish=1;
	}

	else
		printf("sorry,the password is wrong!\n");

   return 0;
}
