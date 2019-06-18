#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,i;
	cin>>n;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
			cin>>arr[i];
	}	
	int num;
	cin>>num;
	for(i=0;i<n;++i){
		if(arr[i]==num){
			cout<<"found at : "<<i+1<<endl;
			return 0;
		}
	}
	cout<<"Number not found"<<endl;
	return 0;
}