#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////浮点数和整数在内存中的存储有区别
//int main() {
//	//整数的形式存储，浮点数的形式读取
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("pFloat的值为：%f\n", *pFloat);//0.000000
//
//	//浮点数的形式存储，整数的形式读取
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);//1091567616
//	printf("pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;                                                             
//
//}