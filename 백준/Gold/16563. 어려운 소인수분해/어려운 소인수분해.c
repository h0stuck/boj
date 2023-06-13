#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void doit();
int check(int a);
void ch();

int number = 100000;
int a[1000001];
int num[10001];

int main() {

	ch();
	int n, k = 0;
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		doit();
		printf("\n");
	}
	

	return 0;
}

void ch() {

	for (int i = 2; i <= number; i++) {
		a[i] = i;
	}

	for (int i = 2; i <= number; i++) {
		if (a[i] == 0) continue;

		for (int j = 2 * i; j <= number; j += i) {
			a[j] = 0;
		}
	}

	int k = 0;
	for (int i = 2; i <= number; i++) {
		if (a[i] != 0) { num[k] = a[i]; k++; }
	}
}

void doit() {

	int n, k = 0;
	scanf("%d", &n);

	while (n != 1) {
		k = check(n);
		printf("%d ", k);
		n /= k;
	}

	return;
}

int check(int b) {
	for (int i = 0; num[i] * num[i] <= b; i++) {
		if (b % num[i] == 0) return num[i];
	}
	return b;
}