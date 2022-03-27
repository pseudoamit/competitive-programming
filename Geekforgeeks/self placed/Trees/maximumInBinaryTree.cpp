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

//Iterative solotion
/*int maxOfTree(node *root){
	
	
	if(!root) return 0;
	int max = INT_MIN;
	queue<node *> q;
	q.push(root);
	node *temp;
	
	while(!q.empty()){
		
		temp = q.front();
		q.pop();
		if(temp->data > max) max = temp->data;
		if(temp->left) q.push(temp->left);
		if(temp->right) q.push(temp->right);
	}
	
	return max;
	
}*/

//Recursive solotion
int maxOfTree(node *root){
	
	if(!root) return INT_MIN;
	return max(root->data, max(maxOfTree(root->left),maxOfTree(root->right)));

	
}


int main(){
	
	node *root = new node(10);
	root->left = new node(200);
	root->right = new node(30);
	root->left->left = new node(45);
	root->left->right = new node(91);
	root->right->left = new node(61);
	root->right->right = new node(5);
	
	cout<<"Size of the tree is: "<<maxOfTree(root);
	
	return 0;
}

