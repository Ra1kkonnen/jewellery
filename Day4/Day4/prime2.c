#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<math.h>
int main() {
	int count = 0;
	int i,j;
	for (i = 101; i <= 200; i+=2) {
		for (j = 2; j <=(int)sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == (int)sqrt(i)+1) {
			printf("%d\n", i);
			count++;
		}
		
	}
	printf("%d\n", count);
	return 0;
}
