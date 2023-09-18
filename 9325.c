#include <stdio.h>

int main() {
	int t, s, n, q, p;
	int ans = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		ans = 0;
		scanf("%d", &s);
		ans += s;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %d", &q, &p);
			ans += q * p;
		}
		printf("%d\n", ans);
	}

	return 0;
}
