#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	
	vector<int> first;
	vector<int> second;
	
	long long int sum = (n*(n+1)) / 2;
	if( sum %2 != 0 ){
		cout<<"NO";
	}else{
		long long int result = sum / 2;
		for(long long int j = n; j >= 1; j--){
			if(j <= result){
				result -= j;
				first.push_back(j);
			}else{
				second.push_back(j);
			}
		}
		cout<<"YES"<<endl;
		cout<<first.size()<<endl;
		for(auto el: first){
			cout<<el<<" ";
		}
		cout<<endl;
		cout<<second.size()<<endl;
		for(auto el: second){
			cout<<el<<" ";
		}
		cout<<endl;	
	}
	
	return 0;
	
}
