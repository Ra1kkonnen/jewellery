
#include "game.h"            //����ͷ�ļ�
void game() {
	char ret;
	char board[ROW][COL];  //��ά����洢��Ϸ���ݣ�ROW��COLΪ�к��У���ͷ�ļ�game.h�ж���
	InitBoard(board,ROW,COL);//��ʼ������Ϊ�ո�
	PrintBoard(board, ROW, COL);//��ӡ����
	while (1) {
		printf("�����\n\n");
		PlayerMove(board, ROW, COL);  //�������
		Sleep(500);
		PrintBoard(board, ROW, COL);  
		//�ж�����Ƿ�Ӯ����Ϸ
		ret=IsWin(board, ROW, COL);		//����ֵΪ*������һ�ʤ��#������Ի�ʤ��D����ƽ�֡�C����δ���������Ϸ����
		if (ret != 'C') {
			break;
		}
		printf("������\n\n");
		ComputerMove(board, ROW, COL);//�������
		Sleep(1300);
		PrintBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

	}
	if (ret == '*') {
		printf("��һ�ʤ\n\n");
	}
	else if (ret =='#') {
		printf("���Ի�ʤ\n\n");

	}
	else if (ret == 'D') {
		printf("ƽ��\n\n");
	}
	PrintBoard(board, ROW, COL);//��ӡ��Ϸ���

}
void menu() {
	printf("***************************\n");
	printf("*****      1.play     *****\n");
	printf("*****      0.exit     *****\n");
	printf("***************************\n");

}
int main() {
	int n;
	srand((unsigned int)time(NULL));//�������������
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (n);
	return 0;
}