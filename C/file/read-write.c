#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
	long id;
	char name[24];
}stu={3116080,"Jack"};

int main()
{
	char string[32],ch;
	FILE *p;
	struct student m;
	m.id = 123456;
	strcpy(m.name, "This is Mongoose OS");
	printf("%ld  %s\r\n",m.id,stu.name);

	if((p = fopen("m.txt","w")) != NULL){
		printf("The address is %X\r\n",p);
		fputs(m.name,p);
		fclose(p);
	}

	if((p = fopen("m.txt","r")) != NULL){
		printf("The address is %X\r\n",p);
		fgets(string,32,p);
		puts(string);
		fclose(p);
	}
	if((p = fopen("m.txt","r")) != NULL){
		printf("The address is %X\r\n",p);
		while(!feof(p)){
			ch = fgetc(p);
			putchar(ch);
		}
		putchar('\n');
		fclose(p);
	}
	return 0;
}
