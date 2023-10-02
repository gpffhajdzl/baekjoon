#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n <= 5)
		printf("%d", n / 2 + 1);
	else
		printf("%d", (10 - n) / 2 + 1);

	return 0;
}