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
	//�̰��� �Լ������� �̴�.
	// p1 = f2 �̷������� ����ص� ��
	auto p2 = f2;	//C++ auto type change...
	//Q. auto�� ���� C������ �ڵ� ������� ���� ��Ȯ�� �˷��ִ� Ű���� ���µ�
	//C++������ �ڱⰡ �˾Ƽ� �Ǵ��Ͽ� ������ ���� ���� ���ִ� ���ΰ�?

	cout << "������ �Լ�:\n";
	cout << "�ּ� ��\n";
	cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;	//���ϰ� ��ȯ, �ּ� / ������
	cout << p2(av, 3) << ":" << *p2(av, 3) << endl;			//(*p1)��� p1���ε� ����� �����ϴϱ�

	//pointer array
	const double* (*pa[3]) (const double*, int) = { f1, f2, f3 };
	//const double* (*p4)[3] (const double*, int) = { f1,f2,f3 };	// �̷��� �ȵǴ���, �ƹ����� ��ȣ�� ���� ���� ��
	//const double* *(*(*pa)[3])(const double *,int);
	auto pb = pa;
	cout << "\n�迭�� ������ �ִ� ���ҵ��� �Լ� ������:\n";
	cout << "�ּ� ��\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
	cout << "\n�����Ͱ� ����Ű�� �Լ� ������:\n";
	cout << "�ּ� ��\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	//�Լ� �����͸� ���ҷ� ������ �迭�� ����Ű�� ������
	cout << "\n�����͸� ���ҷ� ������ �迭�� ����Ű�� ������:\n";
	cout << "�ּ� ��\n";
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//pd�� �����ϴ� ������ ���
	const double* (*(*pd)[3])(const double*, int) = &pa;
	//pdb�� ���ϰ��� ���� �Ѵ�.
	const double* pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//�Ǵٸ� ���
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