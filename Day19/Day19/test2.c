#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

int main() {
	
	int n = 9;
	//00000000000000000000000000001001
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);//9
	printf("pFloat��ֵΪ��%f\n", *pFloat);//0.000000
	//00000000000000000000000000001001(�ڴ���Ϊ�Ǹ������洢��ʽ)
	//0��s��    00000000��E��     00000000000000000001001(M)
	//EΪȫ0    +0.00000000000000000001001*2^(-126)
	//ֻ��ӡС�����6λ
	*pFloat = 9.0;
	//1001.0
	//1.001*2^3   E=3
	//0(s)   10000010(E)      00100000000000000000000(M)
	printf("n��ֵΪ��%d\n", n);//1091567616
	//01000001000100000000000000000000(�ڴ���Ϊ���������洢��ʽ)
	//01000001000100000000000000000000=1,091,567,616(����������ԭ����ͬ)
	printf("pFloat��ֵΪ��%f\n", *pFloat);//9.000000
	

	return 0;

}