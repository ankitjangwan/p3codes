#include<unordered_map>
#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  unordered_map<int,int> freq;
  for(i=0;i<n;++i){
    if(freq.find(arr[i])!=freq.end()){
      cout<<arr[i]<<' ';
    }
    freq[arr[i]]++;
  }
  cout<<endl;
  // for(auto j:freq){
  //   cout<<j.first<<' '<<j.second<<endl;
  // }
  cout<<endl;
  return 0;
}
