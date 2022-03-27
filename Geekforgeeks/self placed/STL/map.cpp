#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, char> ch;

    ch.insert({1,'A'});
    ch.insert({5,'M'});
    ch.insert({3,'I'});
    ch.insert({2,'T'});

    // for(auto x: ch){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    // for(auto it=ch.rbegin(); it != ch.rend(); it++){
    //      cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // ch.clear();

    for(auto it=ch.begin(); it != ch.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<endl;
    // cout<<"Count: "<<ch.count(1);

    cout<<ch[10]<<endl;
    

    return 0;
}