#include<bits/stdc++.h>
#define MAX 5
using namespace std;

int stack1[MAX];
int top = -1;

void push(int data){
	if(top == MAX -1 )
		cout<<data<<" Data can't be inserted because of overflow"<<endl;
	else
		stack1[++top] = data;
	
}

void display(){
	
	if(top >= 0){
		for(int i =top; i>= 0; i--){
			cout<<stack1[i]<<" ";
		}
	}else{
		cout<<"Stack empty";
	}

	cout<<endl;
	
}	




int main(){
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	
	display();
	
	return 0;
	
}
