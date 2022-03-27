#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int n;
	cin>>n;
	unsigned long long int arr[n];
	unsigned long long int counter = 0;
	for(unsigned long long int j = 0; j < n; j++){
		unsigned long long int input;
		cin>>input;
		arr[j] = input;
	}
		
	for(unsigned long long int i = 1; i < n; i++){
		if( arr[i] < arr[i-1]){
			counter = counter + (arr[i-1] - arr[i]);
			arr[i] = arr[i-1];		
		}
	}
	cout<<counter;
	return 0;
}
