#include <iostream>

void fPrint1(int);	//일반함수

template <class T>
void fPrint2(T);	//Template Function


int main(void)
{
	//일반함수
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
