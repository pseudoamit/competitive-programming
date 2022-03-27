#include<bits/stdc++.h>
using namespace std;


int main()
{

	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6, 6, 7, 8, -11, 0, -21, -2, 0, 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	int start = 0, end = size - 1;
	while (start < end) {
		if (arr[start] >= 0 && arr[end] < 0) {
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
		if (arr[start] <= 0)
			start++;
		if (arr[end] > 0)
			end--;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}