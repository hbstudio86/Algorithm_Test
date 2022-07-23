#include <iostream>

//same func.s
const double* f1(const double ar[], int n);
const double* f2(const double [], int n);
const double* f3(const double *, int n);

int main(void)
{
	using namespace std;
	double av[3] = { 1112.3,1542.6,2227.9 };

	//function selecting..
	const double* (*p1) (const double*, int) = f1;
	auto p2 = f2;	//C++ auto type change...

	cout << "Function Pointer:\n";
	cout << "Address\n";
	cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;	//first address, second value
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

	//pointer array
	const double* (*pa[3]) (const double*, int) = { f1, f2, f3 };
	//const double* (*p4)[3] (const double*, int) = { f1,f2,f3 };	// syntex error
	auto pb = pa;
	cout << "\nArray have int the elemental of function pointer \n";
	cout << "Address \n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
	cout << "\npointer is choice function pointer:\n";
	cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	//함수 포인터를 원소로 가지는 배열을 가리키는 포인터
	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터:\n";
	cout << "주소값\n";
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	return 0;
}

const double* f1(const double ar[], int n);
const double* f2(const double[], int n);
const double* f3(const double*, int n);