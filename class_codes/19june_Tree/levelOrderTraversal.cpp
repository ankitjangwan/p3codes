#include<iostream>
#include"tree.h"
#include"tree.cpp"

using namespace std;

void printlevel(node *root,int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->key<<' ';
	}
	printlevel(root->left,level-1);
	printlevel(root->right,level-1);
}

int main(){
	node *root=NULL;
	root=new node();
	root->key=1;
	node *temp=new node();
	temp->key=3;
	root->left=temp;
	temp->left=temp->right=NULL;
	temp=new node();
	temp->key=2;
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
	int h=height(root);
	int i;
	for(i=1;i<=h;++i){
		printlevel(root,i);
	}
	return 0;

}