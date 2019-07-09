#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool isboundary(int x,int y,int n){
  if(x==0||y==0||x==n-1||y==n-1)return true;
  return false;
}

bool issafe(vector<int> v[],int x,int y,int n){
  if((x>=0&&x<n)&&(y>=0&&y<n)&&(v[x][y]==0))return true;
  return false;
}

void transform(vector<int> g[],int n){
  queue<pair<int,int> > q;
  int x,y;
  bool flag=true;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(g[i][j]==2){
        x=i;
        y=j;
        flag=false;
        break;
      }
    }
  }
  if(flag){
    cout<<"Error! Position of person not specified";
    return ;
  }
  q.push(make_pair(x,y));
  pair<int,int> p;
  while(!q.empty()){
    p=q.front();
    q.pop();
    x=p.first;
    y=p.second;
    g[x][y]=3;
    if(isboundary(x,y,n)){
      break;
    }
    if(issafe(g,x,y-1,n)){
      q.push(make_pair(x,y-1));
    }
    if(issafe(g,x-1,y,n)){
      q.push(make_pair(x-1,y));
    }
    if(issafe(g,x,y+1,n)){
      q.push(make_pair(x,y+1));
    }
    if(issafe(g,x+1,y,n)){
      q.push(make_pair(x+1,y));
    }
  }
}

bool isreachable(vector<int> g[],int n){
  transform(g,n);
  int i,j;
  for(i=0;i<n;++i){
    for(j=0;j<n;++j){
      cout<<g[i][j]<<' ';
    }
    cout<<endl;
  }
  for(i=0;i<n;++i){
    if(g[i][0]==3||g[0][i]==3||g[n-1][i]==3||g[i][n-1]==3){//3 means visited
      return true;
    }
  }
  return false;
}

int main(){
  int n;
  cin>>n;
  int val;
  vector<int> g[n];
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cin>>val;
      g[i].push_back(val);
    }
  }
  cout<<endl;
  if(isreachable(g,n)){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}
