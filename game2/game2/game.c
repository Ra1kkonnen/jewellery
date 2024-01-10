#include "game.h"
void InitBoard(char board[COLS][ROWS], int cols, int rows, char c) {
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			board[i][j] = c;
		}
	}
}

void PrintBoard(char board[COLS][ROWS], int col, int row) {
	printf("---------------------------------\n\n");
	printf("    ");                                              //�������ʽ����
	for (int i = 1; i < col + 1; i++) {                            //���Ϸ�һ�д�ӡ������0-9
		printf("%d   ", i);
	}
	printf("\n\n");
	for (int i = 1; i <= col; i++) {
		printf("%d   ", i);                                      //ÿ�д�ӡԪ��ǰ��ӡ������
		for (int j = 1; j <= row; j++) {
			printf("%c   ", board[i][j]);
		}
		printf("\n\n");
	}
	printf("---------------------------------\n\n\n");


}
void SetMine(char board[COLS][ROWS], char show[COLS][ROWS], int col, int row) {
	int count = MINE;      //�����������ڷ����趨�ĵ�������
	

		int m, n;                //���ڴ����������������Է��õ���
		
		while (count)
		{
			m = rand() % row + 1;  //�����귶Χ1-9
			n = rand() % col + 1;  //�����귶Χ1-9

			if (board[m][n] == '0') {  //û�зŹ����׵ĵط����ܷ���
					board[m][n] = '1';                       //���õ���
					count--;                                 //����������
				}
			}
				


}

int get_mine_count(char mine[COLS][ROWS], int m, int n) {
	return mine[m - 1][n] +
		mine[m - 1][n - 1] +
		mine[m - 1][n + 1] +
		mine[m][n - 1] +
		mine[m][n + 1] +
		mine[m + 1][n - 1] +
		mine[m + 1][n] +
		mine[m + 1][n + 1] - 8 * '0';//�Ų����긽��8�������׵����������������ַ������飬����ÿ����Ҫ��ȥ'0'(ASCII��)
}





int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row,int win) {
	PrintBoard(show, col, row);               //��ӡshow����
	while (1)
	{
		//1.�����Ų������
		int m = 0;
		int n = 0;
		printf("������Ҫ�Ų������(��������)\n\n");
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] != '*' && show[m][n] != 'P') {             //����Ƿ��������ظ�����
				PrintBoard(show, col, row);                          //��ӡshow����
				printf("ERROR:����ط��Ų���ˣ�����������\n\n");

			}
			else
			{
				//2.������괦�Ƿ�����
				if (mine[m][n] == '1')                        //����
				{
					printf("\n");
					PrintBoard(mine, col, row);               //��ӡ����Ҿ���ĵ���λ��
					printf("��ȵ������ˣ�GG��\n\n");
					printf("�Ϸ�Ϊ���׷ֲ������1�ǵ��ף�0�ǰ�ȫ����\n\n");
					return 0;                                    //��Ϸ����,ֱ�ӷ���0
				}
				else
				{
					ExpendMine(mine, show, m, n,&win);             //�ݹ������Χ����û�׵ĸ�����Χ���ӵ����
					PrintBoard(show, col, row);                    //��ӡshow����
					if (win == ROW * COL - MINE)                            //���а�ȫ���ӱ��Ų���
					{
						printf("��Ϸ�ɹ�!���е㶫���ģ��·�Ϊ���׷ֲ����\n\n\n");     //��Ϸ�ɹ�
						PrintBoard(mine, COL, ROW);                                    //��ӡmine����
						return 0;                                 //��Ϸ����,����0

					}
					else
					{
						return 1;                //��Ϸ����������1
					}

				}
			}


		}
		else
		{
			printf("ERROR:��������ȷ������\n\n");               //ִ����ѭ��������������

		}
	}


}

void SignMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row) {   //��ǵ��׵ĺ���
	PrintBoard(show, col, row);               //��ӡshow����

	int m, n;
	printf("��������Ϊ���׵�����\n\n");
	while (1)
	{
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] == '*' || show[m][n] == 'P') {           //ֻ�ܱ��δ�Ų�ĸ��ӻ����ظ����
				show[m][n] = 'P';                                   //����е��׵ĵط�Ϊ'P'
				PrintBoard(show, col, row);
				break;
			}
			else {
				printf("ERROR:���������Ų����ף���������ȷ����\n\n");

			}

		}
		else
		{
			printf("ERROR:��������ȷ������\n\n");
		}
	}


}


void DeleteMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row) {
	PrintBoard(show, col, row);               //��ӡshow����
	int flag = 0;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {             //�������飬���û���Ѿ�����ǵ����꣬����ֹ����ִ��
			if (show[i][j] == 'P')
			{
				flag = 1;                            //�б���ǵ����꣬�ı�flag��ֵ
				break;
			}
			if (flag == 1) {
				break;                                //�������ѭ��
			}
		}
	}
	if (flag == 0) {
		printf("������ѡ��û���ѱ���ǵ�����\n\n");
		return;
	}
	int m, n;
	printf("������Ҫɾ�����ױ�ǵ�����\n\n");
	while (1)
	{
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] == 'P') {                                //ֻ��ɾ���Ѿ���ǹ�������
				show[m][n] = '*';                                   //������������������Ϊ*
				PrintBoard(show, col, row);
				break;
			}
			else {
				printf("ERROR:������δ����ǣ���������ȷ����\n\n");

			}

		}
		else
		{
			printf("ERROR:��������ȷ������\n\n");
		}
	}
}