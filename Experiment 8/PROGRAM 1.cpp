#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	vector<int> v;
	cout<<"Initial size = "<<v.size()<<"\n";
	//putting values into the vector
	int x,a,y;
	cout<<"Enter 5 integer values: ";
	for(int i=0;i<5;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<"Size after adding 5 values: ";
	cout<<v.size()<<"\n";
	
	//Display contents
	cout<<"Current Contents: \n";
	display(v);
	
	//add one more value
	cout<<"\nEnter another element at the end: ";
	cin>>x;
	v.push_back(x);             
	
	//display size and contents
	cout<<"\nSize ="<<v.size()<<"\n";
	cout<<"Contents now: \n";
	display(v);
	
	//inserting elements
	vector<int> :: iterator itr=v.begin();   //iterator 
	cout<<"\nInsert the position and element to be inserted there: ";
	cin>>a>>y;
	itr=itr+(a-1);                              //itr points to 4th element
    v.insert(itr,y);
    
    //display the contents
    cout<<"\nContents after inserting the value: \n";
    display(v);
    
    //removing 4th and 5th elements
    int b,c; 
    cout<<"Enter  position of element u want to delete: ";
    cin>>b;
    v.erase(v.begin()+(b-1));     //removes 4th & 5th element
    
    //Display the contents
    cout<<"\nContents after Deletion: \n";
    display(v);
}
