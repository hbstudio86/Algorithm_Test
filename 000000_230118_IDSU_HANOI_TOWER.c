#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

#define DEFAULTSIZE 3				//�ϳ���Ÿ�� ������ �⺻ ����
static int _iCrops = DEFAULTSIZE;	//�������� �ٲ� �� �ְ� ���������� static���� ���� ���ش�.

//�ϳ���Ÿ��
//Ÿ���� ���̸� �Է� �޴´�
//����Ǵ� step�� �ϳ��� ��� �Ѵ�.
//������ ũ�⸦ ���ڷ� ǥ���Ѵ�.
//�⺻ ����Ʈ ũ��� 3 >> ������ ������ ��
//setting

void _fSetting(void);

int main() {

	_fSetting();
	printf("%d", _iCrops);

	return 0;
}

void _fSetting(void) {

	printf("==================[SETTING]================\n");
	printf("1. Input Tower height (default:%d):__\b\b",_iCrops);
	scanf("%d", &_iCrops);
	getchar();

}