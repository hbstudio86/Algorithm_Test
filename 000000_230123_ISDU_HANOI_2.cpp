#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>


void HanoiTower(int, char, char, char);

int main() {

	int command = 0;

	while (1) {
		printf("�ϳ���Ÿ���� ���� ������ �Է��ϼ���(����� 0):__\b\b");
		scanf("%d", &command);
		if (command == 0)
			break;
		else
			HanoiTower(command, 'A', 'B', 'C');

	}


}

void HanoiTower(int Disk, char From, char By, char To) {

	if (Disk == 1) {
		printf("%dDisk, %c��� -> %c���\n", Disk, From, To);
		return;
	}

	//A�� �ִ� DIS�� ��� B�� �ű��
	HanoiTower(Disk - 1, From, To, By);
	printf("%dDisk, %c��� -> %c���\n", Disk, From, To);
	HanoiTower(Disk - 1, By, From, To);

}