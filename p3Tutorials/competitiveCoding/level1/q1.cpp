#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int fact[10]={1,1,2,6,24,120,720,5040,40320,362880}; 
	int n,digit;
	int fact_sum=0;
	cin>>n;
	while(n>0){
		digit=n%10;
		fact_sum+=fact[digit];
		n=n/10;
	}
	cout<<"Sum of factorial of digits: "<<fact_sum<<endl;
	return 0;
}