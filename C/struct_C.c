#include <stdio.h>
#include <string.h>

#define  N 2

struct
{
	int number;
	char name[20];
	char sex;
	char job;

	union
	{
		int grade;
		char possion[8];
	}differ;

}person[2];

int main()
{
	int i;

	for(i=0;i<N;i++)
	{
		scanf("%d%s %c %c",&person[i].number,&person[i].name,&person[i].sex,&person[i].job);
	}
	for(i=0;i<N;i++)
	{
		printf("%c\n",person[i].sex);
        printf("%c\n",person[i].job);
	}
	for(i=0;i<N;i++)
	{
	  if(person[i].job=='s')
		  person[i].differ.grade=1001;
	  else if(person[i].job=='t')
          strcpy(person[i].differ.possion,"teacher");
	  else
		  printf("date error!\n");
	}
    for(i=0;i<N;i++)
     if(person[i].job=='s')
		  printf("%d\t%s\t%c\t%c\t%d\n",person[i].number,person[i].name,person[i].sex,person[i].job,person[i].differ.grade);
	  else if(person[i].job=='t')
          printf("%d\t%s\t%c\t%c\t%s\n",person[i].number,person[i].name,person[i].sex,person[i].job,person[i].differ.possion);

	return 0;
}
