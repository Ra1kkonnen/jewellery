#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include <stdbool.h> 
void bubble(int brr[], int len) {
	for (int i = 0; i < len - 1; i++) { //一共进行几趟冒泡排序
		bool flag = false;              //用于判断本趟冒泡排序是否发生了元素的交换
		for (int j = len - 1; j > i; j--) {//每趟冒泡排序要进行几次交换
			if (brr[j] > brr[j - 1]) {
				int tmp = brr[j - 1];
				brr[j - 1] = brr[j];
				brr[j] = tmp;             //交换元素
				flag = true;              //本趟排序发生了元素的交换
			}
			if (flag == false) {
				return;
			}
		}
	}
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}