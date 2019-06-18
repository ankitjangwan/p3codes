#include<iostream>

using namespace std;

int max(int a,int b){
	if(a<b){
		return b;
	}
	return a;
}

int findmax(int *arr,int size){
	// static int max=INT_MIN;
	if(size==1){
		return arr[0];
	}
	return max(arr[size-1],findmax(arr,size-1));
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int i,max;
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	max=findmax(arr,n);
	cout<<max<<endl;
	return 0;
}