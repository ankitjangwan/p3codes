#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main(){
  int n,m;
  unordered_set<int> s;
  cin>>n>>m;
  int arr[n];
  int arr2[n];
  int i;
  for(i=0;i<n;++i){
    cin>>arr[i];
  }
  for(i=0;i<m;++i){
    cin>>arr2[i];
  }

  for(i=0;i<n;++i){
    // if(s.find(arr[i])==s.end())
    // {
      s.insert(arr[i]);
    // }
  }
  for(i=0;i<m;++i){
    // if(s.find(arr2[i])==s.end()){
      s.insert(arr2[i]);
    // }
  }
  unordered_set<int>::iterator it=s.begin();
  vector<int> v;
  while(it!=s.end()){
    v.push_back(*it);
    it++;
  }
  for(auto j:v){
    cout<<j<<' ';
  }
  cout<<endl;
  return 0;
}
