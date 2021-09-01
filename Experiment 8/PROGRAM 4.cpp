#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
int main(){
  stack <int> s;
  while(1){
    cout<<"\n";
    cout<<"MENU";
    cout<<"\n1.Push ";
    cout<<"\n2.Pop ";
    cout<<"\n3.Display item at the top ";
    cout<<"\n4.Display all elements in the stack ";
    cout<<"\n5.Exit ";
    int choice;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
       case 1:
               int num;
               cout<<"\nEnter element : ";
               cin>>num;
               s.push(num);
               break;
       case 2:
              if(s.empty())
              cout<<"\nEmpty stack";
              else
              s.pop();
              break;
       case 3:
              if(s.empty())
              cout<<"\nEmpty stack";
              else
              cout<<"The element at the top is : "<<s.top();
              break;
       case 4:
              if(s.empty())
              cout<<"\nEmpty stack\n";
              else{
                  stack<int>sc=s;
                  cout<<"\nElements in stack are : ";
                  while(!sc.empty()){
                    cout<<sc.top()<<" ";
                    sc.pop();
                  }
              }
              cout<<"\n\n";
              break;
       case 5:
              cout<<"\n";cout.fill(' ');
              cout.width(30);
              cout<<"Thank you\n\n";
              exit(1);
      default:
               cout<<"\nInvalid choice";
    }
  }
return 0;
}

