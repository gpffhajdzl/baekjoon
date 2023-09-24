//아래 코드의 전체적인 틀은 세스코 모임의 든든한 맏형 정우태의 코드를 참고하였음을 밝힙니다 :)
//정우태의 Github https://github.com/UtaeJeong/Baekjoon_practice/tree/main

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int t, n, result;
int arr[100005] = { 0 }, visited[100005] = { 0 }, init[100005];

void clear_case(int n);
int dfs(int init, int c_idx, int depth);

int main() {
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		result = 0;

		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[j]);
		}

		for (int j = 1; j <= n; j++) {
			if (!visited[j]) {
				result += dfs(j, j, 1);
			}
		}

		printf("%d\n", n - result);

		clear_case(n);
	}

	return 0;
}

void clear_case(int n) {
	for (int i = 1; i <= n; i++) {
		arr[i] = 0;
		visited[i] = 0;
		init[i] = 0;
	}
}


int dfs(int start, int c_idx, int depth) {
	if (visited[c_idx]) {
		if (init[c_idx] != start) return 0;
		else return depth - visited[c_idx];
	}

	init[c_idx] = start;
	visited[c_idx] = depth;

	return dfs(start, arr[c_idx], depth + 1);
	
}