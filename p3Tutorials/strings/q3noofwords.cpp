//incomplete
#include <cstring>
#include <iostream>
using namespace std;

int main(){
	char str[100];
	cin.getline(str,100);
	// getline(cin,str);
	int i=0,count=0,n=strlen(str),flag;
	while(str[i]!=0){
		if(i==0||str[i]==' '){		
			while(i+1!=n&&str[i+1]==' '){
				i++;
			}
			while(i+1!=n&&str[i]!=' '){
				++i;
			}
		}
		i++;
	}
	cout<<count<<endl;
	return 0;
}