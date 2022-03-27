#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string result = "", temp = "";

    for(auto it = strs.begin(); it != strs.end(); it++){

        if( it == strs.begin()){
            result = (*it);
            continue;
        }
        temp = result;
        result = "";
        for(int ch=0; ch < (*it).length(); ch++){
            if((*it)[ch] == temp[ch]){
                result += (*it)[ch];
            }else{
                break;
            }
        }
        
    }

    return result;
        
}


int main(){
    vector<string> strs = {"dog","racecar","car"};
    string prefix = longestCommonPrefix(strs);
    cout<<prefix;
    return 0;
}