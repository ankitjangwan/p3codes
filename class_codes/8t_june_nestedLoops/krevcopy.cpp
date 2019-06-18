#include<iostream>

using namespace std;

void kreverse(int *arr,int start,int end){
	int i;
	int mid=end-(end-start)/2;
	cout<<"mid is: "<<mid<<endl;
	for(i=start;i<mid;++i){
		cout<<"index swapped: "<<i<<" , "<<start+end-i<<endl;
		swap(arr[i],arr[start+end-i]);
	}
}

int main(int argc, char const *argv[])
{
	int n,i,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	cin>>k;
	i=0;
	while(i<n){
		kreverse(arr,i,i+k-1);
	 	if(i+k<n){
	 		i+=k;
	 	}
	 	else{
	 		break;
	 	}
	 }

	 if(i<n){
	 	cout<<"inside 1 "<<i<<' '<<n-1<<endl;
	 	kreverse(arr,i,n-1);
	 }
	for(i=0;i<n;++i){
		cout<<arr[i]<<' ';
	}

	cout<<endl;
	return 0;
}