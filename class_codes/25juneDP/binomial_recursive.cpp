#include<iostream>

using namespace std;

int binomial(int n,int k){
	if(n==0&&k==0){
		return 1;
	}
	if(n==0){
		return 0;
	}
	if(k==0){
		return 1;
	}
	if(n==k){
		return 1;
	}
	if(n<r){
		return 0;
	}
	return binomial(n-1,k-1)+binomial(n-1,k);
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<binomial(n,k)<<endl;
	return 0;
}