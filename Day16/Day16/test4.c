#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//（5）交换两个整型变量，不允许创建临时变量
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = a ^ b;       //a异或b
	b = a ^ b;       //b=a^b^b,   b^b=0,所以b=a
	a = a ^ b;       //a=a^b^a,   a^a=0,所以a=b
	printf("%d %d", a, b);
}