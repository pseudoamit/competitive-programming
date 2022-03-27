#include<bits/stdc++.h>
using namespace std;


int main(){
	
	/*int arr[] = {1,7,3,90,4,22,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,arr+n, greater<int>());
	
	for(int x : arr){
		cout<<x<<" ";
	}
	cout<<endl;*/
	
	vector<int> v = {1,7,3,90,4,22,3};
	
	sort(v.begin(),v.end(), greater<int>());
	
	for(auto i:v){
		cout<<i<<" ";
	}
		
	
	return 0;
	
}
