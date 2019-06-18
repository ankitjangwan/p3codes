#include<iostream>
#include<stack>
#include "linkedlist.h"
#include "linkedlist.cpp"

int main(){
	int n,key;
	node *head=NULL;
	cin>>n;
	while(n--){
		cin>>key;
		insert(&head,key);
	}
	display(head);
	int k;
	cin>>k;
	stack<node *> s;
	node *temp=head;
	while(temp!=NULL){
		s.push(temp);
		temp=temp->next;
	}
	while(!s.empty()&&k--){
		cout<<s.top()->data<<' ';
		s.pop();
	}
	if(k>0){
		cout<<"total nodes diplayed, there are no other nodes remaining";
		cout<<endl;
	}
	return 0;
}