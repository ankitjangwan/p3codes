#include<iostream>

using namespace std;

void insertstar(string in,string out,int idx){
	static int n=in.size();
	if(idx+1==n){
		out+=in[idx];
		cout<<out<<endl;
		return;
	}
	out+=in[idx];
	if(in[idx]==in[idx+1]){
		out+='*';
		insertstar(in,out,idx+1);
	}
	else{
		insertstar(in,out,idx+1);
	}
}

int main(){
	string str;
	getline(cin,str);
	string out="";
	insertstar(str,out,0);
	return 0;
}