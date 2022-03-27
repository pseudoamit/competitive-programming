#include<bits/stdc++.h>

using namespace std;

void display(long long n){
	if(n == 1)
		return;
	else{
		if(n % 2 == 0){
			n /= 2;
			cout<<n<<" ";
			display(n);
		}else{
			n = (n *3) + 1;
			cout<<n;
			if(n != 1)
				cout<<" ";
			display(n);
		}
	}
}

int main(){
	
	long long n;
	cin>>n;
	cout<<n<<" ";
	display(n);
	return 0;
}
