#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	for( int i=0; i < t; i++){
		int final_result = INT_MAX;
		string s;
		cin>>s;
		int index1 = -1, index2 = -1, index3 = -1, counter = 0,flag = 0, min_val, max_val;
		for(char &c : s){
			
			if(c == '1')
				index1 = counter;
			else if(c == '2')
				index2 = counter;
			else
				index3 = counter;
				
			if(index1 != -1 && index2 != -1 && index3 != -1){
				max_val = max(index1,max(index2,index3));
				min_val = min(index1,min(index2,index3));
				final_result = min(((max_val - min_val) + 1),final_result);
				flag = 1;
			}	
			counter++;
		}
		if(flag == 1)
			cout<<final_result<<endl;
		else
			cout<<0<<endl;
		
    }
	
	return 0;
	
}
