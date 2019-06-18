#ifndef _LINKLIST_H_INCLUDED
#define _LINKLIST_H_INCLUDED

class node{
	public:
		int data;
		node * next;
};

void inputlist(node **,int);
void insert(node **,int);//insert to back;
void insertfront(node **,int);
int del(node **);
int delback(node **);
void display(node *);
void showmenu();
#endif