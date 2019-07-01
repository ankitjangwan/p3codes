#include<iostream>

using namespace std;

int max(int a,int b){
	return (a>b?a:b);
}

int height(node *root){
	if(root==NULL){
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

void preorder(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->key<<' ';
	preorder(root->left);
	preorder(root->right);
}


void inorder(node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->key<<' ';
	inorder(root->right);
}

void postorder(node *root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->key<<' ';
}