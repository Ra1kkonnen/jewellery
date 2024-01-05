#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//在屏幕上输出九九乘法口诀表
int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <=i; j++) {
			printf("%d*%d=%d\t",i,j, i * j);
		}
		printf("\n");
	}
	return 0;
}