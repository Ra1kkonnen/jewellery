#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int main() {
	//int a = 4;
	//float f = 4.5f;
	//a + f;//��Ҫ��a������ת��Ϊfloat����ȥ����
	//return 0;

	//float f = 3.14;
	//int num = f;//�ᶪʧ����

	//int a = 4;
	//int b = 5;
	//int c = a + b * 7;//���ȼ������˼���˳��
	//int c = a + b + 7;//���ȼ��������ã�����Ծ���



	////���ʽ2
	//c + --c;
	////(1)���ȼ���ͬ����+��3+2=5
	////(2)���ȼ���ͬ����--��2+2=4

	//���ʽ3
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
}

