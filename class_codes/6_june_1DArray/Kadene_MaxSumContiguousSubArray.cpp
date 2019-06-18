#include<iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	int globalMax=INT_MIN;
	int localmax=0;
	for(i=0;i<n;++i){
		localmax+=arr[i];
		if(globalMax<localmax){
			globalMax=localmax;
		}
		if(localmax<=0){
			localmax=0;
		}
	}
	// cout<<"localmax: "<<localmax<<endl;
	cout<<"globalMax: "<<globalMax<<endl;
	return 0;
}