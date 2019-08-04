#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
  int b,h,i,j;
  cin>>h;
  int holes[h+1];
  int lmt[h+1];
  for(i=1;i<=h;++i){
    cin>>holes[i];
  }
  cin>>b;
  int balls[h+1];
  int pos[b+1];
  for(i=1;i<=b;++i){
    cin>>balls[i];
  }
  for(i=1;i<=h;++i){
    lmt[i]=i;
  }
  // for(i=1;i<=b;++i){
  //   for(j=h;j>0;--j){
  //     cout<<holes[j]<<endl;//<<' '<<balls[i]
  //     if((holes[j]>=balls[i])&&(lmt[j]!=0)){
  //       pos[i]=j;
  //       lmt[j]--;
  //       break;
  //     }
  //   }
  // }
  for(i=1;i<=h;++i){
    cout<<holes[i]<<' ';
  }
  cout<<endl;
  return 0;
}
