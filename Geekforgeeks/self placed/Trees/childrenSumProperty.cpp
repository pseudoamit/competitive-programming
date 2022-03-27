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

int max_level = 0;

bool sumOfChild(node *root){
	if(!root) return true;
	if(!root->left && !root->right) return true;
	
	int sum = 0;
	
	if(root->left) sum += root->left->data;
	if(root->right) sum += root->right->data;
	return ( sum == root->data && sumOfChild(root->left) && sumOfChild(root->right) );
	

}

int main(){
	
	node *root = new node(50);
	root->left = new node(20);
	root->right = new node(30);
	root->right->left = new node(15);
	root->right->right = new node(515);
	

	cout<<(sumOfChild(root)?"YES":"NO")<<endl;
	
	return 0;
}


