#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////��3�����������������в�ͬλ�ĸ���
//int NumberOf(int n) {
//	int count=0;
//	while (n)                 //��n�е�1���������ˣ�Ϊ0ʱ�˳�ѭ��
//	{
//		n = n & (n - 1);      //nÿ�루n-1������һ��&�������ͻ���ȥһ��1
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = x^y;   //������,�õ��Ľ��x��y�м�λ��ͬ���м���1
//	int count = NumberOf(ret);//ͳ������1�ĸ��������һ���ȡ��ͬ�ķ���
//	printf("%d", count);
//}