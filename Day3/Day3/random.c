//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//	printf("*****************************\n");
//	printf("***********1.进行游戏********\n");
//	printf("***********0.退出游戏********\n");
//	printf("*****************************\n");
//
//}
//int main() {
//	int a;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入\n");
//		scanf("%d", &a);
//		switch (a)
//		{
//			
//		case 1:
//		{
//			int c = rand() % 100 + 1;
//			while (1) {
//				printf("请猜数字\n");
//				int b;
//				scanf("%d", &b);
//
//				if (b == c) {
//					printf("你猜对了\n");
//					break;
//				}
//				else if (b > c) {
//					printf("你猜的数字大了\n");
//				}
//				else
//				{
//					printf("你猜的数字小了\n");
//				}
//			}
//		}
//
//			break; 
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//
//	} while (a);
//	return 0;
//}