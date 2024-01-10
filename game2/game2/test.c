#include "game.h"
void menu(){                      //��ӡ�˵�����
	printf("*******************************\n");
	printf("********    1.play     ********\n");
	printf("********    0.exit     ********\n");
	printf("*******************************\n");

}
void menu2() {                    //��ӡ�û�ѡ������Ĳ˵�����
	printf("���������ѡ��(1-3)\n\n");
	printf("1-----�Ų����\n\n");
	printf("2-----��ǵ���\n\n");
	printf("3-----ȡ�����\n\n");
	


}

void game() {                    //��Ϸִ�к���
	char mine[ROWS][COLS];       //����һ����ŵ�����Ϣ�Ķ�ά���飨��1��������ף���0���������ף�����char������Ϊ����������ͳһ���ͷ������������
	char show[ROWS][COLS];       //����һ��չʾ������Χ���������Ķ�ά����������Ϸִ��(����char��������ΪҪ��ʾ*�ַ��������δ���Ų�)
	//1.��ʼ��+��ӡ��ά����
	InitBoard(mine, ROWS, COLS, '0');    //��ʼ��������Ϣ�Ķ�ά���飬һ��ʼȫΪ����״̬
	InitBoard(show, ROWS, COLS, '*');    //��ʼ��չʾ���������Ķ�ά���飬һ��ʼȫΪ*
	//PrintBoard(mine, ROW, COL);          //��ӡ������Ϣ�Ķ�ά����
	PrintBoard(show, ROW, COL);          //��ӡ���������Ķ�ά����
	
	//2.���õ���
	
    SetMine(mine,show, ROW, COL);             //���õ���
	//PrintBoard(mine, ROW, COL);
	//PrintBoard(show, ROW, COL);
	
	//3.�Ų����
	//FindMine(mine, show, ROW, COL);   //�Ų����
	int choice;
	while (1)
	{
		int win = 0;                        //�������������ж���Ϸ�Ƿ�ɹ�
		int ret = -1;                    //���ڽ��ղ��Һ����ķ���ֵ,����ֵ������0��1����Ϊ0������Ϸʧ�ܣ�1�����Ų�ɹ�
		menu2();                        //��ӡ�û�ѡ��˵�
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			ret=FindMine(mine, show, ROW, COL);        //�Ų����

			break;
		case 2:
			SignMine(show, mine, ROW, COL);        //��ǵ���
			break;
		case 3:
			DeleteMine(show,mine,ROW,COL);         //ȡ�����
			break;
		default:
			printf("ERROR:������1-3\n");
			PrintBoard(show, COL, ROW);               //��ӡshow����

			break;
		}
		if (ret == 0) {
			break;                                  //�ٴ�����whileѭ��
		}
		else if(ret==1){                             //�ɹ��Ų�һ��
			for (int i = 1; i <= ROW; i++) {
				for (int j = 1; j <= COL; j++) {      //����show����
					if (show[i][j] == '*' || show[i][j] == 'P') {            //ͳ��show������*��P������
						win += 1;
					}
				}
		}
			if (win==MINE)                                             //���show������*��P���������õ�������������Ϸ�ɹ�
			{
				printf("��Ϸ�ɹ������е㶫���ģ�\n\n");    
				PrintBoard(show, COL, ROW);               //��ӡshow����
				break;                                    //�ٴ�����whileѭ��
			}
		}


	}


}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));               //�����������
	do                                             //��Ϸִ��ѭ����
	{
		menu();                                    //��ӡ�˵�
		printf("��ѡ��>\n\n");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ�ɹ���\n");
			break;
		case 1:
			game();//ִ����Ϸ
			break;
		default:
			printf("������0��1\n\n");
			break;
		}

	} while (input);             //��input=0ʱ�˳�ѭ��
	return 0;
}