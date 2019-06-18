#include<iostream>

using namespace std;

int ispalindrome(int n){
	static int temp=0;
	if(n<=0){
		return temp;
	}
	temp=temp*10+n%10;
	return ispalindrome(n/10);
}

int main(){
	long int n;
	cin>>n;
	if(n==ispalindrome(n)){
		cout<<"palindrome"<<endl;
	}
	else
		cout<<"not palindrome"<<endl;
	return 0;
}