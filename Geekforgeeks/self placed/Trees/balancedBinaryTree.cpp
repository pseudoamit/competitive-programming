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

int isBalanced(node *root){
    if(root==NULL)
        return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)return -1;
    
    if(abs(lh-rh)>1)
        return -1; 
    else
        return max(lh,rh)+1;
}


int main(){
	
	node *root = new node(50);
	root->left = new node(20);
	root->right = new node(30);
	root->right->left = new node(15);
	root->right->right = new node(515);
	root->right->right->right = new node(5100);
	

	if(isBalanced(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
	
	return 0;
}


