#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left, *right;
	node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void inorder(struct node *root){
	if(!root) return;

	inorder(root->left);
	cout<<root->data<<"->";
	inorder(root->right);
}

void preorder(struct node *root){
	if(!root) return;

	cout<<root->data<<"->";
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root){
	if(!root) return;

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"->";
}

int main(){

	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);

	cout<<"Inorder Traversals :";
	inorder(root);
	cout<<endl;

	cout<<"Preorder Traversals :";
	preorder(root);
	cout<<endl;

	cout<<"PostOrder Traversals :";
	postorder(root);
	cout<<endl;

	return 0;
}