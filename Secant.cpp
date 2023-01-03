#include<iostream>
#include<math.h>
#include<cstdlib>

using namespace std;
float f(float x){
    return x*x*x-2*x-5;
    //return cos(x)-x*exp(x);
  }
int main()
{
  float a,b,c,e;
  cout<<"Enter the initial guesses"<<endl;
  cout<<"a:";
  cin>>a;
  cout<<"b:";
  cin>>b;
  cout<<"Enter tolerable error :"<<endl;
  cin>>e;
  int count=0;
  cout<<"------Secant method-------"<<endl;
  do{
    count++;
    if(fabs(f(b)-f(a))<0.000005){
      cout<<"error";
    }
    if(count>500){
      cout<<"Non convergent"<<endl;
    }
    c=(a*f(b)-b*f(a))/(f(b)-f(a));
    a=b;
    b=c;
    cout<<"Iteration "<<count<<"\t"<<c<<endl;
  }
  while(fabs(f(c))>e);
  cout<<"The root is "<<c;
  
  
}