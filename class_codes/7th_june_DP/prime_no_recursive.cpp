#include <iostream>

using namespace std;

void isprime(int n,int factor){
	if(n==1){
		cout<<"not prime(n is 1)"<<endl;
		return;
	}
	if(factor*factor>n){
		cout<<"Prime Number"<<endl;
		return;
	}
	if(n%factor==0){
		cout<<"not prime,factor found, factor is: "<<factor<<endl;
		return;	
	}
	isprime(n,factor+1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	isprime(n,2);
	return 0;
}