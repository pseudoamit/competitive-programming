#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	long int fact = 1;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		fact *= i;
	}

	int res = 0;

	while ( fact % 10 == 0) {
		res++;
		fact = fact / 10;
	}

	cout << "Trailing zeros :" << res << endl;
	return 0;
}