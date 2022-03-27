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


void printNodesAtHeightK(struct node *root, int k){

     if(!root) return;

     if(k == 0) cout<<root->data<<" ";
     else{
        printNodesAtHeightK(root->left , k-1);
        printNodesAtHeightK(root->right , k-1);
     }
}


int main(){

    struct node *root = new node(10);
    root->left = new node(6);
    root->right = new node(8);
    root->right->left = new node(7);
    root->right->left->left = new node(11);
    root->right->left->right = new node(12);


    printNodesAtHeightK(root, 3);

    return 0;

}