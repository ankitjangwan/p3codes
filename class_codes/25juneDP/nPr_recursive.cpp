#include<iostream>

using namespace std;

int p(int n,int r){
	if((n==0&&r==0)){
		return 1;
	}
	if(n==0||n<r){
		return 0;
	}
	if(r==0){
		return 1;
	}

	return p(n-1,r)+r*p(n-1,r-1);
}

int main(){
	int n,r;
	cin>>n>>r;
	cout<<p(n,r)<<endl;
	return 0;
}