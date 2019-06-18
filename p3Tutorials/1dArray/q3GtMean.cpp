#include <iostream>

using namespace std;

int main(){
	int i,n,count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	float mean=0;
	for(i=0;i<n;i++){
		mean+=arr[i];
	}
	mean=mean/n;
	for(i=0;i<n;++i){
		if(arr[i]>mean){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}