#include<iostream>

using namespace std;

int n;
int part[200][200];
bool solved[200][200];

int ways(int n,int k){
	if(n==0||k==0){
		return 0;
	}
	if(n==k){
		return 1;
	}
	if(k==1){
		return n;
	}
	if(!solved[n][k]){
		part[n][k]=ways(n-1,k-1)+k*ways(n-1,k);
		solved[n][k]=true;
	}
	return part[n][k];

}

int main(){
	int k;
	cin>>n;
	int i;
	for(i=0;i<=n;++i){
		cout<<ways(n,i)<<endl;
	}
	return 0;
}