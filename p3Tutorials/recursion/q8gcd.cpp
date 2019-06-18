//incomplete
#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b){
	cout<<a<<' '<<b<<endl;
	if(b==0){
		return a;
	}
	// cout<<b<<' '<<b%a<<endl;
	return (b,a%b);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	cout<<__gcd(a,b)<<endl;
	return 0;
}