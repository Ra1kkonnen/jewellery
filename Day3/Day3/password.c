#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ģ�����ʵ�֡�ģ���û���¼����������ֻ�ܵ�¼���Σ�ֻ���������������롣���������ȷ����ʾ��½�ɹ���������ξ��������˳�����
int main() {
	int i;
	for (i = 1; i <= 3; i++) {
		printf("����������\n");
		char pw[20] = {0};
		scanf("%s", pw);
		if (strcmp(pw,"abcd") == 0) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
		}
	}
	if (i == 4) {
		printf("�������꣬�˳�����\n");
	}
	return 0;
}