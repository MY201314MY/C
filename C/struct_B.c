#include <stdio.h>
#include <string.h>

struct student 
{
	char name[10];
	float score;
	struct student *next;
};
char*formal="%s\t%.2f%";

int main()
{
	struct student stu[3],*p;

	p=stu;
	strcpy(stu[0].name,"Jack");
	stu[0].score=87.5;
	strcpy(stu[1].name,"Jane");
	stu[1].score=67;
	strcpy(stu[2].name,"kiki");
	stu[2].score=96;
	stu[2].next=NULL;

	do{
		printf(formal,p->name,p->score);
		
		p++;
	}while(p!=NULL);

	return 0;
}
