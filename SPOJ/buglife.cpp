#include<bits/stdc++.h>

using namespace std;

vector<int> arr[2001];
int visited[2001], color[2001];

bool dfs(int node, int col){
	visited[node] = 1;
	color[node] = col;
	
	for(int child:arr[node]){
		if(visited[child] == 0){
			bool res = dfs(child, col ^ 1);
			if(res == false)
				return false;
		}else{
			if(color[node] == color[child])
				return false;
		}
	}return true;
}

void solve(){
	int m,n,a,b;
	
	cin>>n>>m;
	for(int i=1;i<= n; i++){
		arr[i].clear();
		visited[i] = 0;
	}
	
	for(int i=1; i <= m; i++){
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	bool flag = true;
	
	for(int i=1; i<=n;i++){
		if(visited[i] == 0){
			bool res = dfs(i,0);
			if(res == false)
				flag = false;
		}
	}
	if(flag == false)
		cout<<"Suspicious bugs found!"<<endl;
	else
		cout<<"No suspicious bugs found!"<<endl;
}










int main(){	
	int t;
	cin>>t;	
	for(int tc = 1; tc <= t; tc++){
		cout<<"Scenario #"<<tc<<":"<<endl;
		solve();
	}
	return 0;
}
