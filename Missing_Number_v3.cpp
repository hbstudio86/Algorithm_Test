#include <iostream> 

using namespace std;

int main(void)
{
	long long inPut1, inPut2, sum = 0;
	int cnt = 0;

	cin >> inPut1;	//first input
	if (!(inPut1 % 2))	//Â¦¼ö
		{
			sum = ((inPut1 * inPut1 / 2) + inPut1 / 2);
		}
	else  //È¦¼ö
		{
			sum = (inPut1 * ((inPut1 / 2) + (inPut1 % 2)));
		}
	while ((inPut1 - 1) > cnt)
	{
		cin >> inPut2;
		sum -= inPut2;
		cnt++;
	}
	printf("%lld", sum);
	return 0;
}