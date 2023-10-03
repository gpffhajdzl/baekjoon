//경곗값에서 오류를 캐치하는게 늦어져서 시간이 꽤 걸려버림
//아래 숫자들이 경계값 테스트 케이스임
// 3
// 09:00-09:50
// 12:00-13:30
// 09:50-12:00

// 3
// 10:00-11:00
// 12:00-12:30
// 10:59-12:00

#include <stdio.h>

int main() {
	int n;
	int a, b, c, d;
	int flag = 0;



	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		
		
		int time[25][65] = { 0 };
		
		flag = 0;
		
		for (int i = 0; i < n; i++) {
			scanf("%d:%d-%d:%d", &a, &b, &c, &d);
			// printf("%d %d %d %d\n", a, b, c, d);
			while (1) {
				if (b == 60) {
						b = 0;
						a++;
					}
				if ((a == c) && (b == d)) break;
				if (time[a][b] == 0) {
					// if ((a == c) && (b == d)) break;
					// printf("%d %d %d %d\n", a, b, c, d);
					time[a][b] = 1;
					b++;
					
				}
				else {
					flag = 1;
					break;
				}
			}
		}
		
		if (flag == 0) {
			printf("no conflict\n");
		}
		else{
			printf("conflict\n");
		}
	}

	return 0;
}
