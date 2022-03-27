#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin>>n;
	
	char s[n];
	unordered_map<char, int> m; 
	string new_string = ""; 
	
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	for(int i=0; i<n; i++){
		m[s[i]]++;	
	}
	for(int i=0; i<n; i++){
		if (m[s[i]] % 2 == 0) 
            continue; 
        new_string += s[i];
	}
	
	if(new_string.length() == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
		
}

int main(){
	
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
	
}

