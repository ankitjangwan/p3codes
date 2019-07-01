#include<iostream>
#include"tree.h"
#include"tree.cpp"

using namespace std;

int sum(node *root){
	if(root==NULL){
		return 0;
	}
	return sum(root->left)+sum(root->right)+root->key;
}

int main(int argc, char const *argv[])
{
			/*
				1
			   / \ 
			  /   \
			 2     3
			/ \     \
		   /   \     \
		  4     5	  6
			*/
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
	// show(root);
	cout<<endl;
	cout<<sum(root);
	cout<<endl;
	
	
	return 0;
}