#include<bits/stdc++.h>
using namespace std;


int doUnion(int a[], int n, int b[], int m)  {
	unordered_set<int> s;
	int result = 0;

	for (int i = 0; i < n; i++) {
		if (s.find(a[i]) == s.end()) {
			s.insert(a[i]);
			result++;
		}

	}
	for (int i = 0; i < m; i++) {
		if (s.find(b[i]) == s.end()) {
			s.insert(b[i]);
			result++;
		}
	}
	return result;
}


int main()
{


	return 0;
}