#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////（4）获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main() {
//	int x;
//	scanf("%d", &x);
//	//打印偶数位
//	for (int i = 31; i >= 1; i -= 2) {
//		printf("%d ",(x>>i)&1);        //从高偶数位到低偶数位依次执行右移操作，与1执行&操作，结果为多少就是该偶数位的值
//	}
//	printf("\n");
//	//打印奇数位
//	for (int i = 30; i >= 0; i -= 2) {
//		printf("%d ", (x >> i) & 1);   //从高奇数位到低奇数位依次执行右移操作，与1执行&操作，结果为多少就是该奇数位的值
//	}
//}