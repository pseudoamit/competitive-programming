#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

void solve()
{
	vi arr = {1, 4, 6, 3, 98, 6, 76, 4, 33, 55, 6};
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
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