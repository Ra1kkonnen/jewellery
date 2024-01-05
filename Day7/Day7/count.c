#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//计算1 / 1 + 1 / 2 -1 / 3 + 1 / 4 + ...... + 1 / 99 -1 / 100的值，打印结果
//int main() {
//	double sum=0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += flag*1.0 / i;     //注意不是flag*1，因为这样就是整型变量在运算
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
