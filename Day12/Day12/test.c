#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>

//int main() {
	//int a = 10;//a占四个字节
	//int* pa = &a;//拿到的是a的四个字节中第一个字节的地址
	//             //将a的地址存放在pa变量中，pa是一个指针变量
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

	//int* p;//p是一个局部的指针变量，未初始化默认为随机值
	//*p = 20;//非法访问内存

	//int arr[10] = { 0 };//数组大小为10
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 10; i++) {//循环11次
	//	*p = i;
	//	p++;           //第11次越界，产生非法访问
	//}
	

	//return 0;
//}

//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();//局部变量a申请的内存空间已经销毁
//	*p = 10;        //此时指针p再把10存入a的内存空间中，为非法访问内存
//	return 0;
//}

int main() {
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr;
	//int* pend = arr + 9;
	//while (p<=pend)        //指针的关系运算(地址大小在比较)
	//{
	//	printf("%d\n", *p);//依次打印1 2 3 4 5 6 7 8 9 10
	//	p++;             //指针+-整数
	//}

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//printf("%d\n", &arr[9] - &arr[0]);//结果为9
	//指针减去指针得到的是两个指针之间元素的个数

	//#define N_VALUES 5
	//float values[N_VALUES];
	//float* vp;
	//for (vp = &values[N_VALUES]; vp >&values[0];) {//关系运算
	//	*--vp = 0;//数组所有元素置为0
	//}


	/*int arr[10] = { 0 };*/
	//printf("%p\n", arr);//数组名是数组首元素的地址
	//printf("%p\n", &arr[0]);
	////打印结构都为00EFF920
	
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (int i = 0; i < 10; i++) {
	//	printf("%d", *(p + i) = i);
	//	//成功打印数组各元素
	//}

	//int a = 10;
	//int* pa = &a;//pa是指针变量，一级指针

	////ppa是一个二级指针变量
	//int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址

	////a的值为10，地址为0x0012ff40
	////pa的值为0x0012ff40，地址为0x0012ff48
	////pa的值为0x0012ff48，地址为0x0012ff52

	//指针数组 - 数组
	int arr[10];//整型数组 - 存放整型量
	char ch[5];//字符数组 - 存放的是字符
	//指针数组 - 存放指针的数组
	int* parr[5];




	return 0;
}