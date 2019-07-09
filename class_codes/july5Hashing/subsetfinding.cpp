#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
  int n,m;
  bool flag=true;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  for(int i=0;i<m;++i){
    cin>>b[i];
  }
  unordered_set<int> s;
  for(int i=0;i<n;++i){
    s.insert(a[i]);
  }
  for(int i=0;i<m;++i){
    if(s.find(b[i])==s.end()){
      flag=false;
      break;
    }
  }
  if(flag==true){
    cout<<"subset"<<endl;
  }
  else{
    cout<<"not subset"<<endl;
  }
  return 0;
}
