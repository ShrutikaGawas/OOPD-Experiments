#include<iostream> 
#include<string.h>   
#include<cstring>  
using namespace std;  
class string1
{
	char name[10];
	public:
		string1(char *c)
		{
			strcpy(name,c);
		}
		int operator==(string1 p)
		{
			if(strcmp(name,p.name)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int operator < (string1 q)
		{
			if(strlen(name)<strlen(q.name))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	string1 s1("hello world");
	string1 s2("hello");
	if(s1==s2)
	{
		cout<<"\n Same ";
	}
	else
	{
		cout<<"\n Diff ";
	}
	
	cout<<"\n------------------------\n";
	if(s1<s2)
	{
		cout<<"s1 is lesser then s2";
	}
	else
	{
		cout<<"s1 is greater then s2";
	}
	return 0;
}
