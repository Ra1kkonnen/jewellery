#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* brr) {
	char tmp = brr[0];                     //tmp���������һ��Ԫ��
	int len = my_strlen(brr);
	brr[0] = brr[len - 1];                 //�����һ��Ԫ�طŵ���һ��Ԫ��
	brr[len - 1] = '\0';                   //�����һ��Ԫ�ر��/0����Ϊ�������һ��Ԫ�ط���ĩβ���´εݹ�ʱ���Ὣ�����н������´���
	if (my_strlen(brr+1)>=2) {             //�ݹ���ڣ����ʣ�»�δ������Ԫ�ش��������ż��������������˳�
		reverse_string(brr + 1);           //�ݹ齻������һ��Ԫ��Ϊ�׵��ַ���
	}
	brr[len - 1] = tmp;                    //������tmp��ֵ����ĩβ
}
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}