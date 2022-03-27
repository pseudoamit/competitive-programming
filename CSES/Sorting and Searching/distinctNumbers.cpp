#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> arr;
	set<int> result_arr;
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int data;
		cin>>data;
		arr.push_back(data);
	}
	
	for(int x: arr){
		result_arr.insert(x);
	}
	
	cout<<result_arr.size();
	
	return 0;
	
}
