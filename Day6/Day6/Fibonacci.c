#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//int Fibonacci(int x) {
//	if (x<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibonacci(x - 2) + Fibonacci(x - 1);
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}
//int main() {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int n;
//	scanf("%d", &n);
//	while (n>2)
//	{
//		c = a + b;                //a、b、c一开始对应第一个、第二个、第三个值，通过循环依次往后移动一位
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}