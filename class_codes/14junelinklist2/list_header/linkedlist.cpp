#include<iostream>
#include"linkedlist.h"
using namespace std;

// void insert(node **,int);//insert to back;
// void insertfront(node **,int);
// int del(node **);
// int delback(node **);
// void display(node *);

void inputlist(node **headptr,int size){
	int key;
	while(size--){
		cin>>key;
		insert(headptr,key);
	}
}

node* findmiddle(node *head){
	node *p1,*p2;
	p1=head;
	p2=head;
	while(p2!=NULL&&p2->next!=NULL){
		p1=p1->next;
		p2=p2->next;
		p2=p2->next;
	}
	return p1;
}

void showmenu(){
	cout<<"1:insert at end "<<endl;
	cout<<"2:Insert at front"<<endl;
	cout<<"3:delete from front"<<endl;
	cout<<"4:delete from end "<<endl;
	cout<<"5:show"<<endl;
	cout<<"6:exit"<<endl;
}

void insert(node **headptr,int key){
	node *newnode=new node(),*lastnode;
	newnode->data=key;
	newnode->next=NULL;
	if(*headptr==NULL){
		*headptr=newnode;
	}
	else{
		lastnode=*headptr;
		while(lastnode->next!=NULL){
			lastnode=lastnode->next;
		}
		lastnode->next=newnode;
	}
}

int del(node **headptr){
	int key;
	node *temp;
	temp=*headptr;
	key=temp->data;
	*headptr=(*headptr)->next;
	delete(temp);
	return key;
}

void display(node *headptr){
	while(headptr!=NULL){
		cout<<headptr->data<<' ';
		headptr=headptr->next;
	}
	cout<<endl;
}

void insertfront(node **headptr,int key){
	node *newnode=new node();
	newnode->data=key;
	newnode->next=NULL;
	if(*headptr==NULL){
		*headptr=newnode;
	}
	else{
		newnode->next=*headptr;
		*headptr=newnode;
	}
}

int delback(node **headptr){
	node *temp=*headptr;
	int key;
	if(temp->next==NULL){
		key=temp->data;
		*headptr=NULL;
		delete(temp);
		return key;
	}
	while((temp->next)->next!=NULL){
		temp=temp->next;
	}
	node *lastnode=temp->next;
	temp->next=NULL;
	key=lastnode->data;
	delete(lastnode);
	return key;
}