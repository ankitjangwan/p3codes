#ifndef tree
#define tree
class node{
	int key;
	node *left,*right;
};
int max(int,int);
void insert(node **);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void spiralorder(node *,int);
void leveltraversal(node *,int);
void height(node *);
#endif