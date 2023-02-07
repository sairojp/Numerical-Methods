#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 10;
int main(){
  float a[10][10],ratio;
  int i,j,k,n;
  cout<<"Enter the order of matrix "<<endl;
  cin>>n;
  cout<<"Enter the matrix"<<endl;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      cout<<"a"<<i<<j<<'\t';
      cin >> a[i][j];
    }
  }
  //augmenting identity matrix
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==j){
        a[i][j+n]=1;
      }
      else{
        a[i][j+n]=0;
      }
    }
  }
  //gauss jordan 
  for(i=1;i<=n;i++){
    if(a[i][i]==0){
      cout<<"Mathematical error"<<endl;
      exit(0);
    }
    for(j=1;j<=n;j++){
      if(i!=j){
        ratio=a[j][i]/a[i][i];
        for(k=1;k<=2*n;k++){
          a[j][k]=a[j][k]-ratio*a[i][k];
        }
      }
    }
  }
  //row operation to make principal diagonal 1
  for(i=1;i<=n;i++){
    for(j=n+1;j<=2*n;j++){
      a[i][j]=a[i][j]/a[i][i];
    }
  }
  //display
  cout<<"The inverse matrix is "<<endl;
   for(i=1;i<=n;i++){
    for(j=n+1;j<=2*n;j++){
      cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }
}