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

int maxInBinaryTree(struct node *root){
    if(!root) return -99;

    int maxVal = INT_MIN;
	queue<struct node *> q;
	q.push(root);
	struct node *temp;

	while(!q.empty()){
		temp = q.front();
		q.pop();
		if(temp->data > maxVal) maxVal = temp->data;
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);

	}
    return maxVal;
}

int main(){

struct node *root = NULL;
	// struct node *root = new node(10);
	// root->left = new node(5);
	// root->right = new node(909);
	// root->left->left = new node(321);
	// root->left->right = new node(12);
	// root->right->left = new node(0); 
    // root->right->right = new node(9);
    // root->right->right->right = new node(111);

    int maxNumber = maxInBinaryTree(root);
    cout<<"Maximum value in binary tree is: "<<maxNumber;

	return 0;
}