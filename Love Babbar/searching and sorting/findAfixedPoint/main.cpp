#include<bits/stdc++.h>
using namespace std;

void solve()
{
	vector<int> valueEqualToIndex(int arr[], int n) {
		// code here
		vector<int> newArray;
		for (int i = 0; i < n; i ++) {
			if ((i + 1) == arr[i]) {
				newArray.push_back(i + 1);
			}
		}

		return newArray;
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}