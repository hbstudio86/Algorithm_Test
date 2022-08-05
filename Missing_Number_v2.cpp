#include <iostream> 

using namespace std;

int main(void)
{
	long long inPut1,inPut2,sum = 0;
	int cnt = 0;

	cin >> inPut1;	//first input
	while (1)
	{
		cin >> inPut2;
		sum += inPut2;
		cnt++;
		if (inPut1 - 1 == cnt)
		{
			if (!(inPut1 % 2))	//Â¦¼ö
			{
				printf("%lld", ((inPut1 * inPut1 / 2) + inPut1 / 2) - sum);
				//cout << ((inPut1 * inPut1 / 2) + inPut1 / 2) - sum;
			}
			else  //È¦¼ö
			{
				printf("%lld", (inPut1 * ((inPut1 / 2) + (inPut1 % 2))) - sum);
				//cout << (inPut1 * ((inPut1 / 2) + (inPut1 % 2))) - sum;
			}
			break;
		}
	}
	return 0;
}