//3->10->5->16->8->4->2->1
#include <iostream>
#include <climits>

void weird_func(long long);

int main(void)
{
	using::std::cout;
	using::std::endl;
	long long input;
	//cout << "Please, Input Number" << endl;
	std::cin >> input;
	cout << input ;
	weird_func(input);
	return 0;
}

void weird_func(long long n)
{
	long long result = n;
	while (result != 1)
	{
		if (result % 2)	//Ȧ���̸�
		{
			result = result * 3 + 1;
		}
		else		//¦����
		{
			result /= 2;
		}
		std::cout << " " << result;
	}
}