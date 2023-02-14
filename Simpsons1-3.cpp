#include <iostream>
using namespace std;
float f(float x){
  return x*x;
}
int main(){
  float a,b,h,sum1,sumeven,sumodd,result;
  int n,i;
  cout<<"Enter the interval from a to b"<<endl;
  cin>>a;
  cin>>b;
  cout<<"Enter the  stripes(n)"<<endl;
  cin>>n;
  if(n%2!=0){
    cout<<"n is not even"<<endl;
    exit(0);
  }
  h=(b-a)/n;
  sum1 = f(a)+f(b);
  for(i=1;i<=n-1;i++){
    if(i%2==0){
      sumeven=sumeven+f(a+i*h);
    }
    else
    sumodd=sumodd+f(a+i*h);
  }
  result=h/3 *(sum1+2*sumeven+4*sumodd);
  cout<<"The result is "<<result;
}