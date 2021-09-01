#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char *p;
            int len;
	public:
		String(){len=0;p=0;}                  //create a null string
		String(const char * S)                //create string from arrays
		{
		        len = strlen(S);
	                     p = new char[len+1];
	                     strcpy(p,S);
		}
		String(const String & S)            //copy constructor
		{
		       len = S.len;
	                   p = new char[len+1];
	                   strcpy(p,S.p);
		}
		~String(){delete p;}                  //destructor
		//+ operator
		friend String operator +(const String & S1, const String & S2);       //declaring friend function.
		//<= operator
	    friend int operator<=(const String & S1, const String & S2);      //declaring   friend function
	    friend int operator==(const String & S1, const String & S2);
	    void show(){
	    	cout<<p;
	    }
};

//overloading + operator
String operator +(const String & S1,const String & S2)             //defining operator +
{
	String temp;
	temp.len=S1.len + S2.len;
	temp.p=new char[temp.len+1];
	strcpy(temp.p,S1.p);
	strcat(temp.p,S2.p);
	return(temp);
}
//overloading<=operator
int operator <=(const String & S1,const String & S2)              //defining operator <=
{
	int m = strlen(S1.p);
	int n = strlen(S2.p);
	if(m<=n)  
	 return 1;
	else     
	return 0;
}
//overloading == operator
int operator ==(const String & S1, const String & S2){
	if(strcmp(S1.p,S2.p)==0)
	 return 1;
	else 
	 return 0;
}
int main(){
	String s1="Louis ";
	String s2 ="Tomlinson";
	cout<<"S1: ";s1.show();
	cout<<"\tS2: ";s2.show();
	cout<<"\n\nConcatenation of Strings: ";
	String s=s1+s2;
	cout<<"\nS: ";s.show();
	cout<<"\n\n";
	if(s1<=s2)
	{
		s1.show();
		cout<<" is smaller than ";
	             s2.show();
		cout<<"\n";
	}	
	else
	{
		s2.show();
		cout<<" is smaller than ";
	            s1.show();
		cout<<"\n";
	}		
	if(s1==s2)
	  cout<<"\nStrings are equal";
	else
	  cout<<"\nStrings aren't equal";	
	return 0;
}                      

