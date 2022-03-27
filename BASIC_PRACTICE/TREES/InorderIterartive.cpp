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


// void inorderTraversals(struct node *root){
//     if(!root)
//         return;
//     if(root->left)
//         inorderTraversals(root->left);
//     cout<<root->data<<" ";
//     if(root->right)
//             inorderTraversals(root->right);

// }

void inorder(struct node *root){
    stack<struct node*> s;
    struct node *curr = root;
    while(!s.empty() || curr){
        while(curr){
            s.push(curr);
            curr = curr -> left;
        }
        curr = s.top();
        s.pop();

        cout<<curr->data<<" ";
        curr = curr -> right;
    }
}

void preorder(struct node *root){

    stack<struct node*> s;
    struct node *curr = root;
    while(!s.empty() || curr){
        while(curr){
            cout<<curr->data<<" ";
            s.push(curr);
            curr = curr -> left;
        }
        curr = s.top();
        s.pop();
        curr = curr -> right;
    }
}

void postorder(struct node *root){

    stack<struct node*> s;
    stack<int> t;
    struct node *curr = root;
    s.push(root);
    while(!s.empty()){
       curr = s.top();
       s.pop();
       t.push(curr->data);
       if(curr->left){
           
          s.push(curr->left);
       }
       if(curr->right){
            
           s.push(curr->right);
       }
    }
    while (!t.empty())
    {
        cout << t.top() << " ";
        t.pop();
    }
}

int main(){

    struct node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);

    // inorderTraversals(root);

    cout<<"INORDER TRAVERSAL";
    inorder(root);
    cout<<endl;

    cout<<"PRE-ORDER TRAVERSAL";
    preorder(root);
    cout<<endl;

    cout<<"POST-ORDER TRAVERSAL";
    postorder(root);
    cout<<endl;

    return 0;
}

