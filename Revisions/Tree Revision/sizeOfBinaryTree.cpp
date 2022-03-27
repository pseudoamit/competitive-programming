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

int sizeOfABinaryTree(struct node *root){

    int size = 0;
    if(!root) return 0;

    queue<struct node *> q;

    q.push(root);
    struct node *temp;
    while(!q.empty()){
       temp = q.front();
       q.pop();
       size++;
       if(temp->left) q.push(temp->left);
       if(temp->right) q.push(temp->right);  
    }

    return size;

}

int main(){

	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->left = new node(60); 
    root->right->right = new node(70);
    root->right->right->right = new node(80);

    int size = sizeOfABinaryTree(root);
    cout<<"Size of the binary tree is: "<<size;

	return 0;
}