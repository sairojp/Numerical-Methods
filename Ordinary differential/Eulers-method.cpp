#include <iostream>
using namespace std;
float f(float x ,float y){
  return x*x-y;
}
int main(){
  float x0,y0,n,xn,h,x,y,k;
  int i,j;
  cout<<"Enter the initial condition x0 and y0"<<endl;
  cin>>x0;
  cin>>y0;
  cout<<"Enter the interval n and xn"<<endl;
  cin>>n;
  cin>>xn;

  h = (xn-x0)/n;
  x=x0;
  y=y0;

  for(i=1;i<=n;i++){
    k=h*f(x,y);
    x=x+h;
    y=y+k;
    cout<<"x"<<i<<"\t"<<x<<endl;
    cout<<"y"<<i<<"\t"<<y<<endl;

  }





}