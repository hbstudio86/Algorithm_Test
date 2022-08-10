#pragma warning (disable : 4996)
#include <stdio.h>
#define STACK_CAPACITY 8

//Q0.2 pointer Swap
void NumSwap(int*, int*);
//Q0.2 Array Swap
void ArrSwap(int*, int*, int);
//Q0.3 Right_rotate Function
void RightRotate(int* arr, int start, int target);
//Q0.3 Right_rotate N Function
void RightRotateN(int* arr, int start, int target, int k);
//Q0.4 Array Queue
//Q0.4 Array Stack
int PushBack();	//�ְ�
int Pop();		//����


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
	puts("-----------------------------------");
	printf("Right Rotate Number Before\n");
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	for (int i = 0; i < 10; i++) {
		printf("arr1[%.2d]: %.2d\n", i, arr2[i]);
	}
	printf("�ݺ� �μ��� �Է��ϼ���...");
	scanf("%d", &k);
	RightRotateN(arr2, 2, 6, k);
	printf("Right Rotate Number After\n");
	for (int i = 0; i < 10; i++) {
		printf("arr1[%.2d]: %.2d\n", i, arr2[i]);
	}

	puts("--------------Q0.4 Array Queue------------");
	//0 = ť���� ���� ���� ��ٸ� ��� ��ȣ�� ���������
	//0 > ���α׷� ����
	//�Էµ� ť�� ������ "queue empty!"���
	//ť�� �������� ���� �� ���ٸ� "queue full!"���
	int arrQueue[8];
	int istNbr;
	int cnt = 0; //queue ī���ÿ�
	puts("�迭�� ť�Դϴ�.");
	puts("0���� ū���� �Է��ϸ� ��⿭�� ���� �˴ϴ�");
	puts("0�� �Է��ϸ� ���� ������ ���ڸ� ����մϴ�.");
	puts("0���� ���� ���� �Է��ϸ� ���� �˴ϴ�.");
	printf("�Է����ּ��� >> __\b\b");
	while (scanf("%d",&istNbr))
	{
		while (getchar() != '\n')	//�Է� ���� ����
			continue;

		if (istNbr < 0) {	//����
			break;
		}
		else if (istNbr > 0) {	//�Է�
			if (8 == cnt) {		//���� ť�� ���� á�ٸ�...
				puts("queue full!");
			}
			else {
				arrQueue[cnt] = istNbr;	//ť�� �Է� ���ڸ� �ִ´�.
				cnt++;
			}
		}
		else {	//���
			if (0 == cnt) { //ť�� ��� �ִٸ�...
				puts("queue empty!");
			}
			else {
				cnt--;
				printf("[%d]\n", arrQueue[0]);	//������ ť�� ����Ѵ�.
				for (int i = 1; i <= cnt; i++) {
					arrQueue[i - 1] = arrQueue[i];
				}
			}
		}
		printf("�Է����ּ��� >> __\b\b");
	}
	puts("����");
	//head = (head +1) & QUEUE_CAPACITY;
	//tail = (tail +1) & QUEUE_CAPACITY;
	//ť�� ������ �ƴ� �������� �����Ѵٸ� �ݺ����� ���� �ʰ� �� ���� ����� ���� �� �ִ�...
	puts("--------------Q0.4 Array Stack------------");
	int arrStack[STACK_CAPACITY];	//���ÿ� �迭 ����
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
	int tmp = arr[target];	//�Ű����� ������ ���� ����
	for (int i = target; i > start; i--) {
		arr[i] = arr[i - 1];
	}
	arr[start] = tmp;
}
void RightRotateN(int* arr, int start, int target, int k) {
	//�˰����� ����
	// target - start + 1 = total
	// total - k = x
	// y = x * k
	// for i = 0
	//	if (i + 1) <= k then
	//		arr[start + i] = arr[satrt + i] + y / k
	//  else
	//		arr[start + i] = arr[start + i] - y / x
	// 
	int total, re, le;
	total = target - start + 1;
	re = total - k;
	le = re * k;
	for (int i = 0; i < total; i++) {
		if ((i + 1) <= k)
			arr[start + i] += le / k;
		else
			arr[start + i] -= le / re;
	}
}