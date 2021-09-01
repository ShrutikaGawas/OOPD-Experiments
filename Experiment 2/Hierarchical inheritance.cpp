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
class arts:public student{
	protected:
		float marks;
		public: 
		       void artsdetails(void){
		       	getdetails();
		       	cout<<"Enter Entrance Test Marks:";
		       	cin>>marks;
		       }
		       void artsdisplay(void){
		       	putdetails();
		       	cout<<"Entrance Test Marks: "<<marks<<"\n";
		       }
		       
};
class engineer: public student{
	protected:
		float gmarks;
		int sem;
		public:
			void engineerdetails(){
				getdetails();
				cout<<"Enter GCET Score: ";
				cin>>gmarks;
				cout<<"Enter Current Semester: ";
				cin>>sem;
			}
			void putengineerdetails(){
				putdetails();
				cout<<"GCET Score: "<<gmarks<<"\n"<<"Current Semester: "<<sem<<"\n";
			
			}
};
class mech:public engineer{
	public:
		   void mechanicaldisplay(void){
		   	putengineerdetails();
		   	cout<<"Department: Mechanical Engineering\n";
		   }
		
};
class elec: public engineer{
	public:
		   void electricaldisplay(void){
		   	 	putengineerdetails();
		   	    cout<<"Department: Electrical Engineering\n";
		   }
		
};
class civ: public engineer{
	public:
		   void civildisplay(void){
		   	 	putengineerdetails();
		   	    cout<<"Department: Civil Engineering\n";
		   }
		
};
class med:public student{
	protected:
		float nmarks;
		public:
			void medicaldetails(void){
				getdetails();
		       	cout<<"Enter NEET Score:";
		       	cin>>nmarks;
		       }
			void medicaldisplay(void){
				putdetails();
				 cout<<"NEET Score: "<<nmarks;
			}
};
int main(){
  arts a;
  cout<<"Get art student info:\n";
  a.artsdetails();
  cout<<"\nGet mechanical student info:\n";
  mech m;
  m.engineerdetails();
   cout<<"\nGet electrical student info:\n";
  elec e;
  e.engineerdetails();
  cout<<"\nGet civil student info:\n";
  civ c;
  c.engineerdetails();
  cout<<"\nGet medical student info:\n";
  med me;
  me.medicaldetails();
  cout<<"\n-------------ARTS  STUDENT-------------\n";
  a.artsdisplay();
  cout<<"\n----------MECHANICAL ENGINEERING STUDENT-------------\n";
  m.mechanicaldisplay();
  cout<<"\n----------ELECTRICAL ENGINEERING STUDENT-------------\n";
  e.electricaldisplay();
  cout<<"\n----------CIVIL  ENGINEERING STUDENT-------------\n";
  c.civildisplay();
   cout<<"\n----------MEDICAL STUDENT-------------\n";
   me.medicaldisplay();
}
