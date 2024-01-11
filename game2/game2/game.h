#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3  //��ά��������
#define COL 3   //��ά��������
#define MINE 2 //�������� 

#define ROWS ROW+2      //ѡ����Ӻ��Ǽ�������Χ�˸����ӵ��׵�������������Ե�ĸ���ʱ��
#define COLS COL+2      //������û���������ӣ�����ؿ��ά����Ĵ�С�����������������Χ��������

void InitBoard(char board[COLS][ROWS],int cols,int rows,char c);//��ʼ����ά���麯��

void PrintBoard(char board[COLS][ROWS], int col, int row);//��ӡ��ά���麯��

void SetMine(char board[COLS][ROWS], char show[COLS][ROWS], int col, int row);//���õ��׺���

int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row);//�Ų���׺���

int get_mine_count(char mine[COLS][ROWS], int m, int n);//ͳ����Χ������������

void SignMine(char show[COLS][ROWS],char mine[COLS][ROWS],int col,int row);//�û���ǵ��׺���

void DeleteMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row);//�û�ɾ����Ǻ���

void ExpendMine(char mine[COLS][ROWS], char show[COLS][ROWS], int m, int n);//���ڵݹ������Χ ����û�׵ĸ�����Χ���ӵ����