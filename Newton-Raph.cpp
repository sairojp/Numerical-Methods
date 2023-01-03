#include<iostream>
#include<math.h>
#include<cstdlib>

using namespace std;
float f(float x){
    return x*x*x*x-x-10;
  }
  float d(float x){
    return 4*x*x*x-1;
  }
  
int main()
{
  float a,b,e;
  cout<<"Enter the initial guess"<<endl;
  cout<<"a:";
  cin>>a;
  cout<<"Enter tolerable error :"<<endl;
  cin>>e;
  int count=0;
  cout<<"-----Newton-Raphson method-----"<<endl;
  do{
    count++;
    if(fabs(d(a))<0.000005){
      cout<<"error";
    }
    if(count>500){
      cout<<"Non convergent"<<endl;
      cout<<"error";
    }
    b=a-f(a)/d(a);
    a=b;
    cout<<"Iteration "<<count<<"\t"<<b<<endl;
  }
  while(fabs(f(b))>e);
  cout<<"The root is "<<b;
}