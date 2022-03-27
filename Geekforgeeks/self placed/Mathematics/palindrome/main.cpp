#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int temp = n;
	int rev = 0;
	while (temp != 0) {
		int rem = temp % 10;
		rev = rev * 10 + rem;
		temp /= 10;
	}
	if ((n - rev) == 0)
		cout << "Palidrome" << endl;
	else
		cout << "Not Palindrome" << endl;
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