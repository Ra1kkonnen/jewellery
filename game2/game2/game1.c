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
	printf("    ");                                                //�������ʽ����
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
	printf("������Ҫ�Ų������(��������)\n\n");
	while (1)               //��ѭ����ֹ�������겻�Ϸ�
	{
		int x, y;
		scanf("%d%d", &x, &y);  //�����һ��Ҫ�Ų�����꣬��Ҫ��������Ϊû�е���
		int m, n;                //���ڴ����������������Է��õ���
		if (x > 0 && x < row + 1 && y>0 && y < col + 1)      //����Ϸ�
		{
			while (count)
			{
				m = rand() % row + 1;  //�����귶Χ1-9
				n = rand() % col + 1;  //�����귶Χ1-9

				if (board[m][n] == '0' && (m != x || n != y)) {  //û�зŹ����׵ĵط����ܷ��ף�ͬʱ��һ��ѡ��ĸ��Ӳ�������
					board[m][n] = '1';                       //���õ���
					count--;                                 //����������
				}
			}
			show[x][y] = get_mine_count(board, x, y) + '0';//show�����д����һ���Ų������Χ�׵���������Ϊ������char���ͣ�������Ҫ����'0'תΪ�ַ��͵�����ASCII�룩
			ExpendMine(board, show, x, y);
			PrintBoard(show, col, row);                     //��ӡshow����
			break;                                           //����while(1)��ѭ��
		}
		else
		{
			printf("ERROR:��������ȷ������\n\n");               //ִ����ѭ��������������
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
void ExpendMine(char mine[COLS][ROWS], char show[COLS][ROWS], int m, int n) {
	if (m > 0 && m < ROW + 1 && n>0 && n < COL + 1)
	{
		int count = get_mine_count(mine, m, n);   //������,����get_mine_count����ͳ����Χ�׵�����
		if (count == 0)
		{
			show[m][n] = '0' + count;

			for (int i = m - 1; i <= m + 1; i++) {

				for (int j = n - 1; j <= n + 1; j++) {//˫��ѭ������Ϊ'0'�ĸ�����Χ8�����ӵ���Ϣ
					if (show[i][j] == '*')              //�ݹ���ڣ���ֹ��ѭ��
					{
						ExpendMine(mine, show, i, j);//�ݹ�̽Ѱ

					}
				}
			}
		}
		else
		{
			show[m][n] = '0' + count;//show�����д��������Χ�׵���������Ϊ������char���ͣ�������Ҫ����'0'תΪ�ַ��͵�����ASCII�룩
		}

	}
}
int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row) {
	PrintBoard(show, col, row);               //��ӡshow����

	while (1)
	{
		//1.�����Ų������
		int m, n;
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
					printf("��ȵ������ˣ���˰���\n\n");
					printf("�Ϸ�Ϊ���׷ֲ������1�ǵ��ף�0�ǰ�ȫ����\n\n");
					return 0;                                    //��Ϸ����,ֱ�ӷ���0
				}
				else
				{
					ExpendMine(mine, show, m, n);//�ݹ�̽Ѱ	
		         	PrintBoard(show, col, row);               //��ӡshow����
					return 1;                                 //�ɹ��Ų�һ�Σ�����1
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