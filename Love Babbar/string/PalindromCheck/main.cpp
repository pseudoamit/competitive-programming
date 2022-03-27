#include<bits/stdc++.h>
using namespace std;

int main()
{

	char S[] = {"abbaa"};
	int result = 1;
	int start = 0;
	int end = strlen(S) - 1;

	while (start < end) {
		if (S[start++] != S[end--]) {
			result = 0;
			break;
		}
	}

	if (result == 1) {
		cout << "Palindrome";
	} else {
		cout << "Not";
	}

	return 0;
}