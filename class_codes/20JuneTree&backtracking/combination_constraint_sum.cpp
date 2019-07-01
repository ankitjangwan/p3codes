#include <iostream>

using namespace std;

void combine(int arr[],int i_in,int n,int out[],int i_out,int k,int sum){
	if(i_in==n){
		return;
	}
	if(i_out==k){
		int res=0;
		for (int i = 0; i < k; ++i)
		{
			res+=out[i];
		}
		if (res==sum){
			for (int i = 0; i < k; ++i)
			{
				cout<<out[i];
			}	
			cout<<endl;
		}
		return;
	}
	combine(arr,i_in+1,n,out,i_out,k,sum);
	out[i_out]=arr[i_in];
	combine(arr,i_in+1,n,out,i_out+1,k,sum);
}

int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cin>>k;
	int sum;
	cin>>sum;
	int out[k];
	combine(arr,0,n,out,0,k,sum);
	return 0;
}