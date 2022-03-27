#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n){
	
	bool swapped = false;
	for(int j=0; j < n; j++){
		swapped = false;
		for(int k=0; k < (n-j-1); k++){
			swapped = false;
			if(arr[k] > arr[k+1]){
				swap(arr[k],arr[k+1]);
				swapped = true;
			}
		}
		if(swapped == false)
			break;
	}

	for(int i=0; i <n; i++)
		cout<<arr[i]<<" ";
}


int main(){
	
	int arr[] = {1,7,3,90,4,22,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,n);
		
	return 0;
	
}

