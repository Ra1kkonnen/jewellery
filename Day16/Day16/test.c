#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

//��1�����һ���������������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

//int NumberOf(int x) {
//	int count = 0;
//	for (int i = 0; i < 32; i++)    //����32λ
//	{
//		if (((x>>i) & 1) == 1) {    //һ����������&1������1(...0001),˵�������һλ��Ϊ1������������λ��ͳ��1������
//			count++;
//		}
//
//	}
//	return count;
//}
//int main() {
//	int x;
//	scanf("%d", &x);
//	int ret = NumberOf(x);
//	printf("%d", ret);
//}