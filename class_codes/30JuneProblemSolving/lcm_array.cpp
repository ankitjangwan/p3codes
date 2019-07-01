#include<iostream>

using namespace std;

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

int main(){
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	int lcm=arr[0];
	for(i=1;i<n;++i){
		lcm=(lcm*arr[i])/gcd(lcm,arr[i]);
	}
	cout<<lcm<<endl;
	return 0;
}