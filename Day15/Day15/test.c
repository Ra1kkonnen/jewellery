#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<assert.h>

//模拟实现strcpy
my_strcpy(char *dest,const char *src){
	assert(src != NULL);//断言
	assert(dest != NULL);
	while (*dest++=*src++)
	{
		;//后置++先赋值再指针后移，依次复制hello，当循环到arr2的'\0'时，其ASCII值为0，判断为假，循环结束
	}
}

int main() {
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1,arr2); //1.目标空间的起始地址，2.源空间的起始地址
	printf("%s\n", arr1);
	return 0;
}