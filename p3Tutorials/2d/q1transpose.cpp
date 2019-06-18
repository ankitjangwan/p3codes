#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int mat[n][n];
	int i,j;
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			cin>>mat[i][j];
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			if(i+j<n-1){
				swap(mat[i][j],mat[n-1-j][n-1-i]);
				// cout<<mat[i][j]<<' '<<mat[n-1-i][n-1-j]<<endl;
			}
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			cout<<mat[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<	endl;
	return 0;
}