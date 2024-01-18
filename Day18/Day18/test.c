#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

////判断当前机器的字节序
//int main() {
//	int a = 1;//小端为01 00 00 00，大端为00 00 00 01
//	char* p = (char *)&a;//&a为int*型，需要强制类型转换，char类型指针正好访问第一个字节
//	if (*p == 1) {
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}


