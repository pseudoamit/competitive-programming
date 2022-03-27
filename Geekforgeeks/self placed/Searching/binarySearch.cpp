#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8};
	
	int k = 12;
	
	int low = 0;
	int high = sizeof(arr)/sizeof(arr[0]) - 1;
	
	while(low <= high){
		int mid = (low + high) / 2;
		
		if( arr[mid] == k){
			cout<<"Data found"<<endl;
			break;
		}
		if( k <= arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
		
	}
	
	return 0;
}
