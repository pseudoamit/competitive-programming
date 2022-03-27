#include<bits/stdc++.h>
using namespace std;

vector<int> arr[100001];
int visited[100001];

void dfs(int node){
	
	if(!visited[node]){
		visited[node] = 1;
		cout<<node<<" ";
		for(int i : arr[node]){
			if(!visited[i])
				dfs(i);
		}
	}
}

void addEdge(int u, int v){
	arr[u].push_back(v);
	arr[v].push_back(u);
}


int main(){
	
	int count = 0;
	addEdge(8, 5); 
    addEdge(1, 2); 
    addEdge(2, 3); 
    addEdge(2, 4); 
    addEdge(3, 5); 
    addEdge(6, 7); 
    addEdge(9,10);
    for(int j = 1; j<= 10; j++){
		if(!visited[j]){
			dfs(j);
			count++;
			cout<<endl;
		}
	}
	
    cout<<"Count: "<<count<<endl;
    
    
	return 0;
	
}
