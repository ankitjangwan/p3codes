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
	int arr[n];
	int i;
	for(i=0;i<n;++i){
		cin>		>arr[i];
	}
	int g=arr[0];
	for(i=1;i<n;++i){
		g=gcd(g,arr[i]);
	}
	cout<<g<<endl;
	return 0;
}