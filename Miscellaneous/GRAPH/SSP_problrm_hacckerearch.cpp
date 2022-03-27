#include<bits/stdc++.h>



using namespace std;

vector<int>  arr[1001];
int visited[1001];
int dis[1001];

void dfs(int node, int d){
	visited[node] = 1;
	dis[node] = d;
	
	for(int child: arr[node]){
		if(!visited[node]){
			dfs(child, dis[node] + 1);
		}
	}
}
		 

int main(){
	
	int n,q,a,b;
	cin>>n;
	
	for(int i = 1; i < n; i++)
		cin>>a>>b, arr[a].push_back(b), arr[b].push_back(a);
	
	dfs(1,0);
	
	cin>>q;
	
	int ans = -1, min_dis = 100000000;
	while(q--){
		int girls_city;
		cin>>girls_city;
		
		if(dis[girls_city] < min_dis){
			min_dis = dis[girls_city];
			ans = girls_city;
		}else if(dis[girls_city] == min_dis && girls_city < ans){
			ans = girls_city;
		}
	}
	cout<<ans;
		
	
	return 0;
}
