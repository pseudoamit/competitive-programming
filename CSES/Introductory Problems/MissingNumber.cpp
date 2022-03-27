#include<bits/stdc++.h>

using namespace std;


int main(){
	long long n;
	cin>>n;
	long long sum = 0;
	for(long long i=1; i<n; i++){
		int number;
		cin>>number;
		sum += number;
	}
	cout<<(n*(n+1)/2) - sum;
	return 0;
}
