#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
////���������������ڴ��еĴ洢������
//int main() {
//	//��������ʽ�洢������������ʽ��ȡ
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("pFloat��ֵΪ��%f\n", *pFloat);//0.000000
//
//	//����������ʽ�洢����������ʽ��ȡ
//	*pFloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);//1091567616
//	printf("pFloat��ֵΪ��%f\n", *pFloat);//9.000000
//
//	return 0;                                                             
//
//}