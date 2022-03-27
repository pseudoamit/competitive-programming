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


int height(struct node *root){
	if(!root) return 0;
	return 1+max(height(root->left),height(root->right));	
}




int main(){
	
	struct node *root = new node(10);
	root->left = new node(8);
	root->right = new node(30);	
	root->right->left = new node(40);
	root->right->right = new node(50);
	root->right->right->left = new node(70);
	root->right->right->left->right = new node(90);
	cout<<"Height of the tree: "<<height(root)<<endl;
	
	return 0;
	
}

