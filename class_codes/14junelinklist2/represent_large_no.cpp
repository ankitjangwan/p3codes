#include<iostream>
#include"linkedlist.h"
#include"linkedlist.cpp"

using namespace std;

int main(){
	string s;
	node *head=NULL;
	getline(cin,s);
	int n=s.size(),i,key;
	for(i=n-1;i>=0;--i){
		if(s[i]>='0'&&s[i]<='9'){
			key=s[i]-'0';
			insert(&head,key);
		}
		else{
			cout<<"invalid number"<<endl;
			return 0;
		}
	}
	display(head);
	return 0;
}