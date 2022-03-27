#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left,*right;
	
	node(int data){
		this->data = data;
		left=right=NULL;
	}
};


int sizeOfTree(node *root){
	
	if(!root) return 0;
	return (sizeOfTree(root->left) + sizeOfTree(root->right) ) +1;
	
}


int main(){
	
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->left = new node(60);
	root->right->right = new node(70);
	
	cout<<"Size of the tree is: "<<sizeOfTree(root);
	
	return 0;
}

