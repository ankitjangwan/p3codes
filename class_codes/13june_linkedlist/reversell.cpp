
#include<iostream>
#include"linkedlist.cpp"
#include"linkedlist.h"

using namespace std;

void reverse(node **head){
	node *left,*right,*curr;
	left=NULL;
	curr=*head;
	right=(*head)->next;
	while(right!=NULL){
		right=curr->next;
		curr->next=left;
		left=curr;
		curr=right;
	}
	*head=left;
}

int main(){
	int n,key;
	node *head=NULL;
	cin>>n;
	while(n--){
		cin>>key;
		insert(&head,key);
	}
	display(head);
	if(head!=NULL&&head->next!=NULL){
		reverse(&head);
	}
	display(head);
	return 0;
}