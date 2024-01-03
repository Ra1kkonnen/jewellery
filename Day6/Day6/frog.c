//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include<stdlib.h>
//int count = 0;                  //计数器
//int frog(int n) {
//	if (n==3)
//	{
//		count++;                //统计递归中frog（3）被重复计算了多少次
//	}
//	if (n == 1) {
//		return 1;
//	}
//	else if (n == 2) {
//		return 2;
//	}
//	else
//	{
//		return frog(n - 1) + frog(n - 2);
//	}
//}
//int main() {
//	printf("请输入台阶的数量：");
//	int x;
//	scanf("%d", &x);
//	printf("%d\n", frog(x));
//	printf("count = %d", count);        //输出递归中frog（3）被重复计算了多少次的结果
//	return 0;
//}