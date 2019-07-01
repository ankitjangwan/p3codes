#include<iostream>
#include<algorithm>

using namespace std;

void pset(string str,int l,int h,string out){
	if(l==h){
		cout<<out<<endl;
		return;
	}
	pset(str,l+1,h,out);
	out+=str[l];
	pset(str,l+1,h,out);
}

int main(){
	string str;
	cin>>str;
	string out="";
	pset(str,0,str.size(),out);
	return 0;
}