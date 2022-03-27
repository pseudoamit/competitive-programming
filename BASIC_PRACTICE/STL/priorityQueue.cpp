#include<bits/stdc++.h>

using namespace std;

int main(){


    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;


    maxi.push(2);
    maxi.push(3);
    maxi.push(0);
    maxi.push(1);

    
    mini.push(2);
    mini.push(3);
    mini.push(0);
    mini.push(1);


    int maxiSize = maxi.size();
    int miniSize = mini.size();

    cout<<"All max heap elements :";
    for(int i = 0; i < maxiSize; i++){
        cout<< maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    cout<<"All min heap elements :";
    for(int i = 0; i < miniSize; i++){
        cout<< mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    return 0;
}