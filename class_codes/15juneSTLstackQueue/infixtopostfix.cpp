//incomplete : check i2p.cpp

#include<iostream>
#include<stack>
#include <string>
#include <cstring>

using namespace std;

/*bool is_balanced_parenthesis(string str){
	int i=0;
	stack<char> s;
	while(str[i]!=0){
		if(str[i]=='('){
			s.push('(');
		}
		else if(str[i]==')'){
			if(s.empty()||s.top()!='('){
				return false;
			}
			s.pop();
		}
		++i;
	}
	if(s.empty()){
		return true;
	}
	return false;
}*/

bool isoperator(char ch){
	if(ch=='+'||ch=='^'||ch=='-'||ch=='*')
		return true;
	return false;
}

bool have_high_precedence(char op1,char op2,bool matrix[][4]){
	int i,j;
	if(op1=='+'||op1=='-'){
		i=0;
	}
	else{
		i=1;
	}
	if(op2=='+'){
		j=0;
	}
	else if(op2=='*'){
		j=1;
	}
	else if(op2=='-'){
		j=2;
	} 
	else{
		j=3;
	}
	return matrix[i][j];
}

int main(int argc, char const *argv[])
{
	string infix,postfix="";
	cin>>infix;
	// infix='('+infix+')';
	// if(!is_balanced_parenthesis(infix));
	// {
	// 	cout<<"invalid expression: wrong parenthesis"<<endl;
	// 	return 0;
	// }
	int i,j;
	bool matrix[2][4]={true,false,true,false,true,true,true,false};
	i=0;
	stack<char> s;
	while(infix[i]!=0){
		if(isoperator(infix[i])){
			if(s.empty()||have_high_precedence(infix[i],s.top(),matrix))
			{
				s.push(infix[i]);
			}	
			else{
				while(!s.empty()||!have_high_precedence(infix[i],s.top(),matrix)){
					postfix+=s.top();
					s.pop();
				}
				s.push(infix[i]);
			}
		}

		//else make cases for parenthesis
		//else if(infix[i]=='('){
	//		s.push(infix[i]);
//		}
		// else if(infix[i]==')'){
		// 	while(!s.empty()||s.top()!='('){
		// 		postfix+=s.top();
		// 		s.pop();
		// 	}
		// 	if(!s.empty()&&s.top()=='('){
		// 		s.pop();
		// 	}
		// 	else{
		// 		cout<<"invalid: parenthesis not matching"<<endl;
		// 		return 0;
		// 	}
		// }
		else{
			postfix+=infix[i];
		}
		++i;
	}
	while(!s.empty()){
		postfix+=s.top();
		s.pop();
	}
	cout<<postfix<<endl;
	return 0;
}