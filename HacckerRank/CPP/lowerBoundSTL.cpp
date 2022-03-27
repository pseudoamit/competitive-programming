#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<long long> vec;
	for(int i; i<n; i++){
		int data;
		cin>>data;
		vec.push_back(data);
	}
	int q;
	cin>>q;
	for(int j = 0; j < q; j++){
		int y;
		cin>>y;
		vector<long long>::iterator it;
		it = lower_bound(begin(vec),end(vec),y); 
	}
	if(it != vec.end()){
		cout<<"Yes"<<" ";
		cout<<it-vec.begin();		
	}else{
		cout<<"No"<<" ";
		cout<<it-vec.begin();	
	}
	return 0;
}
