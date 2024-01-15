#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<stdlib.h>
#include<stdbool.h>

////（2）判断一个整数是否是2的n次方
//bool IsSquare(int n) {
//	if ((n&(n-1))==0)       //2的n次方的数字二进制表示只有一个1，n&（n-1）若为1，表示该数字二进制中只有一个1
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	if (IsSquare(n) == true) {
//		printf("Y");
//	}
//	else
//	{
//		printf("N");
//
//	}
//}