#include<iostream>
#include"tree.h"
#include"tree.cpp"

bool identical(node *r1,node *r2){
	if(r1==NULL&&r2==NULL){
		return true;
	}
	if(r1==NULL||r2==NULL){
		return false;
	}
	if(r1->key==r2->key){
		return identical(r1->left,r2->left)&&identical(r1->right,r2->right);
	}
	return false;
}

int main(int argc, char const *argv[])
{
	node *root=NULL;
	root=new node();
	root->key=1;
	node *temp=new node();
	temp->key=2;
	root->left=temp;
	temp->left=temp->right=NULL;
	temp=new node();
	temp->key=3;
	root->right=temp;
	temp->left=temp->right=NULL;
	temp=new node();
	temp->key=4;
	temp->left=temp->right=NULL;
	root->left->left=temp;
	temp=new node();
	temp->key=5;
	temp->left=temp->right=NULL;
	root->left->right=temp;
	temp=new node();
	// temp->key=6;
	// temp->left=temp->right=NULL;
	// root->right ->right=temp;

	node *root1=NULL;
	root1=new node();
	root1->key=1;
	temp=new node();
	temp->key=2;
	root1->left=temp;
	temp->left=temp->right=NULL;
	temp=new node();
	temp->key=3;
	root1->right=temp;
	temp->left=temp->right=NULL;
	temp=new node();
	temp->key=4;
	temp->left=temp->right=NULL;
	root1->left->left=temp;
	temp=new node();
	temp->key=5;
	temp->left=temp->right=NULL;
	root1->left->right=temp;
	temp=new node();
	temp->key=6;
	temp->left=temp->right=NULL;
	root1->right ->right=temp;
	inorder(root);
	cout<<endl;
	inorder(root1);
	cout<<endl;
	cout<<identical(root,root1)<<endl;
	return 0;
}