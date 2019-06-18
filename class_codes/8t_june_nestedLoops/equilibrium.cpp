#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,n;
	cin>>n;
	int arr[n];
	if(n<=1){
		return 0;
	}
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	int lsum=arr[0];
	int rsum=0;
	for(i=2;i<n;++i){
		rsum+=arr[i];
	}
	for(i=1;i<=n-2;++i){
		if(lsum==rsum){
			cout<<arr[i]<<' ';
		}
		lsum+=arr[i];
		rsum-=arr[i+1];
	}
	cout<<endl;
	return 0;
}