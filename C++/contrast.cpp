#include <iostream>
using namespace std;

int main(int argc,int*argv[])
{
	int abs(int x);
	void swap(int*p1,int*p2);

	int x;
	cin>>x;
	int y=abs(x);
	cout<<y<<endl;
	{
	    cout<<"Please input two number:"<<endl;
		int x,y;

		cin>>x;cin>>y;
		if(x<y)
			swap(&x,&y);
		cout<<"The maximum is "<<x<<endl<<"The minimum is:"<<y<<endl;
	}

	return 0;
}

int abs(int x)
{
	return x<0?-x:x;
}

void swap(int*p1,int*p2)
{
	int tmp;

	tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}

