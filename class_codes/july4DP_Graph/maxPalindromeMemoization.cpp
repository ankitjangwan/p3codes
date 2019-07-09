#include<iostream>
#include<vector>

using namespace std;

vector< vector <int> > len;
vector< vector <bool> > calculated;

int max(const int &a,const int &b){
  if(a<b){
    return b;
  }
  return a;
}

int lps(string str,int l,int r){
  if(l>r){
    return 0;
  }
  if(l==r){
    return 1;
  }
  if(!calculated[l][r]){
    if(str[l]==str[r]){
      len[l][r]=2+lps(str,l+1,r-1);
    }
    else{
      len[l][r]=max(lps(str,l+1,r),lps(str,l,r-1));
    }
    calculated[l][r]=true;
  }
  return len[l][r];
  return 0;
}

int main(){
  string str;
  getline(cin>>ws,str);
  int n=str.size();
  len.resize(n+1,vector<int>(n+1,0));
  // for(int i=0;i<=n;++i){
  //   len[i].resize(n+1,0);
  // }
  calculated.resize(n+1,vector<bool>(n+1,false));
  // for(int i=0;i<=n;++i){
  //   calculated[i].resize(n+1,false);
  // }
  int l=lps(str,0,n);
  cout<<l<<   endl;
  return 0;
}
