#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  // v.resize(n);
  int i;
  for(i=0;i<n;++i){
    cin>>v[i];
  }
  //Method 1: Using alteration of LCS
  // vector<int> v2(v);
  // sort(v.begin(),v.end());
  // int l[n+1][n+1];
  // for(int i=0;i<=n;++i){
  //   for(int j=0;j<=n;++j){
  //     if(i==0||j==0){
  //       l[i][j]=0;
  //     }
  //     else if(v[i]==v2[j]){
  //       l[i][j]=1+l[i-1][j-1];
  //     }
  //     else{
  //       l[i][j]=max(l[i-1][j],l[i][j-1]);
  //     }
  //   }
  // }
  //cout<<l[n][n];

  //Method 2:
  bool flag;
  int l[n];
  int len;
  if(n>=0){
    l[0]=1;
  }
  for(int i=1;i<n;++i){
    flag=false;
    len=INT_MIN;
    for(int j=i-1;j>=0;--j){
      if(v[j]<v[i]&&len<1+l[j]){
        flag=true;
        l[i]=1+l[j];
        len=l[i];
      }
    }
    if(flag==false){
      l[i]=1;
    }
  }
  for(int i=0;i<n;++i){
    cout<<l[i]<<' ';
  }
  cout<<endl;
  return 0;
}
