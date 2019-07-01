#include<iostream>

using namespace std;

int ways(int n,int k){
	if(n==k){
		return 1;
	}

	if(n==0||k==0){
		return 0;
	}
	if(k==1){
		 return n;
	}
	return k*ways(n-1,k)+ways(n-1,k-1);
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<ways(n,k)<<endl;;
}