#include<bits/stdc++.h>
#define REP(i,n) for(int i = 1; i<=n; i++)
#define pb push_back
#define mod 1000000007

using namespace std;

int visited[100001];
vector<int> arr[100001];
int cc_size;

void dfs(int node){
	visited[node] = 1;
	cc_size++;
	
	for(int child:arr[node]){
		if(visited[child] == 0)
			dfs(child);
	}
}

void solve(){
	int n, m, a, b;
	cin>>n>>m;
	REP(i,n) visited[i]=0,arr[i].clear();
	REP(i,m) cin>>a>>b, arr[a].pb(b), arr[b].pb(a);
	
	int cnt = 0;
	long long int res = 1;
	
	REP(i,n)
	if(visited[i] == 0){
		cc_size = 0;
		dfs(i),cnt++; 
		res = (res * cc_size) % mod;
	}
	cout<<cnt<<" "<<res<<endl;
}

int main(){
	int t;
	cin>>t;
	
	while(t--)
		solve();
	
	return 0;
	
}
