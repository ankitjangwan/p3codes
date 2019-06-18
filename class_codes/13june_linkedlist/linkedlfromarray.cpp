#include<iostream>
#include"linkedlist.h"
#include "linkedlist.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	node *head=NULL;
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;++i){
		cin>>arr[i];
	}
	//slow : O(n^2)
	// for(i=0;i<n;++i){
	// 	insert(&head,arr[i]);
	// }
	//fast: O(n):
	for(i=n-1;i>=0;--i){
		insertfron(t&head,arr[i]);
	}
	cout<<endl;
	display(head);
	return 0;
}