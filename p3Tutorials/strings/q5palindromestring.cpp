#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	int len=str.size();
	int i;
	for(i=0;i<len/2;++i){
		if(str[i]!=str[len-1-i]){
			cout<<"not palindrome"<<endl;
			return 0;
		}
	}
	cout<<"palindrome"<<endl;
	return 0;
}