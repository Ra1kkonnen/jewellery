#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////（3）求两个数二进制中不同位的个数
//int NumberOf(int n) {
//	int count=0;
//	while (n)                 //当n中的1被消除完了，为0时退出循环
//	{
//		n = n & (n - 1);      //n每与（n-1）进行一次&操作，就会消去一个1
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = x^y;   //异或操作,得到的结果x和y有几位不同就有几个1
//	int count = NumberOf(ret);//统计数中1的个数，与第一题采取不同的方法
//	printf("%d", count);
//}