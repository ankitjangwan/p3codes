#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  cin>>n;
  int w[n+1];
  if(n<1){
    cout<<"0"<<endl;
    return 0;
  }
  if(n==1){
    cout<<"1"<<endl;
    return 0;
  }
  if(n==2){
    cout<<"2"<<endl;
    return 0;
  }
  w[2]=2;
  w[1]=1;
  for(int i=3;i<=n;++i){
    w[i]=w[i-1]+w[i-2];
  }
  cout<<w[n]<<endl;
  return 0;
}
