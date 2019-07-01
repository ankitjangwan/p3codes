#include<iostream>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int c[n+1][k+1];
	int i,j;
	for (i=1;i<=k;++i){
		c[0][i]=0;
	}
	for(i=0;i<=n;++i){
		c[i][0]=1;
	}
	for(i=0;i<=k;++i){
		c[i][i]=1;
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=k;++j){
			c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
	cout<<c[n][k]<<endl;
	return 0;
}