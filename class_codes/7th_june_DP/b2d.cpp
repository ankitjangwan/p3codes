#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int b2d(char *bin,int last){
	if(last<0){
		return 0;
	}
	// cout<<bin[last]-'0'<<endl;
	return (bin[last]-'0')+(b2d(bin,last-1))*2;
}

int main(int argc, char const *argv[])
{
	char bin[8];
	memset(bin,0,sizeof(bin));
	cin>>bin;
	// cout<<bin<<endl;
	int num=b2d(bin,7);
	cout<<num<<endl;
	return 0;
}