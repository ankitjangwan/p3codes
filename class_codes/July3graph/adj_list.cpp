#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insert_edge(vector<int> l[],int v1,int v2){

  l[v1].push_back(v2);
  l[v2].push_back(v1);
}

void display(vector<int> l[],int v){
  for(int i=0;i<v;++i){
    cout<<i<<" -> ";
    for(auto j:l[i]){
      cout<<j<<' ';
    }
    cout<<endl;
  }
}

int main(int argc, char const *argv[]) {
  int v,e;
  cin>>v>>e;
  vector<int> l[v];
  int i;
  int v1,v2;
  for(i=0;i<e;++i){
    cin>>v1>>v2;
    insert_edge(l,v1,v2);
  }
  display(l,v);
  return 0;
}
