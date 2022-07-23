#include <iostream>

void fPrint1(int);	//�Ϲ��Լ�

template <class T>
void fPrint2(T);	//Template Function


int main(void)
{
	//�Ϲ��Լ�
	puts("1. Normal Function");
	int n = 10;
	fPrint1(n);
	puts("2. Template Function - generic");
	fPrint2(n);
	return 0;
}

void fPrint1(int n)
{
	printf("%d\n", n);
}

template <class T>
void fPrint2(T n)
{
	printf("%d\n",n);
}
