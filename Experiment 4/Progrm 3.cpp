#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout.setf(ios::showpoint);
	cout<<setw(5)<<"n"<<setw(15)<<"Inverse_of_n"<<setw(15)<<"Sum_of_terms"<<"\n\n";
	double term,sum=0;
	for(int i=1;i<=10;i++){
		term=1.0/float(i);
		sum=sum+term;
		cout<<setw(5)
		<<i<<setw(15)
		<<setiosflags(ios::scientific)
		<<setprecision(5)
		<<term
		<<setw(15)
		<<resetiosflags(ios::scientific)
		<<setprecision(5)
		<<sum
		<<endl;
	}
}
