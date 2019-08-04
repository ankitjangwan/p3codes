#include<iostream>
#include<vector>
#include<climits>
#include<cstring>
using namespace std;

int assignmin(){
  return INT_MIN;
}

int main(){
  int n,time,p,i,j;//players=p
  int max,max_pos;//max steps of player, index of max step of player
  cin>>n;
  cin>>time;
  int player_ahead_count[104];
  memset(player_ahead_count,0,sizeof(player_ahead_count));
  p=time;
  int step[104][104];
  for(i=1;i<=n;++i){
    for(j=1;j<=p+1;++j){
      cin>>step[i][j];
    }
  }
  for(i=1;i<=n;++i){
    for(j=1;j<=p;++j){
      step[i][j]=step[i][j]*step[i][p+1];
    }
  }
  for(i=1;i<=n;++i){
    for(j=2;j<=p;++j){
      step[i][j]=step[i][j]+step[i][j-1];
    }
  }

  for(i=2;i<=p;i+=2){
    max=assignmin();
    for(j=1;j<=n;++j){
      if(max<step[j][i]){
        max=step[j][i];
        max_pos=j;
      }
    }
    player_ahead_count[max_pos]++;
  }
  max=assignmin();
  for(i=1;i<=n;++i){
    // cout<<player_ahead_count[i]<<' ';
    if(max<player_ahead_count[i]){
      max=player_ahead_count[i];
      max_pos=i;
    }
  }
  cout<<max_pos<<endl;
  return 0;
}
