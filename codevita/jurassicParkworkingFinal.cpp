#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<climits>

using namespace std;
int safezone[1002][1002];
vector<vector<int> > dino_dist;
vector<vector<int> > g1dist;
vector<vector<int> > g2dist;
vector<vector<int> > g3dist;

void dist_from_gate1(char[][1002],int,int,pair<int,int>);
void dist_from_gate2(char[][1002],int,int,pair<int,int>);
void dist_from_gate3(char[][1002],int,int,pair<int,int>);
void findSafeFromDino(char[][1002],pair<int,int>,int,int);
bool isSafeForMan(int ,int ,char[][1002],int ,int );
bool isSafeForDino(int ,int ,char[][1002],int ,int );

int min3(const int &a,const int &b,const int &c){
  if(a<b){
    if(a<c)return a;
    }
  else{
    if(b<c)return b;
  }
  return c;
}

int main(){
  int r,c;
  cin>>r>>c;
  pair<int,int> g1,g2,g3,cage;
  int i,j;
  dino_dist.resize(r+1,vector<int>(c+1,INT_MAX));
  g1dist.resize(r+1,vector<int>(c+1,INT_MAX));
  g2dist.resize(r+1,vector<int>(c+1,INT_MAX));
  g3dist.resize(r+1,vector<int>(c+1,INT_MAX));
  // for(i=1;i<=r;++i){
  //   for(j=1;j<=c;++j){
  //     cout<<g1dist[i][j]<<' ';
  //   }
  //   cout<<endl;
  // }
  cin>>i>>j;
  g1=make_pair(i,j);
  cin>>i>>j;
  g2=make_pair(i,j);
  cin>>i>>j;
  g3=make_pair(i,j);
  cin>>i>>j;
  cage=make_pair(i,j);
  char g[1002][1002];
  for(i=1;i<=r;++i){
    for(j=1;j<=c;++j){
      cin>>g[i][j];
    }
  }
  int safe=0,grass=0;
  findSafeFromDino(g,cage,r,c);

  for(i=1;i<=r;++i){
    for(j=1;j<=c;++j){
      if(g[i][j]=='G'){
        grass++;//COUNT GRASS CELL
      }
    }
  }

  dist_from_gate1(g,r,c,g1);
  dist_from_gate2(g,r,c,g2);
  dist_from_gate3(g,r,c,g3);

  int dino_g1,dino_g2,dino_g3;//distance of dino from each gate
  dino_g1=g1dist[cage.first][cage.second];
  dino_g2=g2dist[cage.first][cage.second];
  dino_g3=g3dist[cage.first][cage.second];

  for(i=1;i<=r;++i){
    for(j=1;j<=c;++j){
      if((g[i][j]=='G')&&(g1dist[i][j]<dino_g1||g2dist[i][j]<dino_g2||g3dist[i][j]<dino_g3)){
        safezone[i][j]=true;
      }
    }
  }

  /*for(i=1;i<=r;++i){
    for(j=1;j<=c;++j){
      cout<<safezone[i][j]<<' ' ;
    }
    cout<<endl;
  }
*/
  for(i=1;i<=r;++i){
    for(j=1;j<=c;++j){
      if(safezone[i][j]){
        safe++;
      }
    }
  }
  //cout<<"safe: "<<safe<<" Grass: "<<grass<<endl;
  float safetyindex;
  safetyindex=(float)(safe*100)/grass;
  cout<<fixed<<setprecision(2)<<safetyindex<<endl;
  cout<<endl;
  return 0;
}


//functions are strarting here

bool isSafeForDino(int x,int y,char g[][1002],int r,int c ){
  if((x>0&&x<=r)&&(y>0&&y<=c)&&(g[x][y]=='G'||g[x][y]=='M'))return true;
  return false;
}

bool isSafeForMan(int x,int y,char g[][1002],int r,int c){
  if((x>0&&x<=r)&&(y>0&&y<=c)&&(g[x][y]=='G'))return true;
  return false;
}


void findSafeFromDino(char g[][1002],pair<int,int> pos,int r,int c){
  bool visited[1002][1002];
  memset(visited,false,sizeof(visited));
  queue<pair<int,int> >q;
  q.push(pos);
  int  x=pos.first;
  int y=pos.second;
  visited[x][y]=true;
  dino_dist[x][y]=0;
  while(!q.empty()){
    pos=q.front();
    q.pop();
    int  x=pos.first;
    int y=pos.second;
    // cout<<x<<' '<<y<<endl;
    if(isSafeForDino(x+1,y,g,r,c)&&!visited[x+1][y]){
      visited[x+1][y]=true;
      dino_dist[x+1][y]=dino_dist[x][y]+1;
      q.push(make_pair(x+1,y));
    }
    if(isSafeForDino(x-1,y,g,r,c)&&!visited[x-1][y]){
      visited[x-1][y]=true;
      dino_dist[x-1][y]=dino_dist[x][y]+1;
      q.push(make_pair(x-1,y));
    }
    if(isSafeForDino(x,y+1,g,r,c)&&!visited[x][y+1]){
      visited[x][y+1]=true;
      dino_dist[x][y+1]=dino_dist[x][y]+1;
      q.push(make_pair(x,y+1));

    }
    if(isSafeForDino(x,y-1,g,r,c)&&!visited[x][y-1]){
      visited[x][y-1]=true;
      dino_dist[x][y-1]=dino_dist[x][y]+1;
      q.push(make_pair(x,y-1));
    }
  }
  for(x=1;x<=r;++x){
    for(y=1;y<=c;++y){
      if(!visited[x][y]&&g[x][y]=='G'){
        safezone[x][y]=true;
      }
    }
  }
}
void dist_from_gate1(char g[][1002],int r,int c,pair<int,int> pos){
  bool visited[1002][1002];
  memset(visited,false,sizeof(visited));
  queue<pair<int,int> >q;
  q.push(pos);
  int  x=pos.first;
  int y=pos.second;
  visited[x][y]=true;
  g1dist[x][y]=0;
  while(!q.empty()){
    pos=q.front();
    q.pop();
    int  x=pos.first;
    int y=pos.second;
    // cout<<x<<' '<<y<<endl;
    if(isSafeForMan(x+1,y,g,r,c)&&!visited[x+1][y]){
      visited[x+1][y]=true;
      g1dist[x+1][y]=g1dist[x][y]+1;
      q.push(make_pair(x+1,y));
    }
    if(isSafeForMan(x-1,y,g,r,c)&&!visited[x-1][y]){
      visited[x-1][y]=true;
      g1dist[x-1][y]=g1dist[x][y]+1;
      q.push(make_pair(x-1,y));
    }
    if(isSafeForMan(x,y+1,g,r,c)&&!visited[x][y+1]){
      visited[x][y+1]=true;
      g1dist[x][y+1]=g1dist[x][y]+1;
      q.push(make_pair(x,y+1));

    }
    if(isSafeForMan(x,y-1,g,r,c)&&!visited[x][y-1]){
      visited[x][y-1]=true;
      g1dist[x][y-1]=g1dist[x][y]+1;
      q.push(make_pair(x,y-1));
    }
  }
}

void dist_from_gate2(char g[][1002],int r,int c,pair<int,int> pos){
  bool visited[1002][1002];
  memset(visited,false,sizeof(visited));
  queue<pair<int,int> >q;
  q.push(pos);
  int  x=pos.first;
  int y=pos.second;
  visited[x][y]=true;
  g2dist[x][y]=0;
  while(!q.empty()){
    pos=q.front();
    q.pop();
    int  x=pos.first;
    int y=pos.second;
    // cout<<x<<' '<<y<<endl;
    if(isSafeForMan(x+1,y,g,r,c)&&!visited[x+1][y]){
      visited[x+1][y]=true;
      g2dist[x+1][y]=g2dist[x][y]+1;
      q.push(make_pair(x+1,y));
    }
    if(isSafeForMan(x-1,y,g,r,c)&&!visited[x-1][y]){
      visited[x-1][y]=true;
      g2dist[x-1][y]=g2dist[x][y]+1;
      q.push(make_pair(x-1,y));
    }
    if(isSafeForMan(x,y+1,g,r,c)&&!visited[x][y+1]){
      visited[x][y+1]=true;
      g2dist[x][y+1]=g2dist[x][y]+1;
      q.push(make_pair(x,y+1));

    }
    if(isSafeForMan(x,y-1,g,r,c)&&!visited[x][y-1]){
      visited[x][y-1]=true;
      g2dist[x][y-1]=g2dist[x][y]+1;
      q.push(make_pair(x,y-1));
    }
  }
}


void dist_from_gate3(char g[][1002],int r,int c,pair<int,int> pos){
  bool visited[1002][1002];
  memset(visited,false,sizeof(visited));
  queue<pair<int,int> >q;
  q.push(pos);
  int  x=pos.first;
  int y=pos.second;
  visited[x][y]=true;
  g3dist[x][y]=0;
  while(!q.empty()){
    pos=q.front();
    q.pop();
    int  x=pos.first;
    int y=pos.second;
    // cout<<x<<' '<<y<<endl;
    if(isSafeForMan(x+1,y,g,r,c)&&!visited[x+1][y]){
      visited[x+1][y]=true;
      g3dist[x+1][y]=g3dist[x][y]+1;
      q.push(make_pair(x+1,y));
    }
    if(isSafeForMan(x-1,y,g,r,c)&&!visited[x-1][y]){
      visited[x-1][y]=true;
      g3dist[x-1][y]=g3dist[x][y]+1;
      q.push(make_pair(x-1,y));
    }
    if(isSafeForMan(x,y+1,g,r,c)&&!visited[x][y+1]){
      visited[x][y+1]=true;
      g3dist[x][y+1]=g3dist[x][y]+1;
      q.push(make_pair(x,y+1));

    }
    if(isSafeForMan(x,y-1,g,r,c)&&!visited[x][y-1]){
      visited[x][y-1]=true;
      g3dist[x][y-1]=g3dist[x][y]+1;
      q.push(make_pair(x,y-1));
    }
  }
}
