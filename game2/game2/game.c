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
	printf("    ");                                              //行坐标格式对齐
	for (int i = 1; i < col + 1; i++) {                            //最上方一行打印列坐标0-9
		printf("%d   ", i);
	}
	printf("\n\n");
	for (int i = 1; i <= col; i++) {
		printf("%d   ", i);                                      //每行打印元素前打印行坐标
		for (int j = 1; j <= row; j++) {
			printf("%c   ", board[i][j]);
		}
		printf("\n\n");
	}
	printf("---------------------------------\n\n\n");


}
void SetMine(char board[COLS][ROWS], char show[COLS][ROWS], int col, int row) {
	int count = MINE;      //计数器，用于放置设定的地雷数量
	

		int m, n;                //用于存放随机的行列坐标以放置地雷
		
		while (count)
		{
			m = rand() % row + 1;  //行坐标范围1-9
			n = rand() % col + 1;  //列坐标范围1-9

			if (board[m][n] == '0') {  //没有放过地雷的地方才能放雷
					board[m][n] = '1';                       //放置地雷
					count--;                                 //计数器减少
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
		mine[m + 1][n + 1] - 8 * '0';//排查坐标附近8个格子雷的数量，但数组是字符型数组，所以每个还要减去'0'(ASCII码)
}





int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row,int win) {
	PrintBoard(show, col, row);               //打印show数组
	while (1)
	{
		//1.输入排查的坐标
		int m = 0;
		int n = 0;
		printf("请输入要排查的坐标(依次输入)\n\n");
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] != '*' && show[m][n] != 'P') {             //检查是否输入了重复坐标
				PrintBoard(show, col, row);                          //打印show数组
				printf("ERROR:这个地方排查过了，请重新输入\n\n");

			}
			else
			{
				//2.检查坐标处是否是雷
				if (mine[m][n] == '1')                        //有雷
				{
					printf("\n");
					PrintBoard(mine, col, row);               //打印给玩家具体的地雷位置
					printf("你踩到地雷了，GG！\n\n");
					printf("上方为地雷分布情况，1是地雷，0是安全格子\n\n");
					return 0;                                    //游戏结束,直接返回0
				}
				else
				{
					ExpendMine(mine, show, m, n,&win);             //递归访问周围格子没雷的格子周围格子的情况
					PrintBoard(show, col, row);                    //打印show数组
					if (win == ROW * COL - MINE)                            //所有安全格子被排查完
					{
						printf("游戏成功!你有点东西的！下方为地雷分布情况\n\n\n");     //游戏成功
						PrintBoard(mine, COL, ROW);                                    //打印mine数组
						return 0;                                 //游戏结束,返回0

					}
					else
					{
						return 1;                //游戏继续，返回1
					}

				}
			}


		}
		else
		{
			printf("ERROR:请输入正确的坐标\n\n");               //执行死循环重新输入坐标

		}
	}


}

void SignMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row) {   //标记地雷的函数
	PrintBoard(show, col, row);               //打印show数组

	int m, n;
	printf("请输入标记为地雷的坐标\n\n");
	while (1)
	{
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] == '*' || show[m][n] == 'P') {           //只能标记未排查的格子或者重复标记
				show[m][n] = 'P';                                   //标记有地雷的地方为'P'
				PrintBoard(show, col, row);
				break;
			}
			else {
				printf("ERROR:此坐标已排查无雷，请输入正确坐标\n\n");

			}

		}
		else
		{
			printf("ERROR:请输入正确的坐标\n\n");
		}
	}


}


void DeleteMine(char show[COLS][ROWS], char mine[COLS][ROWS], int col, int row) {
	PrintBoard(show, col, row);               //打印show数组
	int flag = 0;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {             //遍历数组，如果没有已经被标记的坐标，则中止函数执行
			if (show[i][j] == 'P')
			{
				flag = 1;                            //有被标记的坐标，改变flag的值
				break;
			}
			if (flag == 1) {
				break;                                //跳出外层循环
			}
		}
	}
	if (flag == 0) {
		printf("请重新选择，没有已被标记的坐标\n\n");
		return;
	}
	int m, n;
	printf("请输入要删除地雷标记的坐标\n\n");
	while (1)
	{
		scanf("%d%d", &m, &n);
		if (m > 0 && m < row + 1 && n>0 && n < col + 1)
		{
			if (show[m][n] == 'P') {                                //只能删除已经标记过的坐标
				show[m][n] = '*';                                   //将标记完的坐标重新置为*
				PrintBoard(show, col, row);
				break;
			}
			else {
				printf("ERROR:此坐标未被标记，请输入正确坐标\n\n");

			}

		}
		else
		{
			printf("ERROR:请输入正确的坐标\n\n");
		}
	}
}