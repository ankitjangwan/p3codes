#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,i,j;
	cin>>n>>m;
	int arr[n][m];
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			cin>>arr[i][j];
		}
	}
	int sum=0;
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			sum+=arr[i][j];
		}
	}
	cout<<"sum is : "<<sum<<endl;
	return 0;
}