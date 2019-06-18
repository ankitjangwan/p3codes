#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,d,i,temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	cin>>d;
	d=d%n;
	while(d--){
		temp=arr[0];
		for(i=1;i<n;++i){
			arr[i-1]=arr[i];
		}
		arr[n-1]=temp;
	}
	cout<<"array after rotation: ";
	for(i=0;i<n;++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	return 0;
}