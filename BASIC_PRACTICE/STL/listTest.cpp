#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l(10,100);
    l.push_back(200);
    l.push_front(300);

    l.pop_back();
    l.pop_front();

    for(auto i : l) cout<<i<<" "; cout<<endl;

    cout<<l.front()<<endl;
     cout<<l.back()<<endl;

     cout<<l.empty()<<endl;

    return 0;
}