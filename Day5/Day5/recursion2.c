#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int my_strlen(char * str) {
	if (*str != '\0') {
		return 1 + my_strlen(str+1);//������str++����Ϊ����++���ȴ���ӣ�
		//�����Ҳ������++str����Ϊǰ��++�Ǵ���ȥ����ȷ��ֵ�����ǽ�str��ֵ���ı��ˣ���Щ�����Ҳ�в�ͨ
		//���Եݹ���һ�㲻��++

	}
	else
	{
		return 0;
	}
}
int main() {
	char arr[] = "bit";
	printf("%d", my_strlen(arr));
	return 0;
}