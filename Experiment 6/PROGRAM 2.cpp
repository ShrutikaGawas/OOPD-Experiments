#include<iostream>
using namespace std;
template<class T>
class vector{
	public:
	       T *v;
	       int size;
	public:
		vector(){v=0;size=0;}                   //constructor
		vector(int size){                      //constructor
			this->size=size;
			v=new int[size];
		}
		void create(){                                       //take input   
			for(int i=1;i<=size;i++)
				cin>>v[i];	
		}
		void display(){                                      //display
			for(int i=1;i<=size;i++)
			  cout<<v[i]<<" ";
		}
		void modify(){
			int x,y;
			cout<<"\n\nWhich position element do u want to update?and with what value?: ";
			cin>>x>>y;
			v[x]=y;
			
		}		   
};
int main(){
	int size;
	cout<<"Enter the size of the vector: "<<"\n";
	cin>>size;
	vector <int> v1(size);
	cout<<"Enter elements of vector : ";
    v1.create();
    cout<<"\nVector 1: ";
    v1.display();
    v1.modify();
    cout<<"\nModified Vector:";
    v1.display();
}
