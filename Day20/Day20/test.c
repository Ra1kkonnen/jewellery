#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//int main() {
//	char* pstr = "hello bit.";//把字符串的首字符的地址存储在了ps中
//	printf("%s\n", pstr);//打印字符串
//	printf("%c\n", *pstr);//打印首字符h
//	return 0;
//}
//int main() {
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char* str4 = "hello bit.";
//
//	if (str1 == str2) {
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3==str4)
//	{
//		printf("str1 and str2 are same\n");
//
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//
//	}
//	return 0;
//
//
//}
//1、2不同，因为1、2是两个地址不同的数组，而数组名str1与str2相等代表两者地址相同，不符合
//3、4相同，因为char *str3 = "hello bit."定义的是常量字符串，其内容不能被修改，而* str4再次指向相同字符串，所以地址相同