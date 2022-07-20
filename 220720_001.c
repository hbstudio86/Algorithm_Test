#include <stdio.h>

int fMax(int, int);
int fMin(int, int);
int fMaxArray(const int*, int);
void fSwap(int*, int*);

int main(void)
{
	//0.1 max and min
	puts("Q0.1");
	int x = 10, y = 9;
	printf("n1 : 10 , n2 : 9\nn1,n2 MAX = %d\nn1,n2 MIN = %d\n", fMax(x, y), fMin(x, y));
	//0.2 array에서 최대값 찾기
	printf("\n");
	puts("Q0.2");
	int iArray[10] = { 1,2,3,4,5,10,9,8,7,6 };	//배열 선언
	printf("배열에 담긴 수는 1,2,3,4,5,10,9,8,7,6 이고 \n이중 가장 큰 수는 %d입니다\n", fMaxArray(iArray, 10));
	//0.3 두변수의 값 바꾸기
	printf("\n");
	puts("Q0.3");
	int swapX = 10, swapY = 30;
	printf("Before Swap\nswapX : %d\nswapY : %d\n", swapX, swapY);
	fSwap(&swapX, &swapY);
	printf("After Swap\nswapX : %d\nswapY : %d\n", swapX, swapY);

	return 0;
}

int fMax(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	return n2;
}
int fMin(int n1, int n2)
{
	if (!(n1 < n2))
		return n2;
	return n1;
}
int fMaxArray(const int* ar, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)	//기존 선형 탐색 방식
	{
		if (ar[i] > max)
			max = ar[i];	//큰 수를 넣습니다.
	}
	//int max = ar[0]으로 해서 반복문의 가동 횟수를 1회 줄였다.
	return max;
}
void fSwap(int* n1, int* n2)
{
	int tmp;
	tmp = *n2;	//임시 변수에 n2 저장
	*n2 = *n1;	//n2에 n1값을 저장
	*n1 = tmp;	//n1에 tmp값을 저장
}