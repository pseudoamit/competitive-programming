#include<bits/stdc++.h>
using namespace std;

int main(){

    string S;
    int result = 0;

	map<char,int> rmap;
	rmap['I'] =   1;
	rmap['V'] =   5;
	rmap['X'] =  10;
	rmap['L'] =  50;
	rmap['C'] = 100;
	rmap['D'] = 500;
	rmap['M'] =1000;

    cout<<"Enter the string";
    cin>>S;


    for(int i = 0; i < S.length(); i++){
        if(rmap[S[i]] >= rmap[S[i+1]])
            result = result + rmap[S[i]];
        else
            result = result - rmap[S[i]];
        
    }

    cout<<result;

    return 0;
}