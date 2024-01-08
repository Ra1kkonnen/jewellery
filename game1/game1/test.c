
#include "game.h"            //引用头文件
void game() {
	char ret;
	char board[ROW][COL];  //二维数组存储游戏数据，ROW、COL为行和列，在头文件game.h中定义
	InitBoard(board,ROW,COL);//初始化棋盘为空格
	PrintBoard(board, ROW, COL);//打印棋盘
	while (1) {
		printf("玩家走\n\n");
		PlayerMove(board, ROW, COL);  //玩家下棋
		Sleep(500);
		PrintBoard(board, ROW, COL);  
		//判断玩家是否赢得游戏
		ret=IsWin(board, ROW, COL);		//返回值为*代表玩家获胜、#代表电脑获胜、D代表平局、C代表未出结果，游戏继续
		if (ret != 'C') {
			break;
		}
		printf("电脑走\n\n");
		ComputerMove(board, ROW, COL);//玩家下棋
		Sleep(1300);
		PrintBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

	}
	if (ret == '*') {
		printf("玩家获胜\n\n");
	}
	else if (ret =='#') {
		printf("电脑获胜\n\n");

	}
	else if (ret == 'D') {
		printf("平局\n\n");
	}
	PrintBoard(board, ROW, COL);//打印游戏结果

}
void menu() {
	printf("***************************\n");
	printf("*****      1.play     *****\n");
	printf("*****      0.exit     *****\n");
	printf("***************************\n");

}
int main() {
	int n;
	srand((unsigned int)time(NULL));//设置随机数种子
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (n);
	return 0;
}