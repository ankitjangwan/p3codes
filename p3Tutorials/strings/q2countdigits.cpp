#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	char str[n+1]={0};
	i=0;
	while(i<n){
		cin>>str[i];
		++i;
	}
	int count=0;
	i=0;
	while(i<n)
	{
		if(str[i]>='0'&&str[i]<='9'){
			count++;
		}
		i++;
	} 
	cout<<count<<endl;
	return 0;
}