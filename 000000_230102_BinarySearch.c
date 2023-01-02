#include <stdio.h>

int BSearch(int[], int, int);

int main(void) {

	return 0;
}

int BSearch(int ar[], int len, int trg) {
	int First = 0;
	int Last = len - 1;
	int mid;

	while (First <= Last)
	{
		mid = (First + Last) / 2;
		if (trg == ar[mid]) {
			return mid;
		}
		else {
			if (trg < ar[mid]) {
				Last = mid - 1;
			}
			else {
				First = mid + 1;
			}
		}
	}
	return -1;
}