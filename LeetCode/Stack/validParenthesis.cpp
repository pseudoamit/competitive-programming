#include<bits/stdc++.h>
using namespace std;

int main(){


string s = "([)]";

stack<char> x;

for(int i=0; i <s.size(); i++){
    if( s[i] == '(' || s[i] == '{' || s[i] == '[' || x.size() == 0){
        x.push(s[i]);
    }else{
        char tt;
        if(s[i] == ')') tt = ')';
        else if(s[i] == '}') tt = '}';
        else tt = ']';

        x.top () != tt ? x.pop() : x.push(s[i]);
    }
}

cout<<"stack size"<<x.size();
 if(x.size() == 0){
     cout<<"true";

 }else {
     cout<<"false";
 }

 return 0;

}



