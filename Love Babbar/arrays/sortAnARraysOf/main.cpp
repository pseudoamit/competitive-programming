#include<bits/stdc++.h>
using namespace std;


int main()
{
	int arr[] = {0 , 2, 1, 2, 0, 1, 1, 1, 0, 2, 2, 0};
	int size = (sizeof(arr) / sizeof(arr[0]));
	int count1 = 0, count0 = 0, count2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) count0++;
		else if (arr[i] == 1) count1++;
		else count2++;
	}
	for (int i = 0; i < size; i++) {
		if (count0 != 0) {
			arr[i] = 0;
			count0--;
			continue;
		}
		if (count1 != 0) {
			arr[i] = 1;
			count1--;
			continue;
		}
		if (count2 != 0) {
			arr[i] = 2;
			count2--;
			continue;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "";
	}

	return 0;
}