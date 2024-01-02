//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include<stdlib.h>
//int binary_search(int a,int brr[],int x) {
//	int low = 0;
//	int high = x- 1;
//	int mid;
//	while (low<=high)
//	{
//		mid = (low + high) / 2;
//		if (brr[mid] == a)
//		{
//			return mid;
//		}
//		else if(brr[mid]>a) {
//			high = mid - 1;
//		}
//		else
//		{
//			low = mid + 1;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &key);
//	int ret = binary_search(key,arr,sz);
//	if (-1 == ret) {
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//
//}