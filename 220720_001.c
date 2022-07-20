#include <stdio.h>

int fMax(int, int);
int fMin(int, int);

int main(void)
{
	//1.1 max and min
	int x = 10, y = 9;
	printf("n1 : 10 , n2 : 9\nn1,n2 MAX = %d\nn1,n2 MIN = %d\n", fMax(x, y), fMin(x, y));
	//1.2 array에서 최대값 찾기
	int iArray[10] = { 1,2,3,4,5,10,9,8,7,6 };	//배열 선언
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