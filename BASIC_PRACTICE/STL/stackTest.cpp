#include<iostream>
#include<stack>

using namespace std;


int main(){



    stack<string> s;

    s.push("Roy");
    s.push("Kumar");
    s.push("Amit");


    for(int i = 0; i < s.size(); i ++){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}