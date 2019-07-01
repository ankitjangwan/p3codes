#include<iostream>

using namespace std;

int part[200][200];
bool solved[200][200];

int partition(int n,int k)
{
	if(n==k){
		return 1;
	}
	if(k==1){
		return n;
	}
	if(n==0||k==0){
		return 0;
	}
	if(!solved[n][k]){
		part[n][k]=partition(n-1,k-1)+partition(n-1,k)*k;
		solved[n][k]=true;
	}
	return part[n][k];
}

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	cout<<partition(n,k)<<endl;
}