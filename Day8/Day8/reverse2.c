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
	char tmp = brr[0];                     //tmp保留数组第一个元素
	int len = my_strlen(brr);
	brr[0] = brr[len - 1];                 //将最后一个元素放到第一个元素
	brr[len - 1] = '\0';                   //将最后一个元素变成/0，因为如果将第一个元素放入末尾，下次递归时还会将它进行交换导致错误
	if (my_strlen(brr+1)>=2) {             //递归出口：如果剩下还未交换的元素大于两个才继续交换，否则退出
		reverse_string(brr + 1);           //递归交换以下一个元素为首的字符串
	}
	brr[len - 1] = tmp;                    //结束后将tmp的值放入末尾
}
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}