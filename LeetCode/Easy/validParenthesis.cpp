#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "([)]";
    int first = 0, second = 0, third = 0;
    for(int i=0; i < s.length(); i++){
        if (s[i] == '(' ) first++;
        else if (s[i] == ')') first--;
        else if (s[i] == '{') second++;
        else if (s[i] == '}') second--;
        else if (s[i] == '[') third++;
        else if (s[i] == ']') third--;
    }

    if( first != 0 || second != 0 || third != 0) cout<<"no";
    else cout<<"yes";
    return  0;
}