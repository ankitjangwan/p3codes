//incomplete
#include<iostream>
#include<unordered_map>
#include<cstring>

using namespace std;

int  main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }
  // int prefix_sum[n];
  // memset(prefix_sum,0,sizeof(prefix_sum));
  // prefix_sum[0]=arr[0];
  // for(int  i=1;i<n;++i){
  //   prefix_sum[i]=arr[i]+prefix_sum[i-1];
  // }
  unordered_map<int,int> prefix_sum;
  int sum=0;
  for(int i=0;i<n;++i){
    sum=sum+arr[i];
    if(prefix_sum.find(sum)!=prefix_sum.end()){
      unordered_map<int,int>::iterator it=prefix_sum.find(sum);
      cout<<"found at position from: "<<it->second+1<<"to "<<i<<endl;
      return 0;
    }
    prefix_sum[sum]=i;
  }
  cout<<endl;
  return 0;
}
