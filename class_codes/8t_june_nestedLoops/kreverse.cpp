#include<iostream>

using namespace std;

void kreverse(int *arr,int start,int end){
	int i;
	int n=end-(end-start)/2;
	cout<<"mid is: "<<arr[n]<<endl;
	for(i=start;i<n;++i){
		cout<<"index swapped: "<<i<<" , "<<start+end-i<<endl;
		swap(arr[i],arr[start+end-i]);
	}
}

int main(int argc, char const *argv[])
{
	int n,i,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	cin>>k;
	i=0;
	while(i<n){
		for(i=0;i<n;++i){
			cout<<arr[i]<<' ';
		}
		kreverse(arr,i,i+k-1);
	 	if(i+k>=n){
	 		cout<<"reverse from "<<i<<" to "<<n-1<<endl;
	 		kreverse(arr,i,n-1);
	 	}
	 	else{ 
	 		cout<<"reverse from "<<i<<' '<<i+k-1<<endl;
	 	}
		cout<<endl;
	 	i+=k;
	 }
	for(i=0;i<n;++i){
		cout<<arr[i]<<' ';
	}

	cout<<endl;
	return 0;
}