#include<iostream>
#include"linkedlist.h"
#include"linkedlist.cpp"

using namespace std;

node * addlist(node * h1,node *h2){
	node *newnode=NULL;
	int sum,carry=0;
	while(h1!=NULL||h2!=NULL){
		if(h1==NULL){
			sum=carry+h2->data;
			h2=h2->next;
		}
		else if(h2==NULL){
			sum=carry+h1->data;
			h1=h1->next;
		}
		else{
			sum=carry+h1->data+h2->data;
			h1=h1->next;
			h2=h2->next;
		}
		carry=sum/10;
		sum%=10;
		// cout<<"sum"<<sum<<' '<<"carry"<<carry<<' ' ;
		insert(&newnode,sum);
	}


	if(carry>0){
		insert(&newnode,carry);
	}

	return newnode;
}

int main(){
	string s,s1;
	node *head1=NULL,*head2=NULL;
	getline(cin,s);
	getline(cin,s1);
	int n=s.size(),i,key;
	for(i=n-1;i>=0;--i){
		// cout<<";l1"<<endl;
		if(s[i]>='0'&&s[i]<='9'){
			key=s[i]-'0';
			insert(&head1,key);
		}
		else{
			cout<<"invalid number"<<endl;
			return 0;
		}
	}
	n=s1.size();
	for(i=n-1;i>=0;--i){
		// cout<<";l2"<<endl;
		if(s1[i]>='0'&&s1[i]<='9'){
			key=s1[i]-'0';
			insert(&head2,key);
		}
		else{
			cout<<"invalid number"<<endl;
			return 0;
		}
	}
	cout<<endl;
	node * sum=addlist(head1,head2);
	display(sum);
	return 0;

}