#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int char_count=0,word_count=0,line_count=0;
  char text;
  cout<<"Enter Text: ";
  cin.get(text);
  cout<<"Entered Text is:";
  while(text!='\n')
  {
  	 cout.put(text);
  	char_count++;
  	if(text=='.'||text=='?'||text=='!')
  	  line_count++;
  	if(text==' ')
  	  word_count++;
  	  cin.get(text);
  }
  cout<<setw(18)<<"\n\nNumber of Lines"<<setw(18)<<"Number of words"<<setw(23)<<"Number of Characters"<<"\n\n";
  cout<<right<<setw(15)<<line_count<<right<<setw(18)<<word_count<<right<<setw(23)<<char_count;
}
