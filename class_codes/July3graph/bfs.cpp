#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> level;
vector<bool> visited;

void insert_edge(vector<int> g[],int v1,int v2){
  g[v1].push_back(v2);
  g[v2].push_back(v1);
}

void bfs(vector<int> g[],int s){
  queue<int> q;
  q.push(s);
  visited[s]=true;
  level[s]=0;
  int v;
  while(!q.empty()){
    v=q.front();
    q.pop();
    // cout<<v<<" -> ";
    for(auto i:g[v]){
      if(!visited[i]){
        q.push(i);
        level[i]=level[v]+1;
        visited[i]=true;
      }
    }
  }
}

int main(){
  int v,e;
  cin>>v>>e;
  vector<int> g[v];
  level.resize(v);
  visited.resize(v);
  int i,v1,v2;
  for(i=0;i<e;++i){
    cin>>v1>>v2;
    insert_edge(g,v1,v2);
  }
  bfs(g,0);
  cout<<endl;
  for(i=0;i<v;++i){
    cout<<i<<" : "<<level[i]<<endl;
  }
  return 0;
}
