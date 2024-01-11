#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3  //二维数组行数
#define COL 3   //二维数组列数
#define MINE 2 //地雷数量 

#define ROWS ROW+2      //选择格子后是检测格子周围八个格子地雷的数量，当检测边缘的格子时，
#define COLS COL+2      //附近会没有其他格子，因此拓宽二维数组的大小，方便后续检测格子周围地雷数量

void InitBoard(char board[COLS][ROWS],int cols,int rows,char c);//初始化二维数组函数

void PrintBoard(char board[COLS][ROWS], int col, int row);//打印二维数组函数

void SetMine(char board[COLS][ROWS], char show[COLS][ROWS], int col, int row);//设置地雷函数

int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row);//排查地雷函数

int get_mine_count(char mine[COLS][ROWS], int m, int n);//统计周围地雷数量函数

void SignMine(char show[COLS][ROWS],char mine[COLS][ROWS],int col,int row);//用户标记地雷函数

void DeleteMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row);//用户删除标记函数

void ExpendMine(char mine[COLS][ROWS], char show[COLS][ROWS], int m, int n);//用于递归访问周围 格子没雷的格子周围格子的情况