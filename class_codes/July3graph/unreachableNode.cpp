#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> level;
vector<bool> visited;

void insert_edge(vector<int> g[],int v1,int v2){
  g[v1].push_back(v2);
  g[v2].push_back(v1);
}

void bfs(vector<int> g[],int s){
  level[s]=0;
  queue<int> q;
  q.push(s);
  visited[s]=true;
  while(!q.empty()){
    int v=q.front();
    q.pop();
    for(auto i:g[v]){
      if(!visited[i]){
        visited[i]=true;
        q.push(i);
        level[i]=level[v]+1;
      }
    }
  }
}

int main(){
  int v,e;
  cin>>v>>e;
  level.resize(v);
  visited.resize(v);
  vector<int> g[v];
  int i,v1,v2;
  for(i=0;i<e;++i){
    cin>>v1>>v2;
    insert_edge(g,v1,v2);
  }
  bfs(g,0);
  for(i=0;i<v;++i){
    if(!visited[i]){
      cout<<i<<" is unreachable"<<endl;
    }
  }
  return 0;
}
