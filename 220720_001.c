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
	//0.2 array���� �ִ밪 ã��
	printf("\n");
	puts("Q0.2");
	int iArray[10] = { 1,2,3,4,5,10,9,8,7,6 };	//�迭 ����
	printf("�迭�� ��� ���� 1,2,3,4,5,10,9,8,7,6 �̰� \n���� ���� ū ���� %d�Դϴ�\n", fMaxArray(iArray, 10));
	//0.3 �κ����� �� �ٲٱ�
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
	for (int i = 0; i < n; i++)	//���� ���� Ž�� ���
	{
		if (ar[i] > max)
			max = ar[i];	//ū ���� �ֽ��ϴ�.
	}
	//int max = ar[0]���� �ؼ� �ݺ����� ���� Ƚ���� 1ȸ �ٿ���.
	return max;
}
void fSwap(int* n1, int* n2)
{
	int tmp;
	tmp = *n2;	//�ӽ� ������ n2 ����
	*n2 = *n1;	//n2�� n1���� ����
	*n1 = tmp;	//n1�� tmp���� ����
}