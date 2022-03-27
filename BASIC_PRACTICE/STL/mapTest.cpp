#include<bits/stdc++.h>

using namespace std;


int main(){

    map<int,string> m;

    m[1] = "Shryash";
    m[15] = "Rishabh";
    m[3] = "Kohli";
    m[4] = "Rahul";


    cout<<"Before erase anything"<<endl;
    for(auto i : m){
        cout<<i.first<<"--->"<<i.second<<endl;
    }

    m.erase(15);

    cout<<"After erase 15"<<endl;
        for(auto i : m){
        cout<<i.first<<"--->"<<i.second<<endl;
    }

    return 0;
}