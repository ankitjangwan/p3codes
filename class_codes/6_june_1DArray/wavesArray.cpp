#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n-1;i+=2){
		swap(arr[i],arr[i+1]);
	}

	for(i=0;i<n;++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	return 0;
}