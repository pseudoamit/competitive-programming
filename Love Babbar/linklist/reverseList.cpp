#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;


void insertAtBeg(int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = head;
	head = new_node;
	
}

void insertAtEnd(int data){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	
	struct node *temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = new_node;
} 

void insertAtParticularPos(int data,int key){
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	
	struct node *temp = head;
	while(temp->data !=key){
		temp = temp->next;
	}
	
	new_node->next = temp->next;
	temp->next = new_node;
}

void display(){
	
	struct node *temp = head;
	while(temp->data){
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<endl;
}

/*void reverse(){
	struct node *prev = NULL;
	struct node *curr = head;
	struct node *next_node = NULL;
	
	while(curr){
		next_node = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next_node;
	}
	head = prev;
}*/

void reverse(struct node *prev, struct node *curr){
	if(curr){
		reverse(curr,curr->next);
		curr->next = prev;
	}else
		head = prev;
}

int main(){
	
	insertAtBeg(50);
	insertAtBeg(40);
	insertAtBeg(30);
	insertAtBeg(20);
	insertAtBeg(10);
	
	insertAtEnd(60);
	insertAtEnd(70);
	insertAtEnd(80);
	
	insertAtParticularPos(25,20);
	insertAtParticularPos(35,30);
	
//	cout<<"The list before reverse: ";
//	display();
	struct node *prev = NULL;
	
	reverse(prev,head);
	
//	cout<<"The list after reverse: ";
	display();
	
	
	return 0;
	
}
