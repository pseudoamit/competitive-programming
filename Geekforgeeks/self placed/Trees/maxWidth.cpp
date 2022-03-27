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

int maxWidth(node *root){
	if(!root) return 0;
	queue<node *> q;
	q.push(root);
	int res = 0;
	while(!q.empty()){
		int count = q.size();
		res = max(res,count);
		for(int i=0; i<count; i++){
			node *curr = q.front();
			q.pop();
			if(curr->left) q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
	}
	return res;

}


int main(){
	
	node *root = new node(50);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(11);
	root->right->left = new node(15);
	root->right->right = new node(515);
	


	cout<<maxWidth(root);

	
	return 0;
}


