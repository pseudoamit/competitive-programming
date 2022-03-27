
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	vector<int> vec;
	for(int i = 0; i<n; i++){
		int data;
		cin>>data;
		vec.push_back(data);
	}
	sort(begin(vec),end(vec));
	for(auto j:vec){
		cout<<j<<" ";
	}
	return 0;
}
