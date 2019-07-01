#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int coin[n];
	int i,j;
	for(i=0;i<n;++i){
		cin>>coin[i];
	}
	int sum;
	int k;
	cin>>sum;
	int ways[n+1][sum+1];
	for(i=0;i<=n;++i){
		ways[i][0]=1;
	}
	for(j=0;j<=sum;++j){
		ways[0][j]=0;
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=sum;++j){
			k=0;
			if(j>=coin[i-1]){
				k=ways[i][j-coin[i-1]];
			}
			ways[i][j]=k+ways[i-1][j];
		}
	}
	cout<<ways[n][sum]<<endl;
	return 0;
}