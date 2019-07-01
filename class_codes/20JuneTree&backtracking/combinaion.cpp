#include<iostream>
#include<algorithm>

using namespace std;

void comb(int *arr,int idx_in,int size_in,int out[],int idx_out,int size_out){
	if(idx_out==size_out){
		for (int i = 0; i < size_out; ++i)
		{
			cout<<out[i];
		}
		cout<<endl;
		return;
	}
	if(idx_in>=size_in){
		return;
	}
	comb(arr,idx_in+1,size_in,out,idx_out,size_out);
	out[idx_out]=arr[idx_in];
	comb(arr,idx_in+1,size_in,out,idx_out+1,size_out);
}

int main(){
	int n;
	cin>>n;
	int k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cin>>k;
	int out[k];
	comb(arr,0,n,out,0,k);
	return 0;
}