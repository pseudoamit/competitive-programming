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

int heightOfABinaryTree(struct node* root){
    if(!root) return 0;
    return max(heightOfABinaryTree(root->left),heightOfABinaryTree(root->right)) + 1;
}


int main(){

    struct node *root = new node(10);
    root->left = new node(8);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->right->left = new node(50);

    cout<<"Height of a binary tree"<<heightOfABinaryTree(root)<<endl;


    return 0;
}

