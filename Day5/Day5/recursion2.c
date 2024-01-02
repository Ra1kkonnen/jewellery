#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int my_strlen(char * str) {
	if (*str != '\0') {
		return 1 + my_strlen(str+1);//不能用str++，因为后置++是先传后加，
		//会出错，也不能用++str，因为前置++是传进去了正确的值，但是将str的值给改变了，有些情况下也行不通
		//所以递归里一般不用++

	}
	else
	{
		return 0;
	}
}
int main() {
	char arr[] = "bit";
	printf("%d", my_strlen(arr));
	return 0;
}