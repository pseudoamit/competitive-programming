#include<bits/stdc++.H>
using namespace std;


int main(){

    set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(7);
    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(0);
    s.insert(7);

    for(auto i : s){
        cout<<i<< " ";
    }cout<<endl;

    cout<<"If 7 present or not :"<<s.count(7)<<endl;

    set<int> :: iterator itr = s.find(33);

    cout<<"Value present at itr -> "<<*itr<<endl;

    return 0;

    
}