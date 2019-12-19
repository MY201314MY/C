#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
using namespace std;
#define LEN sizeof(struct student)
/*建立一个任意多学生的动态链表*/
struct student
{
	int number;
	char name[20];
	struct student *next;
};
/*
建立动态链表后，建立一个头指针指向该链表的起始位置，由p1负责指向新开辟的内存；
p2负责接收p1中的数据，动态内存开辟后相当于一个静态链表，每一个结点中保存了下
一个结点的地址
*/
int n=0;
struct student *creat()
{
	struct student*head,*p1,*p2;

	p1=p2=(struct student*)malloc(LEN);
	head=NULL;

	scanf("%d%s",&p1->number,&p1->name);
	while(p1->number!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;

		p1=(struct student*)malloc(LEN);
		scanf("%d%s",&p1->number,&p1->name);
	}
	p2->next=NULL;

	return head;
}
void print(struct student *head)
{
	printf("Now the student number is %d\n",n);
	struct student *p=head;
	do{
		printf("%d\t%s\n",p->number,p->name);
		p=p->next;
	}while(p!=NULL);
}
int main()
{
	print(creat());

	return 0;
}
