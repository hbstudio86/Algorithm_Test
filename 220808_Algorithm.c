#include <stdio.h>

//Q0.2 pointer Swap
void NumSwap(int*, int*);
//Q0.2 Array Swap
void ArrSwap(int*, int*, int);
//Q0.3 Right_rotate Function
void RightRotate(int* arr, int start, int target);
//Q0.3 Right_rotate N Function
void RightRotateN(int* arr, int start, int target, int k);


int main(void) {
	int a = 10, b = 20;
	printf("Before Numbers \n");
	printf("a = %0.5d \tb = %0.5d\n", a, b);
	NumSwap(&a, &b);
	printf("a = %1.1d \tb = %1.2d\n", a, b);
	puts("----------------------------------");
	int aa[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int ab[10] = { 11,21,31,41,51,61,71,81,91,101 };
	printf("before Arrays\n");
	for (int i = 0; i < 10; i++) {
		printf("aa[%.2d] : %.3d / ab[%.2d] : %.3d\n", i,aa[i],i, ab[i]);
	}
	ArrSwap(aa, ab, 10);
	printf("after Arrays\n");
	for (int i = 0; i < 10; i++) {
		printf("aa[%.2d] : %.3d / ab[%.2d] : %.3d\n",i, aa[i],i, ab[i]);
	}
	puts("----------------------------------");
	int arr1[8] = { 1,2,3,4,5,6,7,8 };
	printf("Right Rotate Before\n");
	for (int i = 0; i < 8; i++) {
		printf("arr1[%.2d]: %.2d\n", i, arr1[i]);
	}
	RightRotate(arr1, 2, 6);
	printf("Right Rotate After\n");
	for (int i = 0; i < 8; i++) {
		printf("arr1[%.2d]: %.2d\n", i, arr1[i]);
	}
	return 0;
}

void NumSwap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void ArrSwap(int* aa, int* ab, int n) {
	int tmp;
	for (int i = 0; i < n; i++) {
		tmp = aa[i];
		aa[i] = ab[i];
		ab[i] = tmp;
	}
}
void RightRotate(int* arr, int start, int target) {
	int tmp = arr[target];	//옮겨지는 원소의 값을 저장
	for (int i = target; i > start; i--) {
		arr[i] = arr[i - 1];
	}
	arr[start] = tmp;
}
void RightRotateN(int* arr, int start, int target, int k) {
	//알고리즘 구현
	// target - start + 1 = total
	// total - k = x
	// y = x * k
	// for i = 0
	//	if (i + 1) <= k then
	//		arr[start + i] = arr[satrt + i] + y / k
	//  else
	//		arr[start + i] = arr[start + i] - y / x
	// 
}