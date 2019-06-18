
#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int max1,max2,max3;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	if(n<3){
		cout<<"3rd max does not exist"<<endl;
		return 0;
	}
	if (arr[0]>arr[1]&&arr[0]>arr[2])
	{
		max1=arr[0];
		if(arr[1]>arr[2]){
			max3=arr[1];
			max2=arr[0];
		}
		else{
			max3=arr[0];
			max2=arr[1];
		}
	}
	else if (arr[1]>arr[2])
	{
		max1=arr[1];
		if(arr[0]>arr[2]){
			max3=arr[2];
			max2=arr[0];
		}
		else{
			max3=arr[0];
			max2=arr[2];
		}
	}
	else{
	 	max1=arr[2];
	 	if(arr[0]>arr[1]){
			max3=arr[1];
			max2=arr[0];
		}
		else{
			max3=arr[0];
			max2=arr[1];
		}
	 }
	  // cout<<max1<<" "<<max2<<" "<<max3<<endl;
	 for (int i = 3; i < n; ++i)
	 {
	 	if(arr[i]>max1){
	 		max3=max2;
	 		max2=max1;
			max1=arr[i];
	 	}
	 	else if (arr[i]>max2&arr[i]!=max1)
	 	{
	 		max3=max2;
	 		max2=arr[i];
	 	}
	 	else if(arr[i]>max3&&arr[i]!=max2&&arr[i]!=max1)
	 		max3=arr[i];
	 	// cout<<max1<<" "<<max2<<" "<<max3<<endl;
	 }
	 cout<<"3rd max is: "<<max3<<endl;
	return 0;
}