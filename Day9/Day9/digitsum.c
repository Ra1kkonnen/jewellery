#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//写一个递归函数DigitSum（n），输入一个非负整数，返回它的各位数字之和
//int sum = 0;
//int DigitSum(int n) {
//	if (n / 10 == 0) {
//		sum += n;
//		return sum;
//	}
//	else
//	{
//		sum += n % 10;
//		DigitSum(n / 10);
//	}
//}
//int main() {
//	int x;
//	scanf("%d", &x);
//	printf("%d", DigitSum(x));
//	return 0;
//}