#include <iostream>

void fPrint1(int);	//일반함수 #1

template <class T>
void fPrint2(T);	//Template Function #2, #3

void fPrint2(double);	//function override #3


int main(void)
{
	//일반함수
	puts("1. Normal Function");
	int n = 10;
	fPrint1(n);
	puts("2. Template Function - generic");
	fPrint2(n);
	//if... double type input to func...
	/*double k = 10.0;
	fPrint2(k);*/	//compile warning
	
	//case3.. override
	puts("3. Function Override");
	double k = 10.0;
	fPrint2(k);			//no warning.. 

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

void fPrint2(double n)
{
	printf("%.1f\n", n);
}