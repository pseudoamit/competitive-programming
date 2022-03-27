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

bool searchTheDataInBST(node *root,int x){
    if(!root) return false;
    while(root){
        if( x == root->data) return true;
        if( x < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

// struct node *insertIntoBST(node *root,int x){
//     if(!root) 
//         return new node(x);
//     if ( x < root->data) 
//         root->left = insertIntoBST(root->left,x);
//     else if( x > root->data) 
//         root->right = insertIntoBST(root->right,x);

//     return root;
// }

struct node *insertIntoBST(node *root,int x){
    struct node *temp = new node(x);
    if(!root) return temp;

    struct node *parent = NULL,*curr = root;

    while(curr){
        parent = curr;
        if(x < curr->data)
            curr = curr->left;
        else if(x > curr->data)
            curr = curr->right;

    }

    if( x < parent->data){
        parent->left = temp;
    }else{
        parent->right = temp;
    }

    return root;
}

void inorder(struct node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right); 
    } 
}


int main(){

    node *root = new node(100);
    root->left = new node(60);
    root->right = new node(200);
    root->left->left = new node(40);
    root->left->right = new node(70);
    root->right->left = new node(150);
    root->right->right = new node(250);
    root->right->left->left = new node(130);
    root->right->left->right = new node(180);

    int x = 30;

    bool searchResult = searchTheDataInBST(root,x);

    if(searchResult == false){
        root = insertIntoBST(root,x);
        inorder(root);
    }else{
        cout<<"Data is already preset in the BST"<<endl;
    }
    

    return 0;
}