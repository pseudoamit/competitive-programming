#include<bits/stdc++.h>
using namespace std;

int main() {
	int q, n;
	cin >> q >> n;
	vector<vector<int>> a;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		vector<int> row;
		for (int j = 0; j < k; j++) {
			int val;
			cin >> val;
			row.push_back(val);
		}
		a.push_back(row);
	}
	while (q--) {
		int first , second;
		cin >> first >> second;
		cout << a[first][second] << endl;
	}
}