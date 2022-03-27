#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned int n, mul = 1;
	const unsigned int M =  1000000007;
	cin>>n;
	for(unsigned int i=0;i<n;i++){
		if(mul < M)
			mul = (mul * 2) % M;
		else
			mul = (mul * 2);
	}
	cout<<mul % M;
	return 0;
}
