#include<bits/stdc++.h>
using namespace std;

int main() {

	long int n, q;
	int lastAnswer = 0;
	cin >> n >> q;
	vector<vector<long int>> seqList;
	while (q--) {
		long int a, x, y, index;
		cin >> a >> x >> y;
		if (a == 1) {
			index = (x ^ lastAnswer) % n;
			seqList[index].push_back(y);
		} else {
			index = (x ^ lastAnswer) % n;
			lastAnswer = seqList[index][y];
			cout << lastAnswer << endl;
		}
	}
	return 0;
}
