#include<iostream>
#include<algorithm>

using namespace std;

void permute(int *arr,int l,int h){
	if (l==h)
	{
		//codevita solution
		// for (int i = 0; i < h-1; ++i)
		// {
		// 	if(arr[i+1]-arr[i]==1){
		// 		return;
		// 	}
		// }
		for(int i=0;i<h;++i){
			cout<<arr[i];
		}
		cout<<endl;
		return;
	}

	for(int i=l;i<h;++i){
		swap(arr[i],arr[l]);
		permute(arr,l+1,h);
		swap(arr[i],arr[l]);
	}

}

int main(){
	int k;
	cin>>k;
	int arr[k];
	for(int i=0;i<k;++i){
		arr[i]=i+1;
	}
	permute(arr,0,k);
	return 0;
}