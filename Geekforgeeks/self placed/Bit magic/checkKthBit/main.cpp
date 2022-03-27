#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	if ( n & (1 << (k - 1)) != 0)
		printf("Yes\n");
	else
		printf("No\n");
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