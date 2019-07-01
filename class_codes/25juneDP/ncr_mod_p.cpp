#include<iostream>
#define M 10000007

using namespace std;

int main(){
	int n,r;
	cin>>n>>r;
	int p[n+1][r+1];
	int i,j;
	for(i=0;i<=n;++i){
		p[0][i]=0;
	}
	for(j=0;j<=r;++j){
		p[i][0]=1;
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=r;++j){
			p[i][j]=(p[i-1][j]%M+(p[i-1][j-1])%M)%M;
		}
	}
	cout<<p[n][r];
	return 0;

}