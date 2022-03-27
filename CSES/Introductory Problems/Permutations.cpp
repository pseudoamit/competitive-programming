#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> vec;
	int n;
	cin>>n;
	if(n == 2 || n == 3){
		cout<< "NO SOLUTION"<<endl;
	}else{
		for(int i = 1; i <= n; i++){
			if(i % 2 == 0)
				vec.push_back(i);
		}
		for(int i = 1; i <= n; i++){
			if(i % 2 != 0)
				vec.push_back(i);
		}
		for(int j: vec){
			cout<<j<<" ";
		}	
	}
	
	return 0;
}
