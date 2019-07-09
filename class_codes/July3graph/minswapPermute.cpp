#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<unordered_set>
#include<algorithm>

using namespace std;

unordered_set<string> visited;


int countMinMoves(string str){
  int n=str.size();
  int j,level;
  string sorted_str=str;
  sort(sorted_str.begin(),sorted_str.end());
  queue<pair<string,int> > q;
  q.push(make_pair(str,0));
  visited.insert(str);
  pair<string,int> perm;
  string temp;
  while(!q.empty()){
    perm=q.front();
    temp=perm.first;
    level=perm.second;
    q.pop();
    if(temp==sorted_str){
      return level;
    }
    for(j=2;j<=n;++j){
      reverse(temp.begin(),temp.begin()+j);
      if(sorted_str==temp){
        return level+1;
      }
      if(visited.find(temp)==visited.end()){
        visited.insert(temp);
        q.push(make_pair(temp,level+1));
      }
      reverse(temp.begin(),temp.begin()+j);
    }
  }
  return -1;
}

int main(){
  string str;
  getline(cin,str);
  int n=countMinMoves(str);
  cout<<n<<endl;
  return 0;
}
