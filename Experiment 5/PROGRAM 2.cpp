#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<cstring>
using namespace std; 
class Phonebook{                    //class phonebook.
	char name[30];
	long long  phne;
public:
	void getdata(){                                              //function to take input
		cout<<"\nEnter Name: \n";
		cin>>name;
		cout<<"\nEnter Phone number: \n";
		cin>>phne;
	}
	void show(){                                                      //displays the ouput
		cout<<right<<setw(20)<<name<<setw(20)<<phne<<endl;
	}
	void filewrite(){                                                //writes input to file
		fstream fout;
		fout.open("phone.dat",ios::in|ios::out|ios::binary|ios::app);
		fout.write((char*)this,sizeof(*this));
		fout.close();
	}
	void fileread(){                                                  //reads from the file
		fstream fin;
		fin.open("phone.dat",ios::in|ios::binary);
		cout<<right<<setw(20)<<"NAME"<<setw(20)<<"PHONE NO"<<endl;
		cout<<"---------------------------------------------------"<<endl;
	    fin.seekg(0,ios::beg);
	    Phonebook p;
		while(fin.read((char*)&p,sizeof(p))){
			p.show();
		}
		fin.close();
	}
	void searchphone(){                                               //search the phone number
		fstream fin1;
	    char nm[30];
		int p,i,offset;
		bool flag=false;
		p=-1,i=0;
		cout<<"\nEnter Name: ";
		cin>>nm;
		fin1.open("phone.dat",ios::in|ios::binary);
		fin1.seekg(0,ios::beg);
		while(fin1.read((char*)this,sizeof(*this))){
			if(strcmp(this->name,nm)==0){
				p=i;
				flag =true;
				break;
			}
			i++;
		}
		if(flag){
			offset=p*sizeof(*this);
			fin1.seekg(offset);
			fin1.read((char*)this,sizeof(*this));
			cout<<"\nRecord Found!,The Phone number is "<<this->phne;
		}
		else{
			cout<<"\nName  doesn't exist";
		}
		fin1.close();
	}
	void updatephone(){                                               //updating a record
		fstream fin1;
	    char nm[30],nm1[30];
	    long long phone;
		int p,i,offset;
		bool flag=false;
		p=-1,i=0;
		cout<<"\nEnter Name: ";
		cin>>nm;
		fin1.open("phone.dat",ios::ate|ios::out|ios::in|ios::binary);
		fin1.seekg(0,ios::beg);
		while(fin1.read((char*)this,sizeof(*this))){
			if(strcmp(this->name,nm)==0){
				p=i;
				flag =true;
				break;
			}
			i++;
		}
		if(flag){
			offset=p*sizeof(*this);
			fin1.seekp(offset);
			cout<<"\nRecord Found!,The current name and phone no. : "<<this->phne<<endl;
			cout<<"\nEnter new name and phone number: ";
			cin>>nm1;
			cin>>phone;
			strcpy(this->name,nm1);
			this->phne=phone;
			fin1.write((char*)this,sizeof(*this))<<flush;
			cout<<"Record updated ! \n The new content is:\n";
			cout<<"Name: "<<this->name<<"\t"<<"Phone no: "<<this->phne<<endl;
		}
		else{
			cout<<"\nName  doesn't exist\n";
		}
		fin1.close();
	}
	
};
int main(){
	Phonebook pb;                                  //class object created.
	int choice;
	while(true){
		cout<<"\nFIlE MENU\n"
		<<"1.Write record\n"
		<<"2.Display record\n"
		<<"3.Search record by name\n"
		<<"4.Update record\n"
		<<"5.Exit\n"
		<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				  pb.getdata();                                   //add a new record
				  pb.filewrite();                                 //write it to the file
				  break;
			case 2:
				pb.fileread();                                   //display all records
				break;
			case 3:
			     pb.searchphone();                              //search number by name
			     break;
			case 4:
				  pb.updatephone();                             //update any existing record
				  break;
		    case 5:
				  exit(0);
				  break;
			default:
				 cout<<"INVALID CHOICE";
		}
		
	}
	return 0;
}
