
#include<iostream>
#include"tree.h"
#include"tree.cpp"

using namespace std;

int max3(int a,int b,int c){
	return a>b?(a>c?a:c):(b>c?b:c);
}

bool isheight_balanced(node* root){
	if(root==NULL){
		return true;
	}
	int l = height(root->left);
	int r = height(root->right)
	if(abs(l-r)>1){
		return false;
	}
	if(isheight_balanced(root->left)&&isheight_balanced(root->right)){
		return true;
	}
	return false;
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
	root->right ->left=temp;
	temp=new node();
	temp->key=7;
	temp->left=temp->right=NULL;
	root->right ->right=temp;
	if(isheight_balanced(root)){
		cout<<"Yes"<<endl;
		return 0;
	}
	cout<<"No"<<endl;
	return 0;
}