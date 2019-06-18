#include <iostream>

using namespace std;

int power(int base,int expo){
	if(expo==1){
		return base;
	}
	return base*power(base,expo-1);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}