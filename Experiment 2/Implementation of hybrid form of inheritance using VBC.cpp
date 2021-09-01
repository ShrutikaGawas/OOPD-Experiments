#include<iostream>
using namespace std;

class student{
	protected:
		int rollno;
		char name[20];
		int age;
		public:
		void getdetails(void)
			{
				cout<<"Enter Rollno: ";
				cin>>rollno;
				cout<<"Enter Name: ";
				cin.ignore(1);
				cin.getline(name,20);
				cout<<"Enter Age: ";
				cin>>age;
			}
			void putdetails(void)
			{
				cout<<"Rollno: "<<rollno<<"\n";
				cout<<"Name: "<<name<<"\n";
				cout<<"Age: "<<age<<"\n";
			}
};

class test :virtual public student
{
	protected:
		float marks1,marks2,sem;
		public:
			void getmarks()
			{
				cout<<"Enter Marks of IT 1 and IT 2: ";
				cin>>marks1;
				cin>>marks2;
				cout<<"Enter Semester Marks: ";
				cin>>sem;
			}
			void putmarks(void)
			{
				cout<<"Marks Obtained: "<<"\n"<<"IT 1(out of 25): "<<marks1<<"\n"
				<<"IT 2(out of 25): "<<marks2<<"\n"
				<<"Semester(out of 150): "<<sem<<"\n";
			}
};

class sports:public virtual student
{
	protected:
		float score;
		public:
			void getscore()
			{
				cout<<"\nEnter score scored in Sports: ";
				cin>>score;
			}
			void putscore(void)
			{
				cout<<"Sports Marks: "<<score <<"\n\n";
			}
};

class result: public test,public sports
{
	float total;
	public:
		void display(void);
};

void result :: display(void)
{
	total = marks1 + marks2+sem+score;
	cout<<"\n--------------Student's Info--------------\n";
	putdetails();
	cout<<"\n-----------Student's Result------------\n\n";
	putmarks();
	putscore();
	
	cout<<"Total Score: "<<total<<"\n";
}

int main()
{
	result student1;
	student1.getdetails();
	student1.getmarks();
	student1.getscore();
	student1.display();
	
}
