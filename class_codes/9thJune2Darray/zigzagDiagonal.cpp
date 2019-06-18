#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int mat[n][n];
	int i,j,k,r,c;
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			cin>>mat[i][j];
		}
	}
	int noofDiagonal=2*n-1;

	for(k=0;k<noofDiagonal;++k){
		if(k<n){
			r=0;
			c=k;
		}
		else{
			r=k-n+1;
			c=n-1;
		}
		// cout<<r<<' '<<c<<endl;
		if(k%2==0){
			for(i=r;i<=c;++i){
				cout<<mat[i][k-i]<<' ';
			} 
		}
		else{
			for(i=c;i>=r;--i){
				cout<<mat[i][k-i]<<' ';
			} 	
		}
	}
	return 0;
}