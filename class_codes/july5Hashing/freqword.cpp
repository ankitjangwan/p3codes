#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
  string str;
  getline(cin,str);
  stringstream ss(str);
  string word;
  unordered_map<string,int> freq;
  while(ss>>word){
    freq[word]++;
  }
  for(auto i:freq){
    cout<<i.first<<' '<<i.second<<endl;
  }
  return 0;
}
