#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void display(){
	ifstream fin;
	char fname[20];
	fin.open("name.dat",ios::binary|ios::in);
	while(fin>>fname){
		cout<<fname<<" ";
	}
	fin.close();
}
void addrec(){
	char name[20],rollno[10],address[20],branch[20];
	char fname[20];
	ofstream fout,fout1;
	cout<<"Enter Student Name: \n";
	cin>>name;
	cout<<"Enter Rollno: \n";
	cin>>rollno;
	cout<<"Enter Address: \n";
	cin>>address;
	cout<<"Enter Branch: \n";
	cin>>branch;
	strcpy(fname,name);
	strcat(fname,".dat");
	fout.open(fname,ios::binary);
	fout1.open("name.dat",ios::app);
	fout<<setw(20)<<name<<setw(10)<<rollno<<setw(20)<<address<<setw(20)<<branch<<"\n";
	fout1<<fname<<" ";
	fout1.close();
	fout.close();
}

void search(){
	char name[20],rollno[10],address[20],branch[20];
	char temp[20],fname[20],delname[20],ch;
	ifstream fin,fin1;
	ofstream fout,fout1;
	cout<<"Enter rollno to be searched: ";
	cin>>temp;
	fin1.open("name.dat",ios::binary);
	fout1.open("newnames.dat",ios::binary);        //make a new name file
	while(fin1>>fname){
		fin.open(fname,ios::binary|ios::in);
		while(fin>>name>>rollno>>address>>branch){
			if(strcmp(rollno,temp)==0)
			{
				cout<<"Student Name: "<<name<<endl;
				cout<<"Rollno: "<<rollno<<endl;
				cout<<"Address: "<<address<<endl;
				cout<<"Branch: "<<branch<<endl;
				cout<<"Do you wish to update your information?(Y or N) ";
				cin>>ch;
				if(ch=='Y')
				{
					strcpy(delname,fname);
					cout<<"Enter new info: \n";
					cout<<"Enter Student Name: \n";
	                cin>>name;
	                cout<<"Enter Rollno: \n";
	                cin>>rollno;
	                cout<<"Enter Address: \n";
	                cin>>address;
	                cout<<"Enter Branch: \n";
	                cin>>branch;
					strcpy(fname,name);
					strcat(fname,".dat");
					fout.open(fname,ios::binary);
					fout<<setw(20)<<name<<setw(10)<<rollno<<setw(20)<<address<<setw(20)<<branch<<"\n";
					continue;
			    }
			    else{
			    	cout<<"info not changed \n";
			    }
			}
			fout1<<fname<<" ";
			
		}
	}
	fin.close();
	fin1.close();
	fout1.close();
	remove(delname);
	remove("names.dat");
	rename("newnames.dat","names.dat");
}

int main(){
	int ch;
	while(1){
	    cout<<"1.ADD RECORD\n";
	    cout<<"2.SEARCH\n";
	    cout<<"3.DISPLAY ALL RECORDS\n";
		cin>>ch;
		switch(ch){
			case 1:
				   addrec();
				   break;
			case 2:
				   search();
				   break;
			case 3:
				   display();
				   break;
			
		}
	}
}
