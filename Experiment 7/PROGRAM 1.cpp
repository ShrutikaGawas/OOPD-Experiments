#include<iostream>
using namespace std;
void divide(int x,int y)  // x=20.0  y=0.0
{
	cout<<"\nInside DIVIDE function\n";
	try
	{
		if(y==0)
		{
			throw y;
		}
		else
		{
			cout<<"\nDivision :"<<x/y<<"\n";
		}
	}
	catch(int)
	{
		cout<<"\nDivide by zero exception caught inside DIVIDE function ";
		throw;		//Rethrowing
	}
}
int main()
{
	int a,b;
	cout<<"\nInside MAIN function";
	cout<<"\nEnter values of a & b :";
	cin>>a>>b;
	try
	{
	     divide(a,b);
	}
	catch(int)
	{
		cout<<"\nDivide by zero exception caught in MAIN function";
	}
	return 0;
}

