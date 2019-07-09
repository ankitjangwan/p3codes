#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
bool visited[1000];
vector<int> level;

void addedge(vector<int> g[],int v1,int v2){
    g[v1].push_back(v2);
    g[v2].push_back(v1);
}

void dfs(vector<int> g[],int source){
    cout<<source<<"->";
    visited[source]=true;
    int i;
    for(i=0;i<g[source].size();++i){
        if(!visited[g[source][i]]){
            level[g[source][i]]=level[source]+1;
            dfs(g,g[source][i]);
        }
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> g[v];
    level.resize(v);
    int i,v1,v2;
    for(i=0;i<e;++i){
        cin>>v1>>v2;
        addedge(g,v1,v2);
    }
    level[0]=0;
    dfs(g,0);
    cout<<"end"<<endl;
    for(i=0;i<v;++i){
        cout<<i<<" : "<<level[i]<<endl;
    }
    return 0;
}
