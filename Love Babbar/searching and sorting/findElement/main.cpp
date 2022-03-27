#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;


int main()
{
	vi arr = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
	int x = 7;
	int first = INT_MAX, last = INT_MAX;

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == x) {
			if (first == INT_MAX) {
				first = i;
				last  = i;
			} else {
				last = i;
			}

		}
	}
	if (first != INT_MAX && last != INT_MAX) {
		cout << first << endl;
		cout << last << endl;
	}

	return 0;
}