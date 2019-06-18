#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	int len=str.size();
	int i,j;
	char ch;
	for(i=0,j=len-1;i<len/2;++i,--j){
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
	}
	cout<<str<<endl;
	return 0;
}