#include<iostream>

using namespace std;

void gstring(char *str,int k){
	if(k<0){
		cout<<str<<endl;
		return;
	}
	str[k]='0';
	gstring(str,k-1);
	str[k]='1';
	gstring(str,k-1);
}

int main(){
	int k;
	cin>>k;
	char str[k+1];
	str[k]=0;
	gstring(str,k-1);
	return 0;
}