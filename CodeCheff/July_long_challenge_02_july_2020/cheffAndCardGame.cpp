#include<bits/stdc++.h>

using namespace std;

int sum_of_digit(int n){
	int sum = 0;
	while(n != 0){
		sum += n %10;
		n = n / 10;
	}
	return sum;
}
	

void solve(){
	int n,cr = 0,mr = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		int c,m;
		cin>>c>>m;
		if(sum_of_digit(c) > sum_of_digit(m)){			
			cr += 1;			
		}else if(sum_of_digit(c) < sum_of_digit(m)){
			mr += 1;
		}else{
			cr += 1;
			mr += 1;
		}
	}
	if(cr>mr){
		cout<<0<<" ";
		cout<<cr<<endl;
	}else if(cr<mr){
		cout<<1<<" ";
		cout<<mr<<endl;
	}else{
		cout<<2<<" ";
		cout<<cr<<endl;
	}
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
	
}
