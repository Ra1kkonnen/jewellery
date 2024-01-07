#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//int main() {
//	char ch1[] = "bit";
//	char ch2[] = { 'b','i','t' };
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	
//	return 0;
//}
//%p - 是按地址的格式打印 - 十六进制的打印
//int main() {
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main() {
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//完全初始化
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("arr[%d][%d]=%p\n", i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	return 0;
//}