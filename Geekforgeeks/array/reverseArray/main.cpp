#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back

using namespace std;

void solve()
{
	vi arr = {1, 2, 3, 4, 5, 6, 7};
	for (auto i = arr.end(); i != arr.begin(); i++) {
		cout << *i << " ";
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