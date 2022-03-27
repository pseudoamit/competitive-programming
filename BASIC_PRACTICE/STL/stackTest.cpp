#include<iostream>
#include<stack>

using namespace std;


int main(){

    stack<string> s;

    s.push("Roy");
    s.push("Kumar");
    s.push("Amit");


   int n = s.size();

    for(int i = 0; i < n; i ++){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}