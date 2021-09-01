#include<iostream>
#include<cstring>
using namespace std;
class media{
	protected:
		char title[50];
		float price;
	public:
		media(char *s,float a){
			strcpy(title,s);
			price=a;
	    }
	    virtual void display(){}
};
class book:public media{
	int pages;
	public:
		book(char *s,float a,int p):media(s,a){
			
			pages=p;
		}
		void  display(){
         cout << "Title: "<<title<<endl;
         cout << "Pages: "<<pages<<endl;
         cout << "Price: "<<price<<endl;
        }
};
class tape: public media{
   float time;
   public:
       tape(char *s, float a, float t): media(s, a)
       {
         time = t;
       }
       void display(){
        cout << "Title: "<<title<<endl;
        cout << "Play time: "<<time<<endl;
        cout << "Price: "<<price<<endl;
       }
};
int main()
{
  char * title = new char [30];
  float price, time;
  int pages;
  cout <<"Enter Book Details"<<endl;
  cout << "Title: ";
  cin >> title;
  cout << "Price: ";
  cin >> price;
  cout << "Pages: ";
  cin >> pages;
  book book1(title, price, pages);
  cout <<"Enter Tape Details"<<endl;
  cout << "Title: ";
  cin >> title;
  cout << "Price: ";
  cin >> price;
  cout << "Play time (mins): ";
  cin >> time;
  tape tape1(title, price, time);
  media * list[2];
  list[0] = &book1;
  list[1] = &tape1;
  cout <<"\n-----Media Details------"<<endl;
  cout <<"\nBook"<<endl;
  list[0] -> display();
  cout <<"\nTape"<<endl;
  list[1] -> display();
  return 0;
}

