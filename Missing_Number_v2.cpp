#include <iostream> 

using namespace std;

int main(void)
{
	long long inPut1,inPut2,sum = 0;
	cin >> inPut1;	//first input
	while (1)
	{
		int cnt = 0;
		cin >> inPut2;
		sum += inPut2;
		cnt++;
		if (inPut1 - 1 == cnt)
		{
			if (!(inPut1 % 2))	//Â¦¼ö
			{
				cout << ((inPut1 * inPut1 / 2) + inPut1 / 2) - sum;
			}
			else
			{
				// n * m
				// k <= n / 2
				// k += n % 2
			}
			break;
		}
	}
	return 0;
}