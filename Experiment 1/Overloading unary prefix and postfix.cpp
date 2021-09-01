#include<iostream>
using namespace std;
class temp{                                                      //temp is a class
	int x;
	public:
		temp(){}                                                 //Constructor no arg
		temp(int a){x=a;}                                         //Constructor with one ar
		temp operator ++(int){                //int passed as arg stands for postfix                
		                                     //defining an operator for post-increment
		   
		    temp y;
		    y.x=x++;
		    return y;   
		}
	    temp operator++ (){                                 //defining an operator for pre-increment
		    temp y;
		    y.x=++x;
		    return y;   
		}
		temp operator --(int){                    //int passed as arg stands for postfix      
		                                         //defining operator for post-decrement
		    temp y;
		    y.x=x--;
		    return y;   
		}
	    temp operator-- (){                                //defining an operator for pre-decrement
		    temp y;
		    y.x=--x;
		    return y;   
		}
		int display(){return x;}                         //displays the final value
};
int main(){
	temp t1,t2,t3;                                      //t1,t2,t3 are class objects
	int n;
	cout<<"\nEnter number: ";
	cin>>n; 
	t1=n;                                                  
	t3=++t1;              
	cout<<"\n\nPre Increment: "<<t3.display(); 
	t1=n;                       
	t2=t1++;   
	cout<<"\nPostfix Increment: "<<t2.display();
	t1=n;  
	t3=--t1; 
    cout<<"\n\nPrefix  Decrement: "<<t3.display();   
	t1=n;                                        
    t2=t1--;  
	cout<<"\nPostfix Decrement: "<<t2.display();
	

}
