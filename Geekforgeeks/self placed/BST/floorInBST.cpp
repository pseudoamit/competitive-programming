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

int floorInBST(struct node *root, int x){
    struct node *res = root;
    while(root){
        if(!root) res = NULL;
        else if(x == root->data){
            res = root;
        }
        else if(x < root->data){
            root = root->left;
        }else{
            res = root;
            root = root->right;
        }
    }
    return res->data;
}

int main(){

    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);
    root->right->left->left = new node(55);
    root->right->left->right = new node(65);

    int x = 54;

    int floorValue = floorInBST(root,x);

    cout<<floorValue<<endl;

    return 0;
}