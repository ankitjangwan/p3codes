#include<iostream>

using namespace std;

int ways(int * coin,int n,int sum){
	int k=0;
	if(sum==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(sum-coin[n]>=0){
		k=ways(coin,n,sum-coin[n]);
	}
	return k+ways(coin,n-1,sum);
}

int main(){
	int n;
	cin>>n;
	int coin[n];
	int i;
	for(i=0;i<n;++i){
		cin>>coin[i];
	}

	int sum;
	cin>>sum;
	cout<<ways(coin,n-1,sum)<<endl;
	return 0;
}