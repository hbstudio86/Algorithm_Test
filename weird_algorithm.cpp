#include <iostream>

int main(void)
{
	using namespace std;
	long long result;
	cin >> result;
	cout << result;
	while (result != 1)
	{
		if (result % 2)	//È¦¼öÀÌ¸é
			result = result * 3 + 1;
		else		//Â¦¼ö¸é
			result /= 2;
		std::cout << " " << result;
	}
	return 0;
}