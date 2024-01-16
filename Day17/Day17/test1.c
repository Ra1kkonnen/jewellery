#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//将一句话的单词进行倒置，标点不倒置。比如 I like beijing.，经过函数后变为：beijing.like I

void reverse(char* left,char* right) {  //逆置字符串函数
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
	//三步翻转法
	//1.逆置字符串
	int len = strlen(arr);
	reverse(arr,arr+len-1);

	//2.逆置每个单词
	char* start = arr;
	while (*start)      //当*start没访问到\0时
	{
		char* end = start;   //创立一个尾指针访问某个单词的末尾
		while (*end!=' '&&*end!='\0')   //当访问到空格时或者\0时代表到达一个单词的末尾
		{
			end++;
		}
		reverse(start, end - 1);  //逆置现在访问完的单词
		if (*end==' ')                //访问到的是空格
		{
			start = end + 1;          //准备访问下个单词
		}
		else if(*end=='\0')     //访问到字符串的末尾
		{
			start = end;        //使start=\0,从而退出最外层的while循环
		}
	}

	printf("%s", arr);         //打印字符串

	return 0;
}