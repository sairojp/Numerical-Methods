#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
float f(float x){
    //return x*x*x-4*x-9;
    return cos(x)-x*exp(x);
  }
int main()
{
  float a,b,c,e;
  input:
  cout<<"Enter the initial guesses"<<endl;
  cout<<"a:";
  cin>>a;
  cout<<"b:";
  cin>>b;
  cout<<"Enter tolerable error :"<<endl;
  cin>>e;
  if((f(a)*f(b))>0){
    cout<<"Incorrect initial guess"<<endl;
    cout<<"Input again"<<endl;
    goto input;
  }
  do{
    c=(a+b)/2;
    if ((f(a)*f(c))<0){
      b=c;
    }
    else{
    a=c;
  }
  }
  while(fabs(f(c))>e);
  
  cout<<"The root is "<<c;

}
  