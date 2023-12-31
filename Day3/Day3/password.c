#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//模拟代码实现。模拟用户登录场景，并且只能登录三次（只允许输入三次密码。如果密码正确则提示登陆成功，如果三次均错误，则退出程序）
int main() {
	int i;
	for (i = 1; i <= 3; i++) {
		printf("请输入密码\n");
		char pw[20] = {0};
		scanf("%s", pw);
		if (strcmp(pw,"abcd") == 0) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误\n");
		}
	}
	if (i == 4) {
		printf("机会用完，退出程序\n");
	}
	return 0;
}