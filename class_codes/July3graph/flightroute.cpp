//incomplete

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<bool> visited;
vector<int> level;

int shortestPath(vector<int> g[],int x,int y){
  if(x==y){
    return 1;
  }

  queue<int> q;
  q.push(x);
  visited[x]=true;
  level[x]=1;
  while(!q.empty()){
    int i=q.front();
    q.pop();
    if(i==y){
      return level[i];
    }
    for(auto j:g[i]){
      if(!visited[j]){
        q.push(j);
        level[j]=level[i]+1;
      }
    }
  }
  return -1;
}

int main(){
  int v,e,t,c;
  cin>>v>>e>>t>>c;
  vector<int> g[v+1];
  visited.resize(v+1);
  level.resize(v+1);
  int v1,v2;
  int  i;
  for(i=0;i<e;++i){
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }
  cin>>v1>>v2;
  int x=shortestPath(g,v1,v2);
  cout<<x<<endl;
  return 0;
}
