//시간없어서 긴급 브론즈 문제로 세스코 인증

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int arr[10];
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + 10);
		printf("%d\n", arr[7]);
	}

	return 0;
}