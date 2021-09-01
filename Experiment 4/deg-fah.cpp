#include<iostream>
using namespace std;
class deg
{
	int d;
	public:
		void getdata()
		{
			cout<<"\nEnter val in deg:";
			cin>>d;
		}
		int getd()
		{
			return d;
		}
};
class feh
{
	float h;
	public:
		feh()
		{
			h=0.0;
		}
		feh(deg p)
		{
			h =((p.getd())*1.8)+32;
		}
		void display()
		{
			cout<<"\n Fah val is : "<<h;
		}
};
int main()
{
	deg d1;
	d1.getdata();
	feh f1;
	f1=d1;
	f1.display();
	
	return 0;
}
