#include "game.h"
void menu(){                      //打印菜单函数
	printf("*******************************\n");
	printf("********    1.play     ********\n");
	printf("********    0.exit     ********\n");
	printf("*******************************\n");

}
void menu2() {                    //打印用户选择操作的菜单函数
	printf("请输入操作选择(1-3)\n\n");
	printf("1-----排查地雷\n\n");
	printf("2-----标记地雷\n\n");
	printf("3-----取消标记\n\n");
	


}

void game() {                    //游戏执行函数
	char mine[ROWS][COLS];       //定义一个存放地雷信息的二维数组（‘1’代表地雷，‘0’代表无雷，采用char类型是为了两个数组统一类型方便后续操作）
	char show[ROWS][COLS];       //定义一个展示格子周围地雷数量的二维数组用于游戏执行(采用char类型是因为要显示*字符代表格子未被排查)
	//1.初始化+打印二维数组
	InitBoard(mine, ROWS, COLS, '0');    //初始化地雷信息的二维数组，一开始全为无雷状态
	InitBoard(show, ROWS, COLS, '*');    //初始化展示地雷数量的二维数组，一开始全为*
	//PrintBoard(mine, ROW, COL);          //打印地雷信息的二维数组
	PrintBoard(show, ROW, COL);          //打印地雷数量的二维数组
	
	//2.设置地雷
	
    SetMine(mine,show, ROW, COL);             //设置地雷
	//PrintBoard(mine, ROW, COL);
	//PrintBoard(show, ROW, COL);
	
	//3.排查地雷
	//FindMine(mine, show, ROW, COL);   //排查地雷
	int choice;
	while (1)
	{
		int win = 0;                        //计数器，用于判断游戏是否成功
		int ret = -1;                    //用于接收查找函数的返回值,赋初值不能是0或1，因为0代表游戏失败，1代表排查成功
		menu2();                        //打印用户选择菜单
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			ret=FindMine(mine, show, ROW, COL);        //排查地雷

			break;
		case 2:
			SignMine(show, mine, ROW, COL);        //标记地雷
			break;
		case 3:
			DeleteMine(show,mine,ROW,COL);         //取消标记
			break;
		default:
			printf("ERROR:请输入1-3\n");
			PrintBoard(show, COL, ROW);               //打印show数组

			break;
		}
		if (ret == 0) {
			break;                                  //再次跳出while循环
		}
		else if(ret==1){                             //成功排查一次
			for (int i = 1; i <= ROW; i++) {
				for (int j = 1; j <= COL; j++) {      //遍历show数组
					if (show[i][j] == '*' || show[i][j] == 'P') {            //统计show数组中*和P的数量
						win += 1;
					}
				}
		}
			if (win==MINE)                                             //如果show数组中*和P的数量正好等于雷数，则游戏成功
			{
				printf("游戏成功，你有点东西的！\n\n");    
				PrintBoard(show, COL, ROW);               //打印show数组
				break;                                    //再次跳出while循环
			}
		}


	}


}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));               //随机数生成器
	do                                             //游戏执行循环体
	{
		menu();                                    //打印菜单
		printf("请选择>\n\n");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 0:
			printf("退出游戏成功！\n");
			break;
		case 1:
			game();//执行游戏
			break;
		default:
			printf("请输入0或1\n\n");
			break;
		}

	} while (input);             //当input=0时退出循环
	return 0;
}