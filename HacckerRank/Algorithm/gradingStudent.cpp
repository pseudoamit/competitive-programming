#include<bits/stdc++.h>
using namespace std;



int main(){

    int t;
    cin>>t;
    int grade[t];

    for(int i=0; i<t; i++){
        cin>>grade[i];
    }

    for(int i=0; i<t; i++){
        if(grade[i] < 38){
            cout<<grade[i]<<endl;
        }else{
            if((grade[i] + 1) % 5 == 0){
                cout<<(grade[i] + 1)<<endl;
            }else if((grade[i] + 2) % 5 == 0){
                cout<<(grade[i] + 2)<<endl;
            }else{
               cout<<grade[i]<<endl; 
            }
        }
    }
    return 0;
}