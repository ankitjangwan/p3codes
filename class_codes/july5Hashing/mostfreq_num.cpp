#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

bool sortby_seccond(const pair<int,int> &a,const pair<int,int> &b){
  return (a.second > b.second);
}

int  main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }
  unordered_map<int,int> freq;
  for(int i=0;i<n;++i){
    freq[arr[i]]++;
  }
  vector<pair <int,int> > f;
  for(auto i=freq.begin();i!=freq.end();++i){
    f.push_back(make_pair(i->first,i->second));
  }
  vector< pair <int,int> >::iterator it;
  sort(f.begin(),f.end(),sortby_seccond);

    // for(it=f.begin();it!=f.end();++it ){
    //   cout<<it->first<<' '<<it->second<<endl;
    // }
  cout<<f[0].first<<endl;
  return 0;
}
