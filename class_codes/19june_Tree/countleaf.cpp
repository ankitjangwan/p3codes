#include<iostream>
#include"tree.h"
#include"tree.cpp"

int countleaf(node * root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL&&root->right==NULL){
		return 1;
	}
	return countleaf(root->left)+countleaf(root->right);
}

int main(){
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
	temp->key=6;
	temp->left=temp->right=NULL;
	root->right ->right=temp;
	cout<<countleaf(root);
	cout<<endl;
	return 0;
}