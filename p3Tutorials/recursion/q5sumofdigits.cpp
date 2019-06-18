#include<iostream>

using namespace std;

int sumdigits(int n){
	static int sum=0;
	if(n==0){
		return sum;
	}
	sum=sum+n%10;
	return sumdigits(n/10); 
}

int main(){
	int n;
	cin>>n;
	cout<<sumdigits(n)<<endl;
	return 0;
}