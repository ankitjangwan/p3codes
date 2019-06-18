#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if (n<=0)
	{
		return 0;
	}
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int max,min;
	max=arr[0];
	min=arr[0];
	// cout<<max<<" "<<min<<endl;
	for (int i = 1; i < n-1; ++i)
	{
		if (arr[i]>arr[i+1])
		{
			if (arr[i]>max)
			{
				max=arr[i];
			}
			if (arr[i+1]<min)
			{
				min=arr[i+1];
			}
		}
		else{

			if (arr[i+1]>max)
			{
				max=arr[i+1];
			}
			if (arr[i]<min)
			{
				min=arr[i];
			}

		}
	}
	// cout<<max<<" "<<min<<endl;
	cout<<"difference between max and min is: "<<max-min<<endl;
	return 0;
}