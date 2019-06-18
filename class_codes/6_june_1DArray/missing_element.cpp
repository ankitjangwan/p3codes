#include<iostream>
#include <algorithm>

using namespace std;

/*1:using XOR

int main(){
	int n,i;
	cin>>n;
	int arr[n-1];
	for (i = 0; i < n-1; ++i)
	{
		cin>>arr[i];
	}
	int temp=0;
	for(i=1;i<=n;++i){
		temp=temp^i;
	}
	for(i=0;i<n-1;++i){
		temp=temp^arr[i];
	}
	cout<<"missing element is: "<<temp<<endl;
	return 0;
}*/


/*2:Using Sum of series formula

int main(){
	int i,n;
	cin>>n;
	int arr[n-1];
	for(i=0;i<n-1;++i){
		cin>>arr[i];
	}
	long int sum=n*(n+1)/2;
	long int temp=0;
	for(i=0;i<n-1;++i){
		temp+=arr[i];
	}
	temp=sum-temp;
	cout<<"missing number is: "<<temp<<endl;
	return 0;
}*/

//3: Sorting then scanning the array

int main(int argc, char const *argv[])
{
	int i,n;
	cin>>n;
	int arr[n-1];
	for (i = 0; i < n-1; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n-1);
	for (i = 1; i <n-1 ; ++i)
	{
		if(arr[i]!=arr[i-1]+1)
		{
			cout<<"missing element is: "<<arr[i-1]+1<<endl;
			return 0;
		}
	}
	cout<<"missing element is: "<<n<<endl;
	return 0;
}
