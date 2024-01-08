#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//符号的定义(定义几子棋)
#define ROW 3
#define COL 3

//函数的定义
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void PrintBoard(char board[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋
void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋
char IsWin(char board[ROW][COL], int row, int col);//判断游戏结果