#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//递归实现n的k次方
//double power(int x, int y) {
//	if (y == 0) {
//		return 1.0;                 //考虑到0次方的结果
//	}
//	else if(y>0) {
//		return x * power(x, y - 1);
//	}
//	else
//	{
//		return 1.0 / power(x, -y); //负次方就是倒数
//	}
//}
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%lf", power(m, n));
//	return 0;
//}