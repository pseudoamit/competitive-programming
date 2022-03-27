#include<iostream>

using namespace std;


int main(){
	
    int N,S;
	cin>>N>>S;
	int arr[N] = {};
	int  k = 1;
	int sum = S;
	if( S < 2*N){
		cout<<"No"<<endl;
	}else{
		if(N == 1){
			arr[0] = S;
	    }else{
			for(int i = 0; i < N; i++){
				if(i == N - 1){
					arr[i] = sum;
				}else{
					arr[i] = 2;
					sum -= 2;
				}
	       }
	    }
	    cout<<"YES"<<endl;
	    for( int j: arr){
			cout<<j<<" ";
		}
		cout<<endl;
		cout<<k<<endl;
    }
	return 0;
	
}

