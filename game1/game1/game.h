#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
//���ŵĶ���(���弸����)
#define ROW 3
#define COL 3

//�����Ķ���
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void PrintBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//��������
char IsWin(char board[ROW][COL], int row, int col);//�ж���Ϸ���