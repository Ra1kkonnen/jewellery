#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�������������Ϊ��beijing.like I

void reverse(char* left,char* right) {  //�����ַ�������
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

}
int main() {
	char arr[100] = { 0 };
	gets(arr);
	//������ת��
	//1.�����ַ���
	int len = strlen(arr);
	reverse(arr,arr+len-1);

	//2.����ÿ������
	char* start = arr;
	while (*start)      //��*startû���ʵ�\0ʱ
	{
		char* end = start;   //����һ��βָ�����ĳ�����ʵ�ĩβ
		while (*end!=' '&&*end!='\0')   //�����ʵ��ո�ʱ����\0ʱ������һ�����ʵ�ĩβ
		{
			end++;
		}
		reverse(start, end - 1);  //�������ڷ�����ĵ���
		if (*end==' ')                //���ʵ����ǿո�
		{
			start = end + 1;          //׼�������¸�����
		}
		else if(*end=='\0')     //���ʵ��ַ�����ĩβ
		{
			start = end;        //ʹstart=\0,�Ӷ��˳�������whileѭ��
		}
	}

	printf("%s", arr);         //��ӡ�ַ���

	return 0;
}