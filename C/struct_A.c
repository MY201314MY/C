#include <stdio.h>
#include <string.h>

#define N 3

struct student
	{
		char name[20];
		float score[4];
		float aver;
	};

int main()
{
	struct student stu[3];
	struct student *p=stu;
	int i;


	void input(struct student stu[]);

    input(p);

	for(i=0;i<N;i++)
		printf("%s\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].aver);
}

void input(struct student stu[])
{
	int i;

	printf("Please input the name and grades:\n");
	for(i=0;i<N;i++)
	{
		scanf("%s%f%f%f%f",&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);

		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4.0;
	}
}
