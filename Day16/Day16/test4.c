#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//��5�������������ͱ���������������ʱ����
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = a ^ b;       //a���b
	b = a ^ b;       //b=a^b^b,   b^b=0,����b=a
	a = a ^ b;       //a=a^b^a,   a^a=0,����a=b
	printf("%d %d", a, b);
}