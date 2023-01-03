#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  float x[5];
  float temp;
  cout<<"Enter the number of variables"<<endl;
  cin>>n;
  float a[5][6];
  for(int i=0;i<n;i++){
    for(int j=0;j<=n;j++){
      cout<<"Enter the elements of a"<<i+1<<j+1<<endl;
      cin>>a[i][j];
    }
  }
  for(int j=0;j<n;j++){
    if (fabs(a[j][j])<0.000005){
      cout<<"Errror"<<endl;
    }
    for(int i=0;i<n;i++){
      if(i!=j){
        temp=a[i][j];
        for(int k=0;k<n+1;k++){
          a[i][k]=a[i][k]-(temp/a[j][j])*a[j][k];
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    x[i]=a[i][n]/a[i][i];
    cout<<"Solution x"<<i+1<<" is "<<x[i]<<endl;
  }
}