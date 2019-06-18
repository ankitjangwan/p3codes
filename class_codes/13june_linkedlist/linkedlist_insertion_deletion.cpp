#include<iostream>
#include"linkedlist.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int key;
	char ch;
	node *head=NULL;
	showmenu();
	do{
		cout<<"enter your choice: (enter 0 to display menu)";
		cin>>ch;
		cout<<endl;
		switch(ch){
			case '0':
				showmenu();
				break;
			case '1':
				cout<<"input key: ";
				cin>>key;
				insert(&head,key);
				break;
			case '2':
				cout<<"input key: ";
				cin>>key;
				insertfront(&head,key);
				break;
			case '3':
				if(head==NULL){
					cout<<"list is empty"<<endl;
				}
				else{
					key=del(&head);
					cout<<key<<" is deleted"<<endl;
				}
				break;
			case '4':
				if(head==NULL){
					cout<<"list is empty"<<endl;
				}
				else{
					key=delback(&head);
					cout<<key<<" is deleted"<<endl;
				}
				break;
			case '5':
				if(head==NULL){
					cout<<"nothing to show,list is empty"<<endl;
				}
				else{
					display(head);
				}
				break;
			case '6':
				cout<<"bbye"<<endl;
				break;
			default:
				cout<<"wrong choice enter again: ";
			cin>>ws;
		}
	}while(ch!='6'); 	
	return 0;
}
