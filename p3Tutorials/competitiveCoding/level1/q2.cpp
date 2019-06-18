#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,digit;
	int digit_sum=0;
	cin>>n;
	while(n>0){
		digit=n%10;
		digit_sum+=digit;
		n=n/10;
	}
	cout<<"Sum of digits: "<<digit_sum<<endl;
	return 0;
}