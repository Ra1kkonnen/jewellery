#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////��д������һ��1-100�����������г��ֶ��ٸ�����9
//int count = 0;
//int CountNumber(int a, int b, int c) {
//	for (int i = a; i <= b; i++) {
//		if (i%10==c) {
//			count++;              //��λ��c
//		}
//		int j = i;                //����j��¼i��ֵ����ֹ����whileѭ���޸�i��ֵ
//		while (j/10!=0)           //�ж��Ƿ�ÿһλ����鵽��
//		{ 
//			if ((j/10)%10==c)     //���ʮλ�Ƿ���c
//			{
//				count++;
//			}
//			j = j / 10;           //���μ��ǰһλ��ֱ��j/10==0
//		}
//	}
//	return count;
//}
//int main() {
//	int x, y, z;
//	printf("��ʼ����\n");
//	scanf("%d", &x);
//	printf("��ֹ����\n");
//	scanf("%d", &y);
//	printf("��ѯ����\n");
//	scanf("%d", &z);
//	printf("��%d��\n", CountNumber(x,y,z));
//	return 0;
//}