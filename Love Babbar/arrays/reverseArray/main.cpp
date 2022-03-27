// #include<bits/stdc++.h>
// #define vi vector<int>
// #define pb push_back
// using namespace std;

// void solve(vi &arr)
// {
// 	reverse(arr.begin(), arr.end());
// 	for (int i = 0; i < arr.size(); i++) {
// 		cout << arr[i] << " ";
// 	}
// }

// int main()
// {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

// 	int t;
// 	cin >> t;
// 	vi arr = {1, 2, 4, 5, 6, 78, 2};

// 	while (t--)
// 	{
// 		solve(arr);
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;


void solve(vi &arr)
{
	int start = 0;
	int end = arr.size() - 1;
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}

int main()
{

	vi arr = {1, 2, 4, 5, 6, 78, 2};
	solve(arr);
	return 0;
}