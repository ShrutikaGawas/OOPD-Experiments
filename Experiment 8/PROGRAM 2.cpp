#include<iostream>
#include <list>   //list header file
#include<cstdlib>
using namespace std;
void display(list <int> & lst)
{
	list <int> :: iterator p;
	for(p=lst.begin(); p!=lst.end(); ++p)
		cout<< *p <<" ";		//*p is value to print
	cout<<"\n";
}
int main()
{
	list <int> list1;		//empty list of 0 lenght
	list <int> list2;	//empty list of size 5
	int a,b,n;
	cout<<"\nEnter list1 element:\n";
	for(int i=0;i<3;i++)
	{
		cin>>n;
		list1.push_back(n);
	}
	cout<<"\nEnter list2 element:\n";
	for(int i=0;i<5;i++)
	{
		cin>>n;
		list2.push_back(n);
	}
	cout<<"\nList 1 contents : ";
	display(list1);
	cout<<"\nList 2 contents : ";
	display(list2);	
	
	cout<<"Enter elements to be inserted at both the ends of list 1: \n";
	cin>>a>>b;
	list1.push_front(a);
	list1.push_back(b);
	cout<<"\nUpdated List 1 contents : ";
	display(list1);
	
	cout<<"\nRemove element from front of List:";
	list2.pop_front();	//remove element at the front of list2
	
	cout<<"\nUpdated List 2 contents : ";
	display(list2);
	
	list <int> lista, listb;
	lista = list1;
	listb = list2;
	
	//Merging 2 list
	list1.merge(list2);		//merge function
	
	cout<<"\nMerged unsorted List 1 contents : ";
	display(list1);
	
	//sorting lists
	lista.sort();
	listb.sort();
	lista.merge(listb);
	cout<<"\nMerged sorted lists: \n\n";
	display(lista);
	
	//Reversing list
	lista.reverse();
	
	cout<<"\nReversed Lista contents : ";
	display(lista);
	
	return 0;
}

