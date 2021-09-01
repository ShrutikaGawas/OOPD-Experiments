#include <iostream>
using namespace std;
class Base{
   public:
      virtual void show() = 0; //Pure virtual function
};
void Base :: show(){
  cout <<"Pure virtual definition"<<endl;
}
class Derived : public Base{
    public:
          void show(){
           cout <<"Virtual functions implemented in derived class"<<endl;
          } 
};
int main()
{
  Base * b;
  Derived d;
  b = &d;
  b-> show();
}
