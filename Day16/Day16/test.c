#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

//（1）输出一个整数，输出该数32位二进制表示中1的个数，其中负数用补码表示。

//int NumberOf(int x) {
//	int count = 0;
//	for (int i = 0; i < 32; i++)    //整数32位
//	{
//		if (((x>>i) & 1) == 1) {    //一个二进制数&1若等于1(...0001),说明其最后一位上为1，依次向右移位，统计1的数量
//			count++;
//		}
//
//	}
//	return count;
//}
//int main() {
//	int x;
//	scanf("%d", &x);
//	int ret = NumberOf(x);
//	printf("%d", ret);
//}