#include <iostream>
using namespace std;
float f(float x){
  return x*x;
}
int main(){
  float a,b,h,sum1,sum2,result;
  int n,i;
  cout<<"Enter the interval from a to b"<<endl;
  cin>>a;
  cin>>b;
  cout<<"Enter the  stripes(n)"<<endl;
  cin>>n;
  h=(b-a)/n;
  sum1 = f(a)+f(b);
  for(i=0;i<=n-1;i++){
    sum2=sum2+f(a+i*h);
  }
  result=h/2 *(sum1+2*sum2);
  cout<<"The result is "<<result<<endl;
};