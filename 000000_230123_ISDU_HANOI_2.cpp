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
	HanoiTower(Disk - 1, From, To, By);	//A에 있는 Disk하나를 B로 옮겨야 한다. Disk수가 홀수냐 짝수냐에 따라 B와 C로 놓는 것이 달라진다.
	printf("%dDisk, %c기둥 -> %c기둥\n", Disk, From, To);		//제일 큰 Disk를 C로 옮긴다.
	HanoiTower(Disk - 1, By, From, To);	//B에 있는 Disk를 C로 옮기는 과정을 수행 한다.

}

/*총평: 하노이 타워 알고리즘을 어떤 사고로 생각해냈는지가 궁금했다.
	책과 교육 영상을 계속 돌려 보면서 그 사람들이 왜 이런 알고리즘을 구현했는지가 궁금 했었다.
	규칙을 찾아보기도 했고, 나름 다름 방식의 알고리즘을 구현 해보려고 했으나
	책에 있는 내용을 보고 영감이 떠올랐다.
	목적지만 잘 지정해주면 되는 것이었다.
	A -> B로 이동할 시 홀수와 짝수에 따라 A->B로 바로 가는 경우와 A->C->B로 가는 과정으로 나눌 수 있고
	B -> C로 이동하는 경우도 마찬가지 였다.
	이러한 단순한 원리를 이해 하니깐 알고리즘 자체를 암기해서 작성한 것이 아닌 
	머리에 생각이 나는대로 작성을 했다..
	이후에 이 영감을 잊을 수 있겠으나.. 핵심은 출발지점과 종료 지점을
	번갈아 가면서 지정을 해주는 것이 관건이다.
*/
