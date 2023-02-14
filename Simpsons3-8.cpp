#include <iostream>
using namespace std;
float f(float x){
  return x*x;
}
int main(){
  float a,b,h,sum1,sum2,sum3,result;
  int n,i;
  cout<<"Enter the interval from a to b"<<endl;
  cin>>a;
  cin>>b;
  cout<<"Enter the  stripes(n)"<<endl;
  cin>>n;
  if(n%3!=0){
    cout<<"n is not even"<<endl;
    exit(0);
  }
  h=(b-a)/n;
  sum1 = f(a)+f(b);
  for(i=1;i<=n-1;i++){
    if(i%3==0){
      sum3=sum3+f(a+i*h);
    }
    else
    sum2=sum2+f(a+i*h);
  }
  result=3*h/8 *(sum1+3*sum2+2*sum3);
  cout<<"The result is "<<result;
}