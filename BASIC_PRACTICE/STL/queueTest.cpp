#include<bits/stdc++.h>

using namespace std;


int main(){


    queue<string> q;

    q.push("Amit");
    q.push("Kumar");
    q.push("Roy");

    cout<<"First element   :"<<q.front()<<endl;
    q.pop();
    cout<<"First element   :"<<q.front()<<endl;
}