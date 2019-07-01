#include<iostream>

using namespace std;



class node{
public:
	int key;
	node *left,*right;
};

int max(int a,int b){
	return (a>b?a:b);
}

int height(node *root){
	if(root==NULL){
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

void show(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->key<<' ';
	show(root->left);
	show(root->right);
}

int main(){
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
	cout<<height(root);
	cout<<endl;
	return 0;
}