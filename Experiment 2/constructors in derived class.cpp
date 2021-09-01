//Constructors in derived class
#include<iostream>
using namespace std;
class alpha{
	int x;
	public:
		alpha(int i)
		{
			x=i;
			cout<<"Alpha initialised\n";
		}
		~alpha() 
        { 
            cout<<"\nAlpha  destroyed"; 
        } 
		void showx(void)
		{
			cout<<"x = "<<x<<"\n";
		}
};
class beta
{
	float y;
	public:
		beta(float j)
		{
			y=j;
			cout<<"Beta initialised\n";
		}
		~beta() 
        { 
           cout<<"\nBeta Destroyed"; 
        }  
		void showy(void)
		{
			cout<<"y = "<<y<<"\n";
		}
};
class gamma:public alpha,public beta{
	int m,n;
	public:
		gamma(int a,float b,int c):alpha(a*3),beta(b*2),m(c*1){
			n=c;
			cout<<"Gamma initialised\n";
		}
		~gamma() 
         { 
           cout<<"\ngamma Destroyed"; 
         } 
		void showmn(void){
			cout<<"n = "<<n<<"\n";
		}
};
int main()
{
	gamma g(5,2.2,20);
	cout<<"\n";
	g.showx();
	g.showy();
	g.showmn();
}
