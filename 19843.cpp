//백준 19843
//인증 시간이 얼마 안남아서 급하게 투입

#include <stdio.h>
#include <string.h>

int cal(char* day) {
	if (!strcmp(day, "Mon")) {
		return 1;
	}
	else if (!strcmp(day, "Tue")) {
		return 2;
	}
	else if (!strcmp(day, "Wed")) {
		return 3;
	}
	else if (!strcmp(day, "Thu")) {
		return 4;
	}
	else if (!strcmp(day, "Fri")) {
		return 5;
	}
}

int main() {
	int t, n, h1, h2;

	int result = 0;
	char day1[5], day2[5];

	scanf("%d %d", &t, &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %s %d", day1, &h1, day2, &h2);

		h2 += (cal(day2) - cal(day1))*24;

		result += h2 - h1;

	}

	if (result > t) {
		printf("0");
	}
	else if (t-result > 48) {
		printf("-1");
	}
	else {
		printf("%d", t - result);
	}
	return 0;
}