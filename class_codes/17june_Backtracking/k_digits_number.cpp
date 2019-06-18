#include<iostream>
using namespace std;

void gstring(char *str,int start,int end){
	if(start==end){
		if(str[0]=='0'){
			return;
		}
		str[end]=0;
		cout<<str<<endl;
		return;
	}
	int i;
	for(i=0;i<=9;++i){
		str[start]=i+'0';
		gstring(str,start+1,end);
	}
}

int main(){
	int k;
	cin>>k;
	char str[k+1];
	gstring(str,0,k);
	return 0;
}