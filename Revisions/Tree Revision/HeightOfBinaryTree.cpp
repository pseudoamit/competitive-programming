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


int calHeight(struct node *root){
    if(!root) return 0;

    return max(calHeight(root->left),calHeight(root->right)) + 1;

}


int main(){

	struct node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);
    root->right->left = new node(70);
    root->right->right->right = new node(80);

    int height = calHeight(root);
    cout<<"Height of the binary tree is :"<<height;

	return 0;
}