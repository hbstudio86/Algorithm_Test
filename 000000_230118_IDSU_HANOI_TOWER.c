#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>


void HanoiTowerMove(int, char, char, char);

int main() {

	HanoiTowerMove(4, 'A', 'B', 'C');

	return 0;
}


void HanoiTowerMove(int num, char from, char by, char to) {

	if (num == 1) {
		printf("���� 1�� %c���� %c�� �̵� \n", from, to);
	}
	else {
		HanoiTowerMove(num - 1, from, to, by);
		printf("���� %d��(��) %c���� %c�� �̵� \n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}

}
