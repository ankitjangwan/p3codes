#include<iostream>

using namespace std;

int revdigit(int n){
	static int temp=0;
	if(n<=0){
		return temp;
	}
	temp=temp*10+n%10;
	return revdigit(n/10);
}

int main(){
	long int n;
	cin>>n;
	cout<<revdigit(n)<<endl;
	return 0;
}