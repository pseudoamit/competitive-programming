#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	// int n;
	// cin >> n;
	// int count = 0;
	// while (n != 0) {
	// 	count++;
	// 	n = n / 10;
	// }
	// cout << count << endl;

	if (n == 0)
		return 0;
	else
		return 1 + solve(n / 10);
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n;
	cin >> t >> n;
	while (t--)
	{
		cout << solve(n) << endl;
	}
	return 0;
}