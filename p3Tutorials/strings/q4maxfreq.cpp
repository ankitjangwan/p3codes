#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int freqmax=0;
	int freqchar[26];
	memset(freqchar,0,sizeof(freqchar));
	char str[100],res;
	cin.getline(str,100);
	int n=strlen(str);
	int i;
	for(i=0;i<n;++i){
		freqchar[str[i]-'a']++;
	}
	for(i=0;i<n;++i){
		if(freqchar[freqmax]<freqchar[i]){
			freqmax=i;
		}
	}
	res=freqchar[i]+'a';
	cout<<res<<endl;
	return 0;
}
