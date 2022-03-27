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


void printAtK(struct node *root, int k){
	if(!root) return;
	if(k == 0) cout<<root->data<<" ";
	else{
		printAtK(root->left,k-1);
		printAtK(root->right,k-1);
	}
}


int main(){
	
	
	int k;
	cin>>k;
	struct node *root = new node(10);
	root->left = new node(8);
	root->right = new node(30);	
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->left = new node(60);
	
	printAtK(root,k);
	
	return 0;
	
}


