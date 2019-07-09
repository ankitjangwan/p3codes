#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  int i,j,sum;
  bool flag;
  for(i=0;i<n;++i){
    cin>>v[i];
  }
  int l[n];
  if(n>=0){
    l[0]=v[0];
  }
  for(i=1;i<n;++i){
    flag=false;
    sum=INT_MIN;
    for(j=i-1;j>=0;--j){
      if(v[j]<v[i]&&l[j]+v[i]>sum){
        sum=l[j]+v[i];
        l[i]=sum;
        flag=true;
      }
    }
    if(flag==false){
      l[i]=v[i];
    }
  }
  return 0;
}
