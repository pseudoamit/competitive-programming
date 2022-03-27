#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};


struct node *insertAtBeg(struct node *head, int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = head;
	head = new_node;
	return head;
	
}

struct node *insertAtEnd(struct node *head,int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	
	struct node *temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = new_node;
	
	return head;
} 

struct node *insertAtParticularPos(struct node *head,int data,int key){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	
	struct node *temp = head;
	while(temp->data !=key){
		temp = temp->next;
	}
	
	new_node->next = temp->next;
	temp->next = new_node;
	return head;
}

void display(struct node *head){
	
	struct node *temp = head;
	while(temp->data){
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<endl;
}

struct node* reverse(node *prev,node *head,int k){
	node *curr = head;
	node *next_node = NULL;
	node *p = prev;
	
	int count = 0;
	
	while(curr && count < k){
		next_node = curr->next;
		curr->next = p;
		p = curr;
		curr = next_node;
		count++;
	}
	
	if(next_node) reverse(p,next_node,k);
	
	return prev;
}

int main(){
	
	int k;
	cin>>k;
	struct node *head = NULL;
	struct node *prev = NULL;
	
	head = insertAtBeg(head,50);
	head = insertAtBeg(head,40);
	head = insertAtBeg(head,30);
	head = insertAtBeg(head,20);
	head = insertAtBeg(head,10);
	
	head = insertAtEnd(head,60);
	head = insertAtEnd(head,70);
	head = insertAtEnd(head,80);
	
	
	head = reverse(prev,head,k);
	
	display(head);
	
	
	return 0;
	
}
