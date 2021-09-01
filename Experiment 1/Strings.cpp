#include<iostream>
using namespace std;
class vector{
	int *x;
	public:
	vector(){	}
	vector(int n)
	{
		x=new int[n];
	}
	friend vector operator +(vector b,vector a)
	{
		vector d(3);
		for(int i=0;i<3;i++)
		{
			d.x[i]=b.x[i]+a.x[i];
		}
		return d;
	}
	friend vector operator *(int i,vector temp);	
	void input()
	{
		for(int i=0;i<3;i++)
		{
			cout<<"enter element at position "<<i+1<<":";
			cin>>x[i];
		}
	}
	void display()
	{
		for(int i=0;i<3;i++)
		{
			cout<<x[i]<<" ";
		}
	}
};
vector operator *(int t,vector temp)
{
	vector v;
	for(int i=0;i<3;i++)
	{
		v.x[i]=t*temp.x[i];
	}
	return v;
}

int main()
{
	vector a(3),b(3);
	vector c(3),d(3);
	int x;
	cout<<"enter elements of the vector"<<endl;
	a.input();
	b.input();
	cout<<"vector a: ";a.display();cout<<"vector b: ";b.display();
	cout<<"enter number to multiply";
	cin>>x;
	c=x*a;
	cout<<x<<"*a=";
	c.display();
	cout<<"a";
	d=b+a;
	cout<<"vector a + vector b=";
	d.display();
}
