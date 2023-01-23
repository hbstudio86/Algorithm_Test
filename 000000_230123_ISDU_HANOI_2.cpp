#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>


void HanoiTower(int, char, char, char);

int main() {

	int command = 0;

	while (1) {
		printf("하노이타워의 원반 개수를 입력하세요(종료는 0):__\b\b");
		scanf("%d", &command);
		if (command == 0)
			break;
		else
			HanoiTower(command, 'A', 'B', 'C');

	}


}

void HanoiTower(int Disk, char From, char By, char To) {

	if (Disk == 1) {
		printf("%dDisk, %c기둥 -> %c기둥\n", Disk, From, To);
		return;
	}

	//A에 있는 DIS를 모두 B로 옮기기
	HanoiTower(Disk - 1, From, To, By);
	printf("%dDisk, %c기둥 -> %c기둥\n", Disk, From, To);
	HanoiTower(Disk - 1, By, From, To);

}