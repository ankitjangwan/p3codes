#include<iostream>

using namespace std;

int ways(int n){
	if(n==0||n==1){
		return 1;
	}
	if(n<0){
		return 0;
	}
	return ways(n-1)+ways(n-2)*(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<ways(n)<<endl;
	return 0;
}