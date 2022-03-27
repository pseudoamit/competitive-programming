#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		long int result = 0,r1 = 0, r2 = 0;
		for(int j=0;j<n;j++){
			int s;
			cin>>s;
			r2 = r1;
			r1 = s;
			if(j == 0)
				continue;
			result += (long int)(abs(r2 - r1) - 1);
			
		}
		cout<<result<<endl;
	}
	
	return 0;
}
