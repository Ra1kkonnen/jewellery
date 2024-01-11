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
	printf("    ");                                                //行坐标格式对齐
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
	printf("请输入要排查的坐标(依次输入)\n\n");
	while (1)               //死循环防止输入坐标不合法
	{
		int x, y;
		scanf("%d%d", &x, &y);  //输入第一次要排查的坐标，需要将其设置为没有地雷
		int m, n;                //用于存放随机的行列坐标以放置地雷
		if (x > 0 && x < row + 1 && y>0 && y < col + 1)      //坐标合法
		{
			while (count)
			{
				m = rand() % row + 1;  //行坐标范围1-9
				n = rand() % col + 1;  //列坐标范围1-9

				if (board[m][n] == '0' && (m != x || n != y)) {  //没有放过地雷的地方才能放雷，同时第一个选择的格子不能有雷
					board[m][n] = '1';                       //放置地雷
					count--;                                 //计数器减少
				}
			}
			show[x][y] = get_mine_count(board, x, y) + '0';//show数组中传入第一次排查格子周围雷的数量，因为数组是char类型，所以需要加上'0'转为字符型的量（ASCII码）
			ExpendMine(board, show, x, y);
			PrintBoard(show, col, row);                     //打印show数组
			break;                                           //跳出while(1)死循环
		}
		else
		{
			printf("ERROR:请输入正确的坐标\n\n");               //执行死循环重新输入坐标
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
void ExpendMine(char mine[COLS][ROWS], char show[COLS][ROWS], int m, int n) {
	if (m > 0 && m < ROW + 1 && n>0 && n < COL + 1)
	{
		int count = get_mine_count(mine, m, n);   //不是雷,利用get_mine_count函数统计周围雷的数量
		if (count == 0)
		{
			show[m][n] = '0' + count;

			for (int i = m - 1; i <= m + 1; i++) {

				for (int j = n - 1; j <= n + 1; j++) {//双重循环访问为'0'的格子周围8个格子的信息
					if (show[i][j] == '*')              //递归出口，防止死循环
					{
						ExpendMine(mine, show, i, j);//递归探寻

					}
				}
			}
		}
		else
		{
			show[m][n] = '0' + count;//show数组中传入格子周围雷的数量，因为数组是char类型，所以需要加上'0'转为字符型的量（ASCII码）
		}

	}
}
int FindMine(char mine[COLS][ROWS], char show[COLS][ROWS], int col, int row) {
	PrintBoard(show, col, row);               //打印show数组

	while (1)
	{
		//1.输入排查的坐标
		int m, n;
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
					printf("你踩到地雷了，真菜啊！\n\n");
					printf("上方为地雷分布情况，1是地雷，0是安全格子\n\n");
					return 0;                                    //游戏结束,直接返回0
				}
				else
				{
					ExpendMine(mine, show, m, n);//递归探寻	
		         	PrintBoard(show, col, row);               //打印show数组
					return 1;                                 //成功排查一次，返回1
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