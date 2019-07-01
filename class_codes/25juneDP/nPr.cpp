#include<iostream>

using namespace std;

int main(){
	int n,r;
	cin>>n>>r;
	int p[n+1][r+1];
	int i,j;
	for(i=0;i<=n;++i){
		p[i][0]=1;
	}
	for(i=1;i<=r;++i){
		p[0][i]=0;
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=r;++j){
			p[i][j]=p[i-1][j]+j*p[i-1][j-1];
		}
	}
	cout<<p[n][r]<<endl;
	return 0;
}