#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//int main() {
//	char a[1000];//char类型取值范围(-128~127)/(10000000~01111111)
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}//-1 -2 -3 ...-127 -128 127 126...3 2 1 0 -1 -2 ...
//	printf("%d", strlen(a));//访问到0即\0，会停止访问，所以输出128+127=255
//
//
//	return 0;
//}