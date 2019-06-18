#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	int len=str.size();
	int i,j,flag=0,counte=0,countpoint=0;
	for(i=0;i<len;++i){
		if(str[i]>='0'&&str[i]<='9'){
			if(i==len-1){
				break;
			}
			if(str[i+1]>='0'&&str[i+1]<='9'){
				i++;
			}
			else if(str[i+1]=='.'&&countpoint==0){
				i++;

			}
			else if(str[i+1]=='e'&&counte==0){
				++i;
			}
			else{
				flag=1;
			}
		}
		else if(str[i]=='.'&&countpoint==0){
			if(i==len-1){
				flag=1;
				break;
			}
			else if(str[i+1]>='0'&&str[i+1]<='9'){
				++i;
				countpoint++;
			}
			else
				flag=1;
		}
		else if(str[i]=='e'&&counte==0){
			if(i==len-1){
				flag=1;
				break;
			}
			else if(str[i+1]>='0'&&str[i+1]<='9'){
				++i;
				counte++;
			}
			else if(str[i+1]=='-'){
				if(i+1==len-1){
					flag =1;
					break;
				}
				++i;
			}
			else{
				flag=1;
				break;
			}
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag){
			cout<<"not valid"<<endl;
			return 0;
		}

	cout<<"Valid"<<endl;
	return 0;
}