#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left,*right;
	
	node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void inorder(struct node *temp){
	if(!temp) return;
	if(temp->left) inorder(temp->left);
	cout<<temp->data<<" ";
	if(temp->right) inorder(temp->right);
}





int main(){
	
	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);	
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);
	
	inorder(root);
	
	return 0;
	
}
