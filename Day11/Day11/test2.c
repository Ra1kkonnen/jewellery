#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
int main() {
	//int a = 4;
	//float f = 4.5f;
	//a + f;//需要将a的类型转换为float类型去计算
	//return 0;

	//float f = 3.14;
	//int num = f;//会丢失精度

	//int a = 4;
	//int b = 5;
	//int c = a + b * 7;//优先级决定了计算顺序
	//int c = a + b + 7;//优先级不起作用，结合性决定



	////表达式2
	//c + --c;
	////(1)优先级相同先算+，3+2=5
	////(2)优先级相同先算--，2+2=4

	//表达式3
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
}

