#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];		
	}
	for(i=1;i<=n-1;++i){
		if(arr[i]>arr[i+1]&&arr[i]>arr[i+1]){
			cout<<arr[i]<<' ';
		}
	}
	cout<<endl;
	return 0;
}