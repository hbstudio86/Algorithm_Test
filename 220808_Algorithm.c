#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
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
//int PushBack();	//넣고
//int Pop();		//빼고
//Q0.5 Linked List
struct NODE {
	int waiting;	//대기 번호
	struct NODE* next;	//다음 노드
};
struct NODE* PushBack(struct NODE*);	//넣고
void Pop();			//빼고

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
	printf("반복 인수를 입력하세요...");
	scanf("%d", &k);
	RightRotateN(arr2, 2, 6, k);
	printf("Right Rotate Number After\n");
	for (int i = 0; i < 10; i++) {
		printf("arr1[%.2d]: %.2d\n", i, arr2[i]);
	}

	puts("--------------Q0.4 Array Queue------------");
	//0 = 큐에서 가장 오래 기다린 대기 번호를 꺼내어출력
	//0 > 프로그램 종료
	//입력된 큐가 없으면 "queue empty!"출력
	//큐가 가득차서 넣을 수 없다면 "queue full!"출력
	int arrQueue[8];
	int istNbr;
	int cnt = 0; //queue 카운팅용
	puts("배열형 큐입니다.");
	puts("0보다 큰수를 입력하면 대기열에 저장 됩니다");
	puts("0을 입력하면 가장 오래된 숫자를 출력합니다.");
	puts("0보다 작은 수를 입력하면 종료 됩니다.");
	printf("입력해주세요 >> __\b\b");
	while (scanf("%d",&istNbr))
	{
		while (getchar() != '\n')	//입력 버퍼 비우기
			continue;

		if (istNbr < 0) {	//종료
			break;
		}
		else if (istNbr > 0) {	//입력
			if (8 == cnt) {		//만약 큐가 가득 찼다면...
				puts("queue full!");
			}
			else {
				arrQueue[cnt] = istNbr;	//큐에 입력 숫자를 넣는다.
				cnt++;
			}
		}
		else {	//출력
			if (0 == cnt) { //큐가 비어 있다면...
				puts("queue empty!");
			}
			else {
				cnt--;
				printf("[%d]\n", arrQueue[0]);	//오래된 큐를 출력한다.
				for (int i = 1; i <= cnt; i++) {
					arrQueue[i - 1] = arrQueue[i];
				}
			}
		}
		printf("입력해주세요 >> __\b\b");
	}
	puts("종료");
	//head = (head +1) & QUEUE_CAPACITY;
	//tail = (tail +1) & QUEUE_CAPACITY;
	//큐를 선형이 아닌 원형으로 생각한다면 반복문을 쓰지 않고 더 빠른 결과를 얻을 수 있다...
	//puts("--------------Q0.4 Array Stack------------");
	//int arrStack[STACK_CAPACITY];	//스택용 배열 선언
	puts("--------------Q0.5 Linked List------------");
	
	int i_Num;
	struct NODE* Head;	//리스트 선두 주소 저장
	struct NODE* Tail;	//리스트 후미 주소 저장, 초기에는 Head값을 넣어 줘야 하나?
	Head = (struct NODE*)malloc(sizeof(struct NODE));	//NODE 구조체 메모리 할당
	//Head->waiting = 1;
	Head->next = NULL;
	//
	//printf("%d\n%p", Head->waiting, Head->next);

	//free(Head);
	return 0;
	puts("연결형 리스트 큐입니다.");
	puts("0보다 큰수를 입력하면 대기열에 저장 됩니다");
	puts("0을 입력하면 가장 오래된 숫자를 출력합니다.");
	puts("0보다 작은 수를 입력하면 종료 됩니다.");
	printf("입력해주세요 >> __\b\b");
	while (scanf("%d",&i_Num))
	{
		while (getchar() != '\n')
			continue;

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
struct NODE* PushBack(struct NODE* input) {	//꼬리가 입력 되어야 한다.
	input->next = (struct NODE*)malloc(sizeof(struct NODE));	//꼬리(현재)의 다음 리스트 주소 할당
	//대기 번호 입력 값을 넣고
	input->next->next = NULL;	//다음 꼬리의 next를 NULL로 처리
	return input->next;			//현재 위치를 변경 하기 위해 주소를 리턴
}	//넣고
void Pop() {

}			//빼고