#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
//�ݹ�ʵ��n��k�η�
//double power(int x, int y) {
//	if (y == 0) {
//		return 1.0;                 //���ǵ�0�η��Ľ��
//	}
//	else if(y>0) {
//		return x * power(x, y - 1);
//	}
//	else
//	{
//		return 1.0 / power(x, -y); //���η����ǵ���
//	}
//}
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%lf", power(m, n));
//	return 0;
//}