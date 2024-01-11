#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int *a = 0;
void test() {
	(*a)++;
}
void test2() {
	int b = *a;
	printf("%d", b);
}
int main() {
	test2();
	return 0;
}