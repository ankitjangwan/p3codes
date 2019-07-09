#include<iostream>
#include<vector>

using namespace std;

int max(int a,int b){
  if(a<b)return b;
  return a;
}

int main(){
  string str;
  getline(cin>>ws,str);
  int n=str.size();
  int i,j;
  vector<vector <int> > lps(n,vector<int>(n));
  // lps.resize(n,vector<int>(n,0));
  for(i=0;i<n;++i){
    lps[i][i]=1;
  }
  int k;
  for(k=1;k<n;++k){
    for(i=0;i+k<n;++i){
      j=i+k;
      if(str[i]==str[j]){
        lps[i][j]=2+lps[i+1][j-1];
      }
      else{
        lps[i][j]=max(lps[i+1][j],lps[i][j-1]);
      }
    }
  }
  cout<<lps[0][n-1]<<endl;
  return 0;
}
