#include<iostream>
#include"tree.h"
#include"tree.cpp"

using namespace std;

void left_view(node *root,int level,int &count){
	if(root==NULL){
		return;
	}
	if(level==1&&count!=1){
		count++;
		cout<<root->key<<' ';
	}
	else if(count != 1){
		left_view(root->left,level-1,count);
		left_view(root->right,level-1,count);
	}
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
	int h=height(root);
	// for (int i = 1; i <=h ; ++i)
	// {
	// 	levelorder(root,i);
	// 	cout<<endl;
	// }
	int count;
	for (int i = 1; i <=h ; ++i)
	{
		count=0;
		left_view(root,i,count);
		cout<<' ';
	}
	cout<<endl;
	return 0;
}