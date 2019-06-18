#include<iostream>
using namespace std;

void gstring(char *str,int present,int end){
	if(present==end){
		str[end]=0;
		cout<<str<<endl;
		return;
	}
	if(str[present-1]=='1'){
		str[present]='0';
		gstring(str,present+1,end);
	}
	else{
		str[present]='0';
		gstring(str,present+1,end);	
		str[present]='1';
		gstring(str,present+1,end);
	}
}

int main(){
	int k;
	cin>>k;
	char str[k+1];
	str[0]='0';
	gstring(str,1,k);
	str[0]='1';
	gstring(str,1,k);
	return 0;
}