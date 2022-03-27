#include<bits/stdc++.h>

using namespace std;

int main(){
	
	unsigned long long t;
	cin>>t;
	for( unsigned long long i = 1; i<= t; i++){
	    unsigned long long int x, y;
		cin>>y>>x;
		if(x > y){
			if(x%2 == 1){
				cout<<x * x - y + 1<<endl;
			}else{
				x--;
				cout<<x * x + y<<endl;
			}	
		}else{
			if(y %2 == 0){
				cout<<y * y - x + 1<<endl;
				
			}else{
				y--;
				cout<<y * y + x<<endl;
			}
		}
	}
	
	return 0;
}
