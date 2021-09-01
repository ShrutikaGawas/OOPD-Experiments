#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
        int n, i, roll, choice;
        char name[20], place[30], branch[20], search[20];


        fstream fobj;
        while(1)
        {
                cout<<"\n 1. Add a new entry";
                cout<<"\n 2. Display a particular file";
                cout<<"\n 3. Update a file";
                cout<<"\n 4. Exit";
                cout<<"\n\n";
                cin>>choice;

                switch(choice)
                {
                        case 1:{
                                cout<<"\n Enter your name:  ";
                                cin>>name;
                                cout<<"\n Enter your Roll No. :  ";
                                cin>>roll;
                                cout<<"\n Enter your Branch:  ";
                                cin>>branch;
                                cout<<"\n Enter the place where you stay:  ";
                                cin>>place;

                                fobj.open(name, ios::out);
                                fobj << name << endl;
                                fobj << roll << endl;
                                fobj << branch << endl;
                                fobj << place << endl;

                                fobj.close();
                                break;
                        }
                        case 2:{
                                cout<<"\n Enter the name of the student whose details are to be displayed:  ";
                                cin>>search;
                                fobj.open(search);
                                char s[100];
                                while(fobj.eof() == 0)
                                {
                                        fobj>>s;
                                        cout<<s<<" ";
                                }
                                cout<<"\n";
                                fobj.close();
                                break;
                        }
                        case 3:{
                                cout<<"\n Enter the name of the student whose details are to be channged:  ";
                                cin>> search;
                                fobj.open(search);
                                fobj.clear();
                                fobj << search <<endl;
                                cout<<"\n Enter your Roll No. :  ";
                                cin>>roll;
                                cout<<"\n Enter your Branch:  ";
                                cin>>branch;
                                cout<<"\n Enter the place where you stay:  ";
                                cin>>place;
                                fobj << roll << endl;
                                fobj << branch << endl;
                                fobj << place << endl;
                                fobj.close();
                                //***************
                                /*char name[20], roll[10], address[20], branch[20];
                                char search[20], temp[20], fname[20], delname[20], ch;
                                ifstream fin, fin1;
                                ofstream fout, fout1;
                                cout<<"\n Enter the name and roll no of the student to be searched:  ";
                                cin>>search >> temp;
                                fin1.open(search);
                                fobj.open("newnames", ios::out);
                                while(fin1>>fname)
                                {
                                        fin.open(fname, ios::binary|ios::in);
                                        while(fin>>name>>roll>>address>>branch)
                                        {
                                                if(strcmp(roll, temp) == 0)
                                                {
                                                        cout<<"\n Name:  "<<name;
                                                        cout<<"\n Roll No.:  "<<roll;
                                                        cout<<"\n Address:   "<<address;
                                                        cout<<"\n Branch:    "<<branch;
                                                        cout<<"\n\n Enter the new details:   ";
                                                        strcpy(delname, fname);
                                                        cout<<"\n Enter Name:  ";
                                                        cin>>name;
                                                        cout<<"\n Enter Roll No.:  ";
                                                        cin>>roll;
                                                        cout<<"\n Enter Address:   ";
                                                        cin>>address;
                                                        cout<<"\n Enter Branch:   ";
                                                        cin>>branch;

                                                        fobj << roll << endl;
                                                        fobj << branch << endl;
                                                        fobj << place << endl;
                                                        fobj.close();
                                                }
                                        }
                                }*/

                                //cout<<"\n Enter the roll no of the student to be searched:   ";


                                break;
                        }
                        case 4:{
                                exit(1);
                                break;
                        }
                }
        }
    }
