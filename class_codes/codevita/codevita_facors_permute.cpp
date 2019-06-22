#include<iostream>
#include<algorithm>

using namespace std;

void permute(int *arr,int l,int h,int &count){
	if (l==h)
	{
		//codevita solution
		for (int i = 0; i < h-1; ++i)
		{
			if(arr[i+1]-arr[i]==1){
				return ;
			}
		}
		// for(int i=0;i<h;++i){
		// 	cout<<arr[i];
		// }
		// cout<<endl;
		count++;
		return ;
	}

	for(int i=l;i<h;++i){
		swap(arr[i],arr[l]);
		permute(arr,l+1,h,count);
		swap(arr[i],arr[l]);
	}
}

int main(){
	int n;
	int k;
	int t,count;
	cin>>t;
	while(t--){
		k=0;
		count=0;
		cin>>n;
		for(int i=1;i<=n;++i){
			if(n%i==0){
				k++;
			}
		}
		// cout<<endl<<k<<endl;
		int arr[k];
		for(int i=0;i<k;++i){
			arr[i]=i+1;
		}
		permute(arr,0,k,count);
		cout<<count<<endl;
	}
	return 0;
}