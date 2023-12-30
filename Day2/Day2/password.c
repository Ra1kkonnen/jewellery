#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	printf("ÇëÊäÈëÃÜÂë£º");
	char password[20] = {0};
	scanf("%s", password);
	int temp;
	while ((temp = getchar()) != '\n') {
		;
	}
	int ch = getchar();
	if ('Y' == ch) {
		printf("ÕıÈ·");
	}
	else {
		printf("´íÎó");
	}
	return 0;

}