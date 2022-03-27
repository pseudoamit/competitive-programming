#include<bits/stdc++.h>

using namespace std;

vector<int> arr[10001];
int visited[10001];
int maxD, maxNode;

void dfs(int node, int d){
	visited[node] = 1;
	if(d>maxD){
		maxD = d;
		maxNode = node;
	}
	for(int child: arr[node]){
		if(visited[child] == 0){
			dfs(child,d+1);
		}
	}
}

int main(){

	int n,u,v;
	cin>>n;
	for(int i=0; i<n-1; i++){
		cin>>u>>v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	maxD = -1;
	dfs(1, 0);
	for(int i= 0;i<n;i++)
		visited[i] = 0;
	maxD = -1;
	dfs(maxNode, 0);
	cout<<maxD;
	return 0;
}
