#include<iostream>
#include<algorithm>
using namespace std;

void rev_array(int * arr,int start,int end){
	if(start>end){
		return ;
	}
	swap(arr[start],arr[end]);
	rev_array(arr,start+1,end-1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	rev_array(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<' ';
	}
	cout<<endl;
	return 0;
}