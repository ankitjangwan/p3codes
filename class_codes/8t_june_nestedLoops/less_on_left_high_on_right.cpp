#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<=n-1;++i){
		cin>>arr[i];
	}
	int max,min;
	for(i=1;i<=n-2;++i){
		max=i;
		min=i;
		for(j=0;j<i;++j){
			if(arr[i]<arr[j]){
				// cout<<"max changed  ";
				// cout<<max<<' ';
				max=j;
				// cout<<max<<endl;
				break;

			}
		}
		for(j=i+1;j<n;++j){
			if(arr[i]>arr[j]){
				// cout<<"min changed  ";
				// cout<<min<<' ';
				min=j;
				// cout<<min<<endl;
				break;
			}
		}
		if(max==i&&min==i){
			cout<<arr[i]<<' ';
		}
	}
	cout<<endl;
	return 0;
}