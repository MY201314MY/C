#include <stdio.h>
#include <string.h>
char*formal="%s\t%s\t%c\n";
typedef struct
{
	char number[10];
	char name [20];
	char sex;
}student;

int main()
{
	student s,*p;
  int a=9,*p1;
	p1=&a;
	printf("%X\t",p1);
	printf("%d\n",sizeof(a));

	strcpy(s.number,"123456");
	strcpy(s.name,"Li ming");
  s.sex='F';
  p=&s;
	printf("%X\n",p);
	printf("%s\t%s\t%c\n",s.number,s.name,s.sex);
  printf(formal,p->number,p->name,p->sex);

	return 0;
}
