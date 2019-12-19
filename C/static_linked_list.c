#include <iostream>
using namespace std;

struct student
	{
		int number;
		char name[20];

		struct student *next;
	};
int main()
{
	struct student a,b,c,d,*p,*head;

	head=&a;
	p=&a;
	a.number=1101;strcpy(a.name,"Jack");a.next=&b;
	b.number=1102;strcpy(b.name,"Fifo");b.next=&c;
	c.number=1103;strcpy(c.name,"Lili");c.next=&d;
  d.next=NULL;
  do{
		printf("%d\t%s\n",p->number,p->name);
		p=p->next;
	}while(p->next!=NULL);

	return 0;
}
