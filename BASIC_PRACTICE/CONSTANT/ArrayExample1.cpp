#include<iostream>
using namespace std;

int main(){
	char arr[]{};
	
	cout<<"Enter the number one by one";
	
	for(int j=0; j<5; j++){
		cin>>arr[j];
	}
	
	for(int i=0;i<sizeof(arr);i++){
		cout<<arr[i]<<"\t";
	}
}
