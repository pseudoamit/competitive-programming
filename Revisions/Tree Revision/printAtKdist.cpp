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

void printAtKDistance(struct node *root, int k){
    if(!root) return;
    if(root && k == 0) cout<<root->data<<" ";

    printAtKDistance(root->left,k-1);
    printAtKDistance(root->right,k-1);

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

    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;

    printAtKDistance(root,k);

	return 0;
}