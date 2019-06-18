#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char str[n+1];
	str[n]=0;
	int i=0;
	while(i<n){
		cin>>str[i];
		i++;
	}
	
	i=0;
	while(i<n){
		// cout<<i<<' ';
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]='a'+str[i]-'A';
		}
		++i;
	}
	cout<<str;
	return 0;
}