#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<assert.h>

//ģ��ʵ��strcpy
my_strcpy(char *dest,const char *src){
	assert(src != NULL);//����
	assert(dest != NULL);
	while (*dest++=*src++)
	{
		;//����++�ȸ�ֵ��ָ����ƣ����θ���hello����ѭ����arr2��'\0'ʱ����ASCIIֵΪ0���ж�Ϊ�٣�ѭ������
	}
}

int main() {
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1,arr2); //1.Ŀ��ռ����ʼ��ַ��2.Դ�ռ����ʼ��ַ
	printf("%s\n", arr1);
	return 0;
}