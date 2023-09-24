#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

char arr[55][55];
int int_arr[55][55];

bool visited[55][55] = { 0 };

int main() {
	int n, m;

	

	//버퍼 비워주는 변수
	char flush;

	scanf("%d %d", &n, &m);
	//엔터키 비워주기
	scanf("%c", &flush);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%c", &arr[i][j]);
		}
		//엔터키 비워주기
		scanf("%c",&flush);
	}

	//배열 잘 들어갔는지 확인
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	//배열 원소 알파벳 숫자로 변환
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if(arr[i][j])
		}
	}

		

	return 0;
}