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

void inorder(struct node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right); 
    } 
}

struct node *getSuccessor(struct node *curr){
    curr = curr->right;
    while(curr && curr->left)
        curr = curr->left;
    return curr;
}

struct node *deleteIntoBST(struct node *root, int x){
    if(!root) return root;
    else if(x < root->data)
        root->left = deleteIntoBST(root->left,x);
    else if(x > root->data)
        root->right = deleteIntoBST(root->right,x);
    else{
        if(!root->left){
            struct node *temp = root->right;
            delete root;
            return temp;
        }else if(!root->right){
            struct node *temp = root->left;
            delete root;
            return temp;
        }else{
            struct node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = deleteIntoBST(root->right,succ->data);
        }
    }
    return root;
}


int main(){

    node *root = new node(100);
    root->left = new node(60);
    root->right = new node(200);
    root->left->left = new node(40);
    root->left->right = new node(70);
    root->left->right->left = new node(65);
    root->right->left = new node(150);
    root->right->right = new node(250);
    root->right->left->right = new node(180);

    int x = 100;

    bool searchResult = searchTheDataInBST(root,x);

    if(searchResult == true){
        root = deleteIntoBST(root,x);
        inorder(root);
    }else{
        cout<<"Data is not present in the BST"<<endl;
    }
    

    return 0;
}