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

int max_level = 0;

void leftView(node *root, int level){
	if(!root) return;
	if(max_level < level){
		cout<<root->data<<" ";
		max_level = level;
	}
	leftView(root->left,level+1);
	leftView(root->right,level+1);
}

int main(){
	
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->left = new node(60);
	root->right->left->right = new node(5);
	
	leftView(root,1);
	
	return 0;
}


