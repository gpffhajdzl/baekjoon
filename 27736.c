//40점 풀이

#include <stdio.h>

int main() {
	int n;
	int yes = 0, no = 0, even = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int vote;
		scanf("%d", &vote);
		switch (vote) {
		case -1:
			no++;
			break;
		case 1:
			yes++;
			break;
		case 0:
			even++;
			break;
		}
	}

	if (even > n / 2) {
		printf("INVALID");
	}
	else if (yes > no) {
		printf("APPROVED");
	}
	else {
		printf("REJECTED");
	}



	return 0;
}
