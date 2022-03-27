#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        vec.push_back(data);
    }
    int x, a, b;
    cin>>x>>a>>b;
    vec.erase(vec.begin()+(x-1));
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    cout<<vec.size()<<endl;
    for(auto j:vec)
        cout<<j<<" ";
    return 0;
}
