#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>


int main() {
	char arr[]  = { "Hello world!!!!!!!!" };
	char arr2[] = { "###################" };
	int low = 0;
	int high = strlen(arr2) - 1;
	while (low <= high) {
		arr2[low] = arr[low];
		arr2[high] = arr[high];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		low++;
		high--;
	}
	return 0;

}