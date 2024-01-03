#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int main() {
	printf("请输入台阶的数量：");
	int n;
	scanf("%d", &n);
	int a = 1;
	int b = 2;
	int c;
	if (n == 1) {
		c = 1;
	}
	else if (n == 2) {
		c = 2;
	}
	else
	{
		while (n > 2) {
			c = a + b;             //a、b、c一开始对应第一个、第二个、第三个值，通过循环依次往后移动一位
			a = b;
			b = c;
			n--;
		}
	}

	printf("%d", c);
	return 0;
}