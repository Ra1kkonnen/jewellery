
#include "game.h"                        //引用头文件
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}
void PrintBoard(char board[ROW][COL], int row, int col) {          //打印棋盘
	for (int j = 0; j < col; j++) {
		printf(" ___");
	}
	printf(" \n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("| %c ",board[i][j]);
		}
		printf("|\n");
		if (i < row ) {
			for (int j = 0; j < col; j++) {
				printf("|___");
			}
			printf("|\n");
		}

	}
	printf("\n");
}
void PlayerMove(char board[ROW][COL], int row, int col) {
	while (1) {                            //若输入错误则一直循环
		int x, y;
		printf("请输入坐标：\n");
		scanf("%d %d", &x, &y);
        if (x <= row && x >= 1 && y <= col && y >= 1) {         //判断坐标是否合法
			if (board[x - 1][y - 1] == ' ')                     //玩家输入的坐标需要减1，因为数组从0开始，同时判断坐标是否被占用过
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入：\n");
			}
		}
		else
		{
			printf("坐标不合法，请重新输入：\n");
		}


	}
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	while (1) {
		int x = rand() % row;  //生成合法的行坐标
		int y = rand() % col;  //生成合法的列坐标
		if (board[x][y]==' ') {
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col) {
	int x = 0;                   //计数器判断一行或一列是否遍历结束
	int sum1 = 0;                //判断*的数量
	int sum2 = 0;                //判断#的数量

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {               //判断每行上是否有连续三个相等的符号
			if (board[i][j] == '*') {
				sum1 += 1;
			}
			if (board[i][j] == '#') {
				sum2 +=1;
			}
			x++;
			if(x==row){                                 //一行统计完时
				if (sum1 == row) {                        //一行全是*
					return '*';
				}
				else if (sum2 == row) {
					return '#';                         //一行全是#
				}
				else {                                  //一行中未分胜负则计数器清零统计下一行
					sum1 = 0;                         
					sum2 = 0;
					x = 0;
				}
			}

		}
	}
	for (int j = 0; j < row; j++) {
		for (int i = 0; i < col; i++) {                //行未分出胜负，则开始统计列
			if (board[i][j] == '*') {
				sum1 += 1;
				
			}
			if (board[i][j] == '#') {
				sum2 += 1;
			
			}
			x++;
			if (x == row) {                             //一列统计完时
				if (sum1 == row) {                        //一列全是*
					return '*';
				}
				else if (sum2 == row) {
					return '#';                         //一列连全是#
				}
				else {                                  //一列中未分胜负则计数器清零统计下一列
					sum1 = 0;
					sum2 = 0;
					x = 0;
				}
			}
		}
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {                 //行列都为分出胜负统计主对角线元素
			if (i == j) {
				if (board[i][j] == '*') {
					sum1 += 1;
				}
				else if (board[i][j] == '#') {
					sum2 += 1;
				}
			}
		}
	}
	if (sum1 == row) {
		return '*';                                     //主对角线上元素都为*
	}
	else if (sum2 == row) {
		return '#';                                     //主对角线上元素都为#
	}
	else {
		sum1 = 0;
		sum2 = 0;                                       //计数器清零统计副对角线
	}
	//查看副对角线上的元素，可以先复制一个横向翻转的临时棋盘board1，查看主对角线上的元素
	char board1[ROW][COL];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board1[i][j] = board[i][col-j-1];
		}
	}
	//判断临时棋盘的主对角线元素
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {                 
			if (i == j) {
				if (board1[i][j] == '*') {
					sum1 += 1;
				}
				else if (board1[i][j] == '#') {
					sum2 += 1;
				}
			}
		}
	}
	if (sum1 == row) {
		return '*';                                     //主对角线上元素都为*
	}
	else if (sum2 == row) {
		return '#';                                     //主对角线上元素都为#
	}
	else {
		sum1 = 0;
		sum2 = 0;                                       //计数器清零
	}
	//查看是否为平局，则是以上都判断完后，棋盘是否满了，满了则返回‘D’，不满则继续
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 'C';                     //有地方是空的，游戏还未出结果
			}
		}
	}
	return 'D';                                 //棋盘满了且没分出胜负，则为平局
}
	