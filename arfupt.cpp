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
	//이것은 함수포인터 이다.
	// p1 = f2 이런식으로 사용해도 됨
	auto p2 = f2;	//C++ auto type change...
	//Q. auto는 기존 C에서는 자동 변수라는 것을 명확히 알려주는 키워드 였는데
	//C++에서는 자기가 알아서 판단하여 데이터 형을 지정 해주는 것인가?

	cout << "포인터 함수:\n";
	cout << "주소 값\n";
	cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;	//리턴값 반환, 주소 / 값으로
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;			//(*p1)대신 p1으로도 사용이 가능하니깐

	//pointer array
	const double* (*pa[3]) (const double*, int) = { f1, f2, f3 };
	//const double* (*p4)[3] (const double*, int) = { f1,f2,f3 };	// 이러면 안되더라, 아무래도 괄호와 연관 있을 듯
	//const double* *(*(*pa)[3])(const double *,int);
	auto pb = pa;
	cout << "\n배열이 가지고 있는 원소들의 함수 포인터:\n";
	cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
	cout << "\n포인터가 가리키는 함수 포인터:\n";
	cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	//함수 포인터를 원소로 가지는 배열을 가리키는 포인터
	cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터:\n";
	cout << "주소 값\n";
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//pd를 선언하는 복잡한 방법
	const double* (*(*pd)[3])(const double*, int) = &pa;
	//pdb에 리턴값을 저장 한다.
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//또다른 방법
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2]) (av, 3) << endl;
	//cint.get();
	return 0;
}

const double* f1(const double ar[], int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar + 1;
}
const double* f3(const double* ar, int n)
{
	return ar + 2;
}