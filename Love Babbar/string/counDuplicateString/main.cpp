#include<bits/stdc++.h>
using namespace std;

int main()
{

	char S[] = "geeksforgeeks";
	map<char, int> count;
	for (int i = 0; i < strlen(S); i++) {
		count[S[i]]++;
	}

	for (auto i : count) {
		if (i.second > 1) {
			cout << i.first << "---->" << i.second << endl;
		}
	}
	return 0;
}