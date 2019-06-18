#include<iostream>
#include"linkedlist.h"
#include"linkedlist.cpp"

using namespace std;
void split(node **first,node **middle);
{
	node *temp=*first;
	while(temp->next!=*middle){
		temp=temp->next;
	}
	temp->next=NULL;

}

node* merge(node *first,node *middle){
	node *head=new node();
	while(first!=NULL&&middle!=NULL){
		if(first->data<middle->data){
			insert(&head,first->data);
		}
		else{
			insert(&head,middle->data);
		}
	}
}

void mergesort(node **headptr ){
	if(*headptr==NULL||*endptr==NULL){
		return;
	}
	node *first,*middle;
	first=*headptr;
	middle=findmiddle(head);
	if(first==NULL||first->next==NULL){
		return;
	}
	split(&first,&middle);
	mergesort(&first);
	mergesort(&middle);
	*headptr=merge(first,middle);
}
int main(int argc, char const *argv[])
{
	node *head=NULL;
	int n,key;
	cin>>n;
	while(n--){
		cin>>key;
		insert(&head,key);
	}
	node *end=head;
	while(node->next!=NULL){
		node=node->next;
	}
	display(head);
	mergesort(&head,&end);
	display(head);
	return 0;
}