#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int n;
//	scanf("%d", &n);
//	seqsearch(n,arr,10);
//	
//	return 0;
//}
//int seqsearch(int x, int v[], int n) {
//	for (int i = 0; i < n; i++) {
//		if (v[i] == x) {
//			printf("在数组第%d个位置\n", i+1);
//			return 0;
//		}
//	
//	}
//	printf("error\n");
//	return 0;
//}
//int main() {
//	int arr[10] = { 0,13,25,39,47,57,68,76,88,96 };
//	int n;
//	scanf("%d", &n);
//	binsearch(n, arr, 10);
//	return 0;
//}
//int binsearch(int x, int v[], int n) {
//	int low = 0;
//	int high = n - 1;
//	while (low <= high) {
//		int mid = (low + high) / 2;
//		if (v[mid]==x)
//		{
//			printf("在第%d个位置", mid + 1);
//			return 0;
//		}
//		else if(v[mid]<x)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	printf("error");
//	return 0;
//}