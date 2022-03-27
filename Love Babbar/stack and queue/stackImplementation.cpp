#include<bits/stdc++.h>
#define 5 MAX

using namespace std;

int stack[MAX];
int top = -1;

void push(int data){
	if(top == MAX -1 )
		cout<<"Data can't be inserted anymore";
	else
		stack[++top] = data;
	
}

void display(){
	
	if(top >= 0){
		for(int i =top; i>= 0; i--){
		cout<<stack[i]<<" ";
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
	
	display();
	
	return 0;
	
}
