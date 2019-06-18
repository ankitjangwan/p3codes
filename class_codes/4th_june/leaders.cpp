#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int maxel=arr[n-1];
	for (int i = n-1; i >= 1; --i)
	{
		if (maxel<=arr[i])
		{
			cout<<arr[i]<<' ';
			maxel=arr[i];
		}
	}
	return 0;
}