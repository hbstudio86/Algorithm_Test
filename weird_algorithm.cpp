#include <iostream>

int main(void)
{
	using namespace std;
	long long result;
	cin >> result;
	cout << result;
	while (result != 1)
	{
		if (result % 2)	//Ȧ���̸�
			result = result * 3 + 1;
		else		//¦����
			result /= 2;
		std::cout << " " << result;
	}
	return 0;
}