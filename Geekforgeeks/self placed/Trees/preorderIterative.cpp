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

void inorder(struct node *root){
	stack<struct node *> s;
	struct node *curr = root;
	while(curr || !s.empty()){
		
		while(curr){
			cout<<curr->data<<" ";
			s.push(curr);
			curr = curr->left;
		}
		
		curr = s.top();
		s.pop();
		curr = curr -> right;
	}
}

int main(){
	
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(50);
	root->left->left = new node(40);
	root->left->right = new node(30);
	


	inorder(root);

	
	return 0;
}




