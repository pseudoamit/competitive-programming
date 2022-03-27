#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{

	long int fact = 1;

	for (int i = 2; i <= n; i++) {
		fact *= i;
	}

	int res = 0;

	while ( fact % 10 == 0) {
		res++;
		fact = fact / 10;
	}

	cout << "Trailing zeros :" << res << endl;
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
		solve(n);
	}
	return 0;
}