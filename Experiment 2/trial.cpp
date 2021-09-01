#include<iostream> 
using namespace std; 
class alpha 
{ 
 int a1,a2; 
 public: 
  alpha(int i,int j) 
  { 
   a1=i; 
   a2=j; 
   cout<<"\nalpha constructed"; 
  } 
  ~alpha() 
  { 
   cout<<"\nalpha  destroyed"; 
  } 
  void show_alpha() 
  { 
   cout<<"\n a1 = "<<a1<<"\t a2= "<<a2; 
  } 
}; 
class beta 
{ 
 float q,p; 
 public: 
 beta(float a, float b):p(a),q(b+p) 
 { 
  cout<<"\nBeta constructed"; 
 } 
 ~beta() 
 { 
  cout<<"\nBeta Destroyed"; 
 } 
 void show_beta() 
 { 
  cout<<"\n p = "<<p<<" q = "<<q; 
 } 
}; 
class gamma : public beta, public alpha 
{ 
 int u,v; 
 public: 
  gamma(int a, int b, float c):alpha(a*2,a*3),beta(c,c),u(a) 
  { 
   v=b; 
   cout<<"\ngamma constructed"; 
  } 
  ~gamma() 
  { 
   cout<<"\ngamma Destroyed"; 
  } 
  void show_gamma() 
  { 
   cout<<"\n u = "<<u<<"\t v = "<<v; 
  } 
}; 
int main() 
{ 
 gamma g(2,4,2.5); 
  
 cout<<"\n Diplay members values:"; 
  
 g.show_alpha(); 
 g.show_beta(); 
 g.show_gamma(); 
  
 return 0; 
} 
 
 
