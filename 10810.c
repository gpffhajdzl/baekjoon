#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	int i, j, k;
	int arr[105] = { 0 };

	scanf("%d %d", &n, &m);

	for (int t = 0; t < m; t++) {
		scanf("%d %d %d", &i, &j, &k);
		for (; i <= j; i++) {
			arr[i - 1] = k;
		}
	}

	for (int t = 0; t < n; t++) {
		printf("%d ", arr[t]);
	}

	return 0;
}
