#include<iostream>

using namespace std;

int b2d(string str){
	int n=str.size();
	if(n<=1){
		return str[0]-'0';
	}
	// cout<<str[n-1]<<' '<<str[n-2];
	return (str[n-1]-'0')+(b2d(str.substr(0,n-1)))*2;
}

int main(){
	string bin;
	int n;
	getline(cin,bin);
	n=b2d(bin);
	cout<<n<<endl;
	return 0;
}