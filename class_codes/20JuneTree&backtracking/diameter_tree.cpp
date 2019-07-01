#include<iostream>
#include"tree.h"
#include"tree.cpp"

using namespace std;

int max3(int a,int b,int c){
	return a>b?(a>c?a:c):(b>c?b:c);
}

int diameter(node *root){
	if(root==NULL){
		return 0;
	}
	return max3(height(root->left)+height(root->right)
		,diameter(root->left),diameter(root->right));
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
	temp->key=6;
	temp->left=temp->right=NULL;
	root->right ->left=temp;
	temp=new node();
	temp->key=7;
	temp->left=temp->right=NULL;
	root->right ->right=temp;
	cout<<diameter(root)<<endl;
	return 0;
}