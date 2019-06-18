#include <iostream>
#include "linkedlist.h"
#include "linkedlist.cpp"

using namespace std;

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

int main(){
	node *head=NULL;
	int n;
	cin>>n;
	int key;
	while(n--){
		cin>>key;
		insert(&head,key);
	}
	// inputlist(&head,n);
	node *middle=findmiddle(head);
	cout<<middle->data<<endl;
	return 0;

}