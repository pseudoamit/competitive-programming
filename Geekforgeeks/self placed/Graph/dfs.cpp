#include<bits/stdc++.h>
using namespace std;
vector<int> g[1000000];
int visited[1000000];

void dfs(int k){
    if(!visited[k]){
        visited[k] = 1;
        for(int i=0; i <g[k].size(); i++){
            if(!visited[g[k][i]]){
                dfs(g[k][i]);
            }
        }
    }
}

int main(){

    int n = 5;
    while(n--){
        int p,q;
        cin>>p>>q;
        g[p].push_back(q);
    }

    dfs(0);

    for(int i=0; i<=7; i++){
        cout<<i<<":"<<visited[i]<<" ";
    }
    return 0;
}