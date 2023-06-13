#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int check(int a);

int main() {
	int n, k = 0;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++) {
		int test = check(i);
		if (i == 1) { ++k; arr[i - 1] = k; }
		else if (test == 0) {
			++k;
			arr[i - 1] = k;
		}
		else {
			arr[i - 1] = arr[test - 1];
		}
	}

	printf("%d\n", k);
	for (int i = 0; i < n; i++) { printf("%d ", arr[i]); }

	return 0;
}

int check(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) return i;
	}
	return 0;
}