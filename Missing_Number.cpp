#include <iostream>

int main(void)
{
	using namespace std;
	int inputNum;
	long long inputNum2;
	long long inputSum = 0;
	long long outputSum = 0;
	long long output;
	cin >> inputNum;
	for (long long i = 1; i < inputNum; i++)
	{
		cin >> inputNum2;
		inputSum += inputNum2;
		outputSum += i;
	}
	outputSum += inputNum;
	cout << outputSum - inputSum;
	return 0;
}