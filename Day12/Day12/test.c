#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

//int main() {
	//int a = 10;//aռ�ĸ��ֽ�
	//int* pa = &a;//�õ�����a���ĸ��ֽ��е�һ���ֽڵĵ�ַ
	//             //��a�ĵ�ַ�����pa�����У�pa��һ��ָ�����
	//*pa = 20;

	//int a = 0x11223344;
	//int* pa = &a;
	//*pa = 0;
	
	//int a = 0x11223344;
	//char* pa = &a;
	//*pa = 0;

	//int arr[10] = {0};
	//int* pa = arr;
	//char* pc = arr;
	//printf("%p\n",pa);
	//printf("%p\n", pa+1);

	//printf("%p\n", pc);
	//printf("%p\n", pc+1);

	//int i = 0;
	//for (i = 0; i < 10; i++) {
	//	*(pa + i) = 1;
	//}

	//int* p;//p��һ���ֲ���ָ�������δ��ʼ��Ĭ��Ϊ���ֵ
	//*p = 20;//�Ƿ������ڴ�

	//int arr[10] = { 0 };//�����СΪ10
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 10; i++) {//ѭ��11��
	//	*p = i;
	//	p++;           //��11��Խ�磬�����Ƿ�����
	//}
	

	//return 0;
//}

//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();//�ֲ�����a������ڴ�ռ��Ѿ�����
//	*p = 10;        //��ʱָ��p�ٰ�10����a���ڴ�ռ��У�Ϊ�Ƿ������ڴ�
//	return 0;
//}

int main() {
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr;
	//int* pend = arr + 9;
	//while (p<=pend)        //ָ��Ĺ�ϵ����(��ַ��С�ڱȽ�)
	//{
	//	printf("%d\n", *p);//���δ�ӡ1 2 3 4 5 6 7 8 9 10
	//	p++;             //ָ��+-����
	//}

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//printf("%d\n", &arr[9] - &arr[0]);//���Ϊ9
	//ָ���ȥָ��õ���������ָ��֮��Ԫ�صĸ���

	//#define N_VALUES 5
	//float values[N_VALUES];
	//float* vp;
	//for (vp = &values[N_VALUES]; vp >&values[0];) {//��ϵ����
	//	*--vp = 0;//��������Ԫ����Ϊ0
	//}


	/*int arr[10] = { 0 };*/
	//printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
	//printf("%p\n", &arr[0]);
	////��ӡ�ṹ��Ϊ00EFF920
	
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (int i = 0; i < 10; i++) {
	//	printf("%d", *(p + i) = i);
	//	//�ɹ���ӡ�����Ԫ��
	//}

	//int a = 10;
	//int* pa = &a;//pa��ָ�������һ��ָ��

	////ppa��һ������ָ�����
	//int** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ

	////a��ֵΪ10����ַΪ0x0012ff40
	////pa��ֵΪ0x0012ff40����ַΪ0x0012ff48
	////pa��ֵΪ0x0012ff48����ַΪ0x0012ff52

	//ָ������ - ����
	int arr[10];//�������� - ���������
	char ch[5];//�ַ����� - ��ŵ����ַ�
	//ָ������ - ���ָ�������
	int* parr[5];




	return 0;
}