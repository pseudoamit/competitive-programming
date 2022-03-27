#include<bits/stdc++.h>
using namespace std;


int main(){

    set<int> s;
    // set<int, greater<int>> s;
    // Inserting element into the set
    s.insert(5);
    s.insert(20);
    s.insert(7);
    s.insert(10);
    s.insert(13);
    s.insert(7);

    // loop
    cout<<"The elements :";
    // for(int x: s){
    //     cout<<x<<" ";
    // }

    // s.clear();

    // s.erase(13);
    // auto i = s.find(10);
    // s.erase(i, s.end());

    // s.erase(i);

    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout<<(*it)<<" ";
    // }

    // cout<<endl;
    // cout<<"COunt of 77: "<<s.count(77);

    // cout<<endl;
    // cout<<"size of set is: "<<s.size();


    auto i = s.lower_bound(23);

    if( i != s.end())
        cout<<(*i)<<endl;
    else
        cout<<"Element you are looking is greater than the greatest"<<endl;
    

    return 0;
}