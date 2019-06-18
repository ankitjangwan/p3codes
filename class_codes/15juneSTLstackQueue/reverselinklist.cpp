#include<iostream>
#include<stack>
#include "linkedlist.h"
#include "linkedlist.cpp"

using namespace std;

int main(){
	node *head=NULL;
	int n,key;
	cin>>n;
	while(n--){
		cin>>key;
		insert(&head,key);
	}
	stack<node *> s;
	node *temp=head;
	while(temp->next!=NULL){
		s.push(temp);
		temp=temp->next;
	}
	head=temp;
	while(!s.empty()){
		cout<<s.top()->data<<' ';
		temp->next=s.top();
		temp=temp->next;
		s.pop();
	}
	cout<<endl;
	temp->next=NULL;
	if(head!=NULL){
		display(head);
	}
	return 0;
}