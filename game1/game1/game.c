
#include "game.h"                        //����ͷ�ļ�
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}
void PrintBoard(char board[ROW][COL], int row, int col) {          //��ӡ����
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
	while (1) {                            //�����������һֱѭ��
		int x, y;
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
        if (x <= row && x >= 1 && y <= col && y >= 1) {         //�ж������Ƿ�Ϸ�
			if (board[x - 1][y - 1] == ' ')                     //��������������Ҫ��1����Ϊ�����0��ʼ��ͬʱ�ж������Ƿ�ռ�ù�
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã����������룺\n");
			}
		}
		else
		{
			printf("���겻�Ϸ������������룺\n");
		}


	}
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	while (1) {
		int x = rand() % row;  //���ɺϷ���������
		int y = rand() % col;  //���ɺϷ���������
		if (board[x][y]==' ') {
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col) {
	int x = 0;                   //�������ж�һ�л�һ���Ƿ��������
	int sum1 = 0;                //�ж�*������
	int sum2 = 0;                //�ж�#������

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {               //�ж�ÿ�����Ƿ�������������ȵķ���
			if (board[i][j] == '*') {
				sum1 += 1;
			}
			if (board[i][j] == '#') {
				sum2 +=1;
			}
			x++;
			if(x==row){                                 //һ��ͳ����ʱ
				if (sum1 == row) {                        //һ��ȫ��*
					return '*';
				}
				else if (sum2 == row) {
					return '#';                         //һ��ȫ��#
				}
				else {                                  //һ����δ��ʤ�������������ͳ����һ��
					sum1 = 0;                         
					sum2 = 0;
					x = 0;
				}
			}

		}
	}
	for (int j = 0; j < row; j++) {
		for (int i = 0; i < col; i++) {                //��δ�ֳ�ʤ������ʼͳ����
			if (board[i][j] == '*') {
				sum1 += 1;
				
			}
			if (board[i][j] == '#') {
				sum2 += 1;
			
			}
			x++;
			if (x == row) {                             //һ��ͳ����ʱ
				if (sum1 == row) {                        //һ��ȫ��*
					return '*';
				}
				else if (sum2 == row) {
					return '#';                         //һ����ȫ��#
				}
				else {                                  //һ����δ��ʤ�������������ͳ����һ��
					sum1 = 0;
					sum2 = 0;
					x = 0;
				}
			}
		}
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {                 //���ж�Ϊ�ֳ�ʤ��ͳ�����Խ���Ԫ��
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
		return '*';                                     //���Խ�����Ԫ�ض�Ϊ*
	}
	else if (sum2 == row) {
		return '#';                                     //���Խ�����Ԫ�ض�Ϊ#
	}
	else {
		sum1 = 0;
		sum2 = 0;                                       //����������ͳ�Ƹ��Խ���
	}
	//�鿴���Խ����ϵ�Ԫ�أ������ȸ���һ������ת����ʱ����board1���鿴���Խ����ϵ�Ԫ��
	char board1[ROW][COL];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board1[i][j] = board[i][col-j-1];
		}
	}
	//�ж���ʱ���̵����Խ���Ԫ��
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
		return '*';                                     //���Խ�����Ԫ�ض�Ϊ*
	}
	else if (sum2 == row) {
		return '#';                                     //���Խ�����Ԫ�ض�Ϊ#
	}
	else {
		sum1 = 0;
		sum2 = 0;                                       //����������
	}
	//�鿴�Ƿ�Ϊƽ�֣��������϶��ж���������Ƿ����ˣ������򷵻ء�D�������������
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 'C';                     //�еط��ǿյģ���Ϸ��δ�����
			}
		}
	}
	return 'D';                                 //����������û�ֳ�ʤ������Ϊƽ��
}
	