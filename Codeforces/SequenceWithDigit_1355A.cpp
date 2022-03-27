#include<iostream>
using namespace std;

int main(){
  	int t;
	cin>>t;
	for(int i = 1; i<= t; i++){
		unsigned long long int a, k;
		cin>>a>>k;
		unsigned long long int final_result = a;
		for(unsigned long long int j = 1; j < k ; j++){
			int min_dig = 9,max_dig = 0;
			unsigned long long int n = final_result;
			int rem;
			while(n){
				rem = n % 10;
				min_dig = min(rem,min_dig);
				max_dig = max(rem,max_dig);
				n = n / 10;
		    }
		    final_result += min_dig * max_dig;
		    if( min_dig == 0)
					break;
		}
		cout<<final_result<<endl;
    }
    return 0;
}
