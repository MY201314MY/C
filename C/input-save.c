#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

struct student
{
	int number;
	char name[15];
    int age;
}stu[5];
void save(struct student*stu)
{
	FILE*fp;
	if((fp=fopen("keya.dat","wb"))==NULL)
	{
		printf("File failure.");
		exit(0);
	}
	for(int i=0;i<SIZE;i++)
		if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
			printf("date input error!");
    printf("Date input finished.\n");
    fclose(fp);
}
void load(struct student*stu)
{
	FILE*fp;
    
	printf("Read begin:\n");
	if((fp=fopen("keya.dat","rb"))==NULL)
	{
		printf("Flie opened error!\n");
		exit(0);
	}
	for(int i=0;i<SIZE;i++)
	{
		fread(&stu[i],sizeof(struct student),1,fp);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%d %s %d\n",stu[i].number,stu[i].name,stu[i].age);
	}
	fclose(fp);
}
int main()
{
	for(int i=0;i<SIZE;i++)
    {
		scanf("%d%s%d",&stu[i].number,&stu[i].name,&stu[i].age);
	}

	save(stu);
	load(stu);

	return 0;
}
