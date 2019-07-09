#include<iostream>
#include<vector>

using namespace std;

int main(){
  int  v;
  cin>>v;
  int graph[v][v];
  int i,j;
  for(i=0;i<v;++i){
    for(j=0;j<v;++j){
      cin>>graph[i][j];
    }
  }
  for(i=0;i<v;++i){
    for(j=0;j<v;++j){
      cout<<graph[i][j]<<' ';
    }
    cout<<endl;
  }
  return 0;
}
