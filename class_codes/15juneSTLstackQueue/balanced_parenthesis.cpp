#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	string str;
	int i=0;
	stack<char> s;
	getline(cin,str);
	while(str[i]!=0){
		if(str[i]=='('){
			s.push('(');
		}
		else if(str[i]==')'){
			if(s.empty()||s.top()!='('){
				cout<<"not  balanced"<<endl;
				return 0;
			}
			s.pop();
		}
		++i;
	}
	if(s.empty()){
		cout<<"balanced"<<endl;
	}
	else{
		cout<<"not  balanced"<<endl;
	}
	return 0;
}