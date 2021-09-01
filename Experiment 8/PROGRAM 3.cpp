#include<iostream>
#include<deque>
using namespace std;
void showq(deque<int> &dq){
	deque<int> :: iterator p;
	for(p=dq.begin();p!=dq.end();++p)
	  cout<<*p<<",";
	cout<<"\n\n";
}
int main()
{
    deque <int> d;
    int a,b,n,x,y,s;
    cout<<"\nEnter size of the Deque: ";
    cin>>s;
    cout<<"Enter elements of Deque: ";
    for(int i=0;i<s;i++){
    	cin>>a;
		d.push_back(a);
    }
 
    cout << "The Deque d is : ";
    showq(d);
 
    cout << "\nd.size() : " << d.size();
    cout << "\nd.front() : " << d.front();
    cout << "\nd.back() : " << d.back();
    cout << "\nd.pop() : ";
	d.pop_back();
    cout<<"\nDeque Now: ";
    showq(d);
    
    deque<int> ::iterator dt=d.begin();
    cout<<"Enter position and value with which u want to update the element: ";
    cin>>x>>y;
    d.insert(dt+x-1,y);
    cout<<"\nUpdated Deque:";
    showq(d);
    
     
    // We can also use front and back as 
    // iterators to traverse through the dequeue
    cout<<"Using iterators to traverse: ";
    for(int i = d.front(); i != d.back(); i++)
    {
      cout<< i <<" ";
    }
    return 0;
}

