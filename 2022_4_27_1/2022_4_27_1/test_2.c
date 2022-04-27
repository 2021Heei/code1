#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void* sum(double *a, double *b) {
	return *a > *b ? a : b;
}
int main() {
	double a, b;
	scanf("%lf%lf", &a, &b);
	double *ret= sum(&a, &b);
	printf("%d", *ret);
	return 0;
}