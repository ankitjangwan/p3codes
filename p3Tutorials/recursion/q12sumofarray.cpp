#include<iostream>

using namespace std;

int calcsum(int * arr,int size){
	if(size==1){
		return arr[0];
	}
	return arr[size-1]+calcsum(arr,size-1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int sum=calcsum(arr,n);
	cout<<sum<<endl;
	return 0;
}