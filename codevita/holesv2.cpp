#include<iostream>

using namespace std;

int main(){
  bool flag;
  int h,b;
  cin>>h;
  long holes[h+1];
  int i,j;
  for(i=1;i<=h;++i){
    cin>>holes[i];
  }
  cin>>b;
  long balls[b+1];
  for(i=1;i<=b;++i){
    cin>>balls[i];
  }
  int pos[b+1];
  int lmt[h+1];
  for(i=0;i<=h;++i){
    lmt[i]=i;
  }
  for(i=0;i<=b;++i){
    pos[i]=0;
  }
  for(i=1;i<=b;++i){
    // flag=false;
    for(j=h;j>0;--j){
      if((holes[j]>=balls[i])&&(lmt[j]!=0)){
        // flag=true;
        pos[i]=j;
        lmt[j]--;
        break;
      }
    }
    // if(!flag){
    //   pos[i]=0;
    // }
  }
  for(i=1;i<=b;++i){
    cout<<pos[i]<<' ';
  }
  return 0;
}
