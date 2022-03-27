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

void levelOrderTraversals(struct node *root){

    if(!root) return;
    queue<struct node *> q;

    q.push(root);
    struct node *temp;
    while(!q.empty()){
       temp = q.front();
       q.pop();
       cout<<temp->data<<" ";
       if(temp->left) q.push(temp->left);
       if(temp->right) q.push(temp->right);  
    }


}

int main(){

	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->left = new node(60); 
    root->right->right = new node(70);

    levelOrderTraversals(root);

	return 0;
}