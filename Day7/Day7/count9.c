#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////编写程序数一下1-100的所有整数中出现多少个数字9
//int count = 0;
//int CountNumber(int a, int b, int c) {
//	for (int i = a; i <= b; i++) {
//		if (i%10==c) {
//			count++;              //个位是c
//		}
//		int j = i;                //利用j记录i的值，防止后续while循环修改i的值
//		while (j/10!=0)           //判断是否每一位都检查到了
//		{ 
//			if ((j/10)%10==c)     //检查十位是否有c
//			{
//				count++;
//			}
//			j = j / 10;           //依次检查前一位，直到j/10==0
//		}
//	}
//	return count;
//}
//int main() {
//	int x, y, z;
//	printf("起始数字\n");
//	scanf("%d", &x);
//	printf("终止数字\n");
//	scanf("%d", &y);
//	printf("查询数字\n");
//	scanf("%d", &z);
//	printf("有%d个\n", CountNumber(x,y,z));
//	return 0;
//}