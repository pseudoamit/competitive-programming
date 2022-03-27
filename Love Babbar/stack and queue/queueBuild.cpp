#include<bits/stdc++.h>
#define MAX 5
using namespace std;

int rear = -1, front = -1;
int queue_ds[MAX];

void enqueu(int data){
	
	if(rear == MAX -1)
		cout<<data<<" can't be inserted because of overflow"<<endl;
	else
		queue_ds[++rear] = data;
}

void dequeue(){
	if(front == rear){
		cout<<"No data"<<endl;
		rear = -1;
		front = -1;
	}else{
		queue_ds[++front] = INT_MAX;
	}
}



void display(){
	if( (rear == front) || (rear == -1) ){
		cout<<"No data";
	}else{
		for(int i = front +1; i <= rear; i++){
			cout<<queue_ds[i]<<" ";
		}
	}
}
	



int main(){
	
/*	enqueu(10);
	enqueu(20);
	enqueu(30);
	enqueu(40);
	enqueu(50);*/
	dequeue();
	dequeue();
	
	display();
	
	return 0;
}
