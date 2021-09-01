#include<iostream>
using namespace std;
class temp{
	public:
		int a;
		temp()                                               //Constructor with no arg to take care of t1.
		{
			a=0;
		}
		temp(int x)
		{
			a=x;
		}
		friend istream & operator >>(istream &x,temp &y);          //friend function declaration.
		friend ostream & operator >>(ostream &x,temp &y);         //friend function declaration.
};
istream & operator >>(istream &x,temp &y){                     //redefine the operator function
	x>>y.a;
	return (x);                                                //a reference to x is getting returned
}

ostream & operator <<(ostream &x,temp &y){                     //redefine the operator function
	x<<y.a;
	return (x);                                               //a reference to x is getting returned
}

int main(){
	temp t1,t2(98);
	cout<<"\nEnter a Value: ";
	cin>>t1;                                                                    //take in the value
	cout<<"\nUser Entered Value: "<<t1<<"\nPre Entered Value: "<<t2;           //execute the value                            
	return 0; 
}
