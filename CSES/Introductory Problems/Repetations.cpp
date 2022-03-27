#include<bits/stdc++.h>

using namespace std;


int main(){
	

	string s;
	cin>>s;
	char temp = s[0];
	int counter = 1;
	int max_val = 0;
	for(int i=1;i<s.length();i++){
		if(s[i] == temp){
			counter++;
		}else{
			max_val = max(max_val, counter);
			counter = 1;
			temp = s[i];
		}
	}
	max_val = max(max_val, counter);
	cout<<max_val;
	
	return 0;
}
