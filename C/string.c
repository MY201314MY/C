#include <stdio.h>
int main()
{
	void Init_screen();

	char str[3][20]={"hello","Dood morning!","Thank you."};
	unsigned char i;

	Init_screen();

	for(i=0;i<3;i++)
	{
		printf("%s",str[i]);
		printf("\n");
	}

	puts("\n");

	return 0;
}

void Init_screen()
{
	printf("****************************\n");
        printf("Welcome to enter the system!\n");
	printf("****************************\n");

	puts("\n");
}
