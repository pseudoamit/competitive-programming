#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	// int n;
	// cin >> n;
	// long int result = 1;
	// while (n != 0) {
	// 	result *= n;
	// 	n--;
	// }
	// cout << result;
	if (n == 1)
		return 1;
	else
		return n * solve(n - 1);
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