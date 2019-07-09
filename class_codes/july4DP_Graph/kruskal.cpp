#include<iostream>

using namespace std;


vector<int> parent;

void kruskal(vector<vector<int> >g ){
  int n=g.size();
  int edge_count=0;
  while(edge_count<n){// edges in a tree=n-1
    int min=INT_MAX;
  }
}

int main(){
  int v;
  cin>>v;
  vector<vector <int> > g;
  g.resize(v,vector<int> (v,-1) );//-1 means no edge;
  parent.resize(v);
  for(int i=0;i<v;++i){
    for(int j=0;j<n;++j){
      cin>>g[i][j];
    }
  }
  for(int i=0;i<v;++i){
    parent[i]=i;
  }
  kruskal(g);

  return 0;
}
