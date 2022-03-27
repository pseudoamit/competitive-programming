#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	long int fact = 1;
	int res = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		fact *= i;
	}

	cout << "Factorial of the number: " << fact << endl;

	while (fact % 10 == 0) {
		res++;
		fact /= 10;

	}

	cout << "Number of zeros: " << res << endl;
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